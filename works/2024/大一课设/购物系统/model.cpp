// #define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;


struct Commodity	//��Ʒ�ṹ��
{
    int Category;   //��Ʒ������
    int id; //��Ʒid
    char name[12];    //��Ʒ����
};

struct Customer	//�û��ṹ��
{
    char id[10];    //�û�ID
    char password[10];   //�û�����
    int seeCategory[10];    //��¼�û��鿴�������
    int buyCategory[10];    //��¼�û������������
    int seeCommodity[10][10];   //��¼�û��鿴��Ʒ�Ĵ���
    int buyCommodity[10][10];   //��¼�û�������Ʒ�Ĵ���
    float interCategory[10];    //��¼�û�������ĸ���Ȥ��
    float interCommodity[10][10];   //��¼�û�����Ʒ����Ȥ��
};

void Initialize(Commodity[][10],Customer&); //��ʼ���ṹ������
void LogIn(Customer& customer);   //�û���¼
void Recommend(Commodity[][10],Customer&);   //�Ƽ���Ʒ
void Buy(Commodity[][10],Customer&); //�û�����ĳ��Ʒ
void See(Commodity[][10],Customer&); //�û��鿴ĳ��Ʒ
void Interaction(Commodity[][10],Customer&); //��������
void SaveCustomer(Customer&,FILE *);    //�û���Ϣ�洢

char pathName[20];	//�洢�û��ļ�
int main()
{   
    Commodity com[10][10];//����һ��10����Ʒ��ÿ����10����Ʒ
    Customer customer; //�û�
    Initialize(com,customer);	//��ʼ�� 
    LogIn(customer);	//��¼
    Interaction(com,customer);	//�˻���������
    system("pause");
    return 0;
}

void Initialize(Commodity com[10][10],Customer& customer)//��ʼ���ṹ������
{
    int i ,j;
    FILE * fp;
    //��ʼ����Ʒ�ṹ������

    //��ʼ���ͻ��ṹ�����
    
    //��ȡ��Ʒ��Ϣ�ļ�
   
}  

void LogIn(Customer& customer)
{
    system("cls");//����
    int i,j;
    char id[10],password[10];	//��ʱ�洢������˺�����
    FILE * fp;

    printf("��ʼ�������ID�����룺\n");
    scanf("%s",id);
    scanf("%s",password);
    strcpy(pathName,id);
    strcat(pathName,".txt");//�����ļ���
    fp = fopen(pathName,"r+");//���û��ļ�

    if (fp)//����û��ļ����ڣ����û����״ε�½
    {
       //...
    }
    else    //���Ϊ�״�ʹ�ã������û��ļ�
    {
        fp = fopen(pathName,"w+");
		strcpy(customer.id,id);	
		strcpy(customer.password, password);
        SaveCustomer(customer,fp);	//�����ļ�
        fclose(fp);
    }
    
} 

void Buy(Commodity com[10][10],Customer& customer)
{
	FILE* fp = NULL;
	int category = 0, id = 0;

	fp = fopen(pathName,"w+");
	system("cls");

    
    printf("��������Ҫ�������Ʒ�����:\n");
        scanf("%d",&category);
    printf("��������Ҫ�������Ʒ�ı��:\n");   
        scanf("%d",&id);
    printf("��������Ҫ�������Ʒ������:\n");
        cin>>com[category][id].name;
    printf("лл����ѡ����\n");

    customer.buyCategory[category] += 1;   //��¼�û����������
    customer.buyCommodity[category][id] += 1;   //��¼�û��������Ʒ
	SaveCustomer(customer, fp);	//�����û��Ĺ����¼
    system("pause");
} 

void See(Commodity com[10][10],Customer& customer)
{
	system("cls");
	FILE* fp = NULL;
	int category = 0, id = 0;

	fp = fopen(pathName, "w+");
    
    printf("��������Ҫ�鿴����Ʒ�����:\n");
        scanf("%d",&category);
    printf("��������Ҫ�鿴����Ʒ�ı��:\n");   
        scanf("%d",&id);
    printf("��Ҫ�鿴����Ʒ�����ǣ�%s��\n",com[category][id].name);

    customer.seeCategory[category] += 1;   //��¼�û��鿴������
    customer.seeCommodity[category][id] += 1;   //��¼�û��鿴����Ʒ
	SaveCustomer(customer,fp);	//�����û������¼
    system("pause");
} 

