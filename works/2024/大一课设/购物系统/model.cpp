// #define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;


struct Commodity	//商品结构体
{
    int Category;   //商品的种类
    int id; //商品id
    char name[12];    //商品名称
};

struct Customer	//用户结构体
{
    char id[10];    //用户ID
    char password[10];   //用户密码
    int seeCategory[10];    //记录用户查看种类次数
    int buyCategory[10];    //记录用户购买种类次数
    int seeCommodity[10][10];   //记录用户查看商品的次数
    int buyCommodity[10][10];   //记录用户购买商品的次数
    float interCategory[10];    //记录用户对种类的感兴趣度
    float interCommodity[10][10];   //记录用户对商品感兴趣度
};

void Initialize(Commodity[][10],Customer&); //初始化结构体数组
void LogIn(Customer& customer);   //用户登录
void Recommend(Commodity[][10],Customer&);   //推荐商品
void Buy(Commodity[][10],Customer&); //用户购买某商品
void See(Commodity[][10],Customer&); //用户查看某商品
void Interaction(Commodity[][10],Customer&); //交互界面
void SaveCustomer(Customer&,FILE *);    //用户信息存储

char pathName[20];	//存储用户文件
int main()
{   
    Commodity com[10][10];//假设一共10类商品，每类有10个商品
    Customer customer; //用户
    Initialize(com,customer);	//初始化 
    LogIn(customer);	//登录
    Interaction(com,customer);	//人机交互界面
    system("pause");
    return 0;
}

void Initialize(Commodity com[10][10],Customer& customer)//初始化结构体数组
{
    int i ,j;
    FILE * fp;
    //初始化商品结构体数组

    //初始化客户结构体变量
    
    //读取商品信息文件
   
}  

void LogIn(Customer& customer)
{
    system("cls");//清屏
    int i,j;
    char id[10],password[10];	//临时存储输入的账号密码
    FILE * fp;

    printf("初始化输入的ID和密码：\n");
    scanf("%s",id);
    scanf("%s",password);
    strcpy(pathName,id);
    strcat(pathName,".txt");//生成文件名
    fp = fopen(pathName,"r+");//打开用户文件

    if (fp)//如果用户文件存在，即用户非首次登陆
    {
       //...
    }
    else    //如果为首次使用，创建用户文件
    {
        fp = fopen(pathName,"w+");
		strcpy(customer.id,id);	
		strcpy(customer.password, password);
        SaveCustomer(customer,fp);	//保存文件
        fclose(fp);
    }
    
} 

void Buy(Commodity com[10][10],Customer& customer)
{
	FILE* fp = NULL;
	int category = 0, id = 0;

	fp = fopen(pathName,"w+");
	system("cls");

    
    printf("请输入您要购买的商品的类别:\n");
        scanf("%d",&category);
    printf("请输入您要购买的商品的编号:\n");   
        scanf("%d",&id);
    printf("请输入您要购买的商品的名称:\n");
        cin>>com[category][id].name;
    printf("谢谢您的选购！\n");

    customer.buyCategory[category] += 1;   //记录用户购买的种类
    customer.buyCommodity[category][id] += 1;   //记录用户购买的商品
	SaveCustomer(customer, fp);	//保存用户的购物记录
    system("pause");
} 

void See(Commodity com[10][10],Customer& customer)
{
	system("cls");
	FILE* fp = NULL;
	int category = 0, id = 0;

	fp = fopen(pathName, "w+");
    
    printf("请输入您要查看的商品的类别:\n");
        scanf("%d",&category);
    printf("请输入您要查看的商品的编号:\n");   
        scanf("%d",&id);
    printf("您要查看的商品名称是：%s。\n",com[category][id].name);

    customer.seeCategory[category] += 1;   //记录用户查看的种类
    customer.seeCommodity[category][id] += 1;   //记录用户查看的商品
	SaveCustomer(customer,fp);	//保存用户浏览记录
    system("pause");
} 

void Recommend(Commodity commodity[10][10],Customer&customer)
{
  int i, j, m = 0;
  struct		//临时存储用户喜欢的商品
  {
      int category;
      int id;
      float interCommodity;
  } temCommodity[101];
  struct		//临时存储用户喜欢的种类
  {
	  int category;
	  float interCategory;
  }temCategory[11];
  
    //计算感兴趣度。购买的权值为7，查看的权值为3
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            customer.interCommodity[i][j] = (float)(7.0 * customer.buyCommodity[i][j] + 3.0* customer.seeCommodity[i][j]);
        }
            customer.interCategory[i] = (float)( 7.0* customer.buyCategory[i] + 3.0 *customer.seeCategory[i]);
    }

   /**************************************应用冒泡排序算法实现商品的排名推荐**************************************************************/
    for ( i = 0; i < 10; i++)	//给temCommodity赋值
    {
        for ( j = 0; j < 10; j++)
        {
            temCommodity[m].category = i;
            temCommodity[m].id = j;
            temCommodity[m].interCommodity =  customer.interCommodity[i][j];
            m++;
        }
    }

    for ( i = 0; i < 100 - 1; i++)	//冒泡排序,商品排名推荐
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
    printf("\t \t \t      根据您的购物习惯和购物历史，小旭竭诚为您推荐以下商品：     \n");
    printf("\n");
    for ( i = 0; i < 10; i++)
    {
        printf("\t \t \t             ******<  类别：%d,编号: %d,名字：%s  >******\n",commodity[temCommodity[i].category][temCommodity[i].id].Category, commodity[temCommodity[i].category][temCommodity[i].id].id, commodity[temCommodity[i].category][temCommodity[i].id].name);
    }

	/*******************************************实现商品分类推荐***********************************************************/
	for (i = 0; i < 10; i++)//给temCategory赋值
	{
		temCategory[i].category = i;
		temCategory[i].interCategory = customer.interCategory[i];
	}

	for ( i = 0; i < 10 - 1; i++)		//冒泡法排序，实现商品分类推荐
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
	printf("\t \t \t    根据您的购物习惯和购物历史，小旭竭诚为您推荐以下类别商品：\n\n");
	for (i = 0; i < 3; i++)
	{
		printf("\t\t\t\t\t    ******<  类别：%d  >******\n", temCategory[i].category);
	}

}

void SaveCustomer(Customer&customer,FILE *fp)
{
    int i, j;
    fprintf(fp,"%s %s ",customer.id,customer.password);	//保存账号密码

    for ( i = 0; i < 10; i++)	//写入查看种类次数
    {
        fprintf(fp, "%d ", customer.seeCategory[i]);
    }

    for (i = 0; i < 10; i++)	//写入购买种类次数
    {
        fprintf(fp, "%d ", customer.buyCategory[i]);
    }

    for ( i = 0; i < 10; i++)	//写入查看商品次数
    {
        for ( j = 0; j < 10; j++)
        {
            fprintf(fp, "%d ",customer.seeCommodity[i][j]);
        }
    }
    
    for (i = 0; i < 10; i++)	//写入购买商品次数
    {
        for (j = 0; j < 10; j++)
        {
            fprintf(fp, "%d ", customer.buyCommodity[i][j]);
        }
    }
}

void Interaction(Commodity com[10][10],Customer&customer)   //人机交互界面
{   int n;
    system("cls");
    Recommend(com,customer);	//推荐商品

    printf("\n\n\t\t\t\t\t       请您选择要进行的操作：\n\n");
    printf("\t\t\t\t\t\t    1.购买商品\n");
    printf("\t\t\t\t\t\t    2.查看商品\n");
    printf("\t\t\t\t\t\t    3.退出\n");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        Buy(com,customer);		//购买
        Interaction(com,customer);		//递归
        break;
    case 2:
        See(com,customer);	//购买
        Interaction(com,customer);	//递归
        break;

    case 3:
        exit(0);	//退出
        break; 
    
    default:
        Interaction(com,customer);	//递归
        break;
    }
}