void Recommend(Commodity commodity[10][10],Customer&customer)
{
  int i, j, m = 0;
  struct		//��ʱ�洢�û�ϲ������Ʒ
  {
      int category;
      int id;
      float interCommodity;
  } temCommodity[101];
  struct		//��ʱ�洢�û�ϲ��������
  {
	  int category;
	  float interCategory;
  }temCategory[11];
  
    //�������Ȥ�ȡ������ȨֵΪ7���鿴��ȨֵΪ3
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            customer.interCommodity[i][j] = (float)(7.0 * customer.buyCommodity[i][j] + 3.0* customer.seeCommodity[i][j]);
        }
            customer.interCategory[i] = (float)( 7.0* customer.buyCategory[i] + 3.0 *customer.seeCategory[i]);
    }

   /**************************************Ӧ��ð�������㷨ʵ����Ʒ�������Ƽ�**************************************************************/
    for ( i = 0; i < 10; i++)	//��temCommodity��ֵ
    {
        for ( j = 0; j < 10; j++)
        {
            temCommodity[m].category = i;
            temCommodity[m].id = j;
            temCommodity[m].interCommodity =  customer.interCommodity[i][j];
            m++;
        }
    }

    for ( i = 0; i < 100 - 1; i++)	//ð������,��Ʒ�����Ƽ�
    {
        for ( j = 0; j < 100 - 1 -i; j++)
        {
            if (temCommodity[j + 1].interCommodity  > temCommodity[j].interCommodity)
            {
                temCommodity[100]  = temCommodity[j+1];
                temCommodity[j +1] = temCommodity[j];
                temCommodity[j] = temCommodity[100];
            }
        }
    }
    
    printf("\n\n");
    printf("\t \t \t      �������Ĺ���ϰ�ߺ͹�����ʷ��С��߳�Ϊ���Ƽ�������Ʒ��     \n");
    printf("\n");
    for ( i = 0; i < 10; i++)
    {
        printf("\t \t \t             ******<  ���%d,���: %d,���֣�%s  >******\n",commodity[temCommodity[i].category][temCommodity[i].id].Category, commodity[temCommodity[i].category][temCommodity[i].id].id, commodity[temCommodity[i].category][temCommodity[i].id].name);
    }

	/*******************************************ʵ����Ʒ�����Ƽ�***********************************************************/
	for (i = 0; i < 10; i++)//��temCategory��ֵ
	{
		temCategory[i].category = i;
		temCategory[i].interCategory = customer.interCategory[i];
	}

	for ( i = 0; i < 10 - 1; i++)		//ð�ݷ�����ʵ����Ʒ�����Ƽ�
	{
		for (j = 0; j< 10 - 1 -i; j++) 
		{
			if (temCategory[j + 1].interCategory > temCategory[j].interCategory)
			{
				temCategory[10] = temCategory[j];
				temCategory[j] = temCategory[j + 1];
				temCategory[j + 1] = temCategory[10];
			}
		}
	}
    
    printf("\n\n");
	printf("\t \t \t    �������Ĺ���ϰ�ߺ͹�����ʷ��С��߳�Ϊ���Ƽ����������Ʒ��\n\n");
	for (i = 0; i < 3; i++)
	{
		printf("\t\t\t\t\t    ******<  ���%d  >******\n", temCategory[i].category);
	}

}

void SaveCustomer(Customer&customer,FILE *fp)
{
    int i, j;
    fprintf(fp,"%s %s ",customer.id,customer.password);	//�����˺�����

    for ( i = 0; i < 10; i++)	//д��鿴�������
    {
        fprintf(fp, "%d ", customer.seeCategory[i]);
    }

    for (i = 0; i < 10; i++)	//д�빺���������
    {
        fprintf(fp, "%d ", customer.buyCategory[i]);
    }

    for ( i = 0; i < 10; i++)	//д��鿴��Ʒ����
    {
        for ( j = 0; j < 10; j++)
        {
            fprintf(fp, "%d ",customer.seeCommodity[i][j]);
        }
    }
    
    for (i = 0; i < 10; i++)	//д�빺����Ʒ����
    {
        for (j = 0; j < 10; j++)
        {
            fprintf(fp, "%d ", customer.buyCommodity[i][j]);
        }
    }
}

void Interaction(Commodity com[10][10],Customer&customer)   //�˻���������
{   int n;
    system("cls");
    Recommend(com,customer);	//�Ƽ���Ʒ

    printf("\n\n\t\t\t\t\t       ����ѡ��Ҫ���еĲ�����\n\n");
    printf("\t\t\t\t\t\t    1.������Ʒ\n");
    printf("\t\t\t\t\t\t    2.�鿴��Ʒ\n");
    printf("\t\t\t\t\t\t    3.�˳�\n");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        Buy(com,customer);		//����
        Interaction(com,customer);		//�ݹ�
        break;
    case 2:
        See(com,customer);	//����
        Interaction(com,customer);	//�ݹ�
        break;

    case 3:
        exit(0);	//�˳�
        break; 
    
    default:
        Interaction(com,customer);	//�ݹ�
        break;
    }
}
