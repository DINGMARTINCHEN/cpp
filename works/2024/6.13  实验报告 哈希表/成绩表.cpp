#include<bits/stdc++.h>
#define MAX 666 
void input(); /*�������ݺ���*/
void sort();/*�������ݺ���*/
void sort1(); 
void sort2(); 
void sort3();  
void display();/*��ʾ���ݺ���*/ 
void display1();
void insert(); /*�������ݺ���*/
void del(); /*ɾ�����ݺ���*/
void average(); /*ƽ��ֵ����*/
void find();/*�������ݺ���*/
void find1();
void find2(); 
void save(); /*�������ݺ���*/
void read(); /*�������ݺ���*/
void del_file();  /*ɾ���ļ�����*/
void modify(); /*�޸��ļ�����*/
int now_no=0; 
struct student 
{ 
  int no; 
  char name[20]; 
  char sex[4]; 
  float score1; 
  float score2; 
  float score3; 
  float sort; 
  float ave; 
  float sum; 
}; 
struct student stu[MAX],*p; 
main()/*������*/ 
{ 
int as;
  char ch;
  do{
 
     start: printf("\n\n\n\t\t\t��ӭʹ��С�׵�ѧ���ɼ�����ϵͳ\n"); 
       printf("\n\n\n\n\n\n\t\t******************�����������********************");
       ch=getchar();
    }
  while(!ch); 
  system("cls");
 /*һ��Ϊ����ѡ��ģ��*/ 
 do 
 { 
    printf("\n\t\t\t\t1.¼��ѧԱ��Ϣ\n\t\t\t\t2.��ʾѧԱ�ܳɼ���Ϣ\n\t\t\t\t3.���ܳɼ�����\n\t\t\t\t4.��ʾѧԱ���Ƴɼ�����\n\t\t\t\t5.���ѧԱ��Ϣ\n\t\t\t\t6.ɾ��ѧԱ��Ϣ\n\t\t\t\t7.�޸�ѧԱ��Ϣ\n\t\t\t\t8.��ѯѧԱ��Ϣ\n\t\t\t\t9.���ļ�����ѧԱ��Ϣ\n\t\t\t\t10.ɾ���ļ���ѧԱ��Ϣ\n\t\t\t\t11.����ѧԱ��Ϣ\n\t\t\t\t12.�˳�\n"); 
    printf("\t\t\t\tѡ����ѡ��(������ѡ����ǰ������):"); 
    fflush(stdin);
    /*���ÿɲ��ã�������������ֹ�´���scanf�����ǳ��ִ���*/ 
    scanf("%d",&as); 
    switch(as) 
    { 
       case 1:system("cls");
              input();
              break; 
       case 2:system("cls");
              display();
              break;
       case 3:system("cls");
              sort();
              break;
       case 4:system("cls");
              display1();
              break;
       case 5:system("cls");
              insert();
              break;
       case 6:system("cls");
              del();
              break; 
       case 7:system("cls");
              modify();
              break; 
       case 8:system("cls");
              find();
              break; 
       case 9:system("cls");
              read();
              break; 
       case 10:system("cls");
              del_file();
              break; 
       case 11:system("cls");
              save();
              break; 
       case 12:system("exit");
              exit(0); 
       default:system("cls");
              goto start; 
    } 
 }while(1);/*while(1)��1��ʾ�棬����while(1)��ʾ��Զѭ����ȥ��һ����while(1)��ѭ�����ڶ���break ����return ����ѭ��*/ 
       /*���˹���ѡ�����*/ 
} 

void input()/*ԭʼ����¼��ģ��*/ 
{ 
  int i=0; 
  char ch; 
  do 
   { 
         printf("\t\t\t\t1.¼��ѧԱ��Ϣ\n�����%d��ѧԱ����Ϣ\n",i+1); 
         printf("\n����ѧ�����:"); 
         scanf("%d",&stu[i].no); 
         fflush(stdin); 
         printf("\n����ѧԱ����:"); 
         fflush(stdin); 
         gets(stu[i].name); 
         printf("\n����ѧԱ�Ա�:"); 
         fflush(stdin); 
         gets(stu[i].sex); 
         printf("\n����ѧԱ�ɼ�1:"); 
         scanf("%f",&stu[i].score1); 
         printf("\n����ѧԱ�ɼ�2:"); 
         fflush(stdin); 
         scanf("%f",&stu[i].score2); 
         printf("\n����ѧԱ�ɼ�3:"); 
         fflush(stdin); 
         scanf("%f",&stu[i].score3); 
         printf("\n\n"); 
         i++; 
         now_no=i; 
         printf("�Ƿ��������?(Y/N)"); 
         fflush(stdin); 
         ch=getchar(); 
         system("cls"); 
   } 
   while(ch!='n'&&ch!='N'); 
   system("cls"); 
} 
void sort()/*�������ݺ���*/ 
{ 
    struct student temp; 
    int i,j; 
    average();
    for(i=1;i<now_no;i++) 
    { 
      for(j=1;j<=now_no-i;j++) 
         { 
            if(stu[j-1].ave<stu[j].ave) 
               { 
                  temp=stu[j]; 
                  stu[j]=stu[j-1]; 
                  stu[j-1]=temp; 
                } 
         } 
    } 
    printf("��������ɽ��빦��2�ɽ�����ʾ\n");
    system("pause");
    system("cls");
} 
void sort1()/*�������ݺ���*/ 
{ 
  struct student temp; 
  int i,j; 
  for(i=1;i<now_no;i++) 
   { 
      for(j=1;j<=now_no-i;j++) 
         { 
             if(stu[j-1].score1<stu[j].score1) 
                { 
                     temp=stu[j]; 
                     stu[j]=stu[j-1]; 
                     stu[j-1]=temp; 
                } 
          } 
   } 
} 
void sort2()/*�������ݺ���*/ 
{ 
     struct student temp; 
     int i,j; 
     for(i=1;i<now_no;i++) 
      { 
        for(j=1;j<=now_no-i;j++) 
          { 
             if(stu[j-1].score2<stu[j].score2) 
                 { 
                    temp=stu[j]; 
                    stu[j]=stu[j-1]; 
                    stu[j-1]=temp; 
                 } 
          } 
      } 
} 
void sort3()/*�������ݺ���*/ 
{ 
     struct student temp; 
     int i,j; 
     for(i=1;i<now_no;i++) 
       { 
          for(j=1;j<=now_no-i;j++) 
            { 
               if(stu[j-1].score3<stu[j].score3) 
                  { 
                      temp=stu[j]; 
                      stu[j]=stu[j-1]; 
                      stu[j-1]=temp; 
                  } 
            } 
       } 
}
void display()/*��ʾ���ݺ���*/ 
{ 
  int i; 
  char as; 
  average();    
  do 
   { 
      printf("\t\t\t�༶ѧԱ��Ϣ�б�\n"); 
      printf("\t���\t����\t�Ա�\t�ɼ�1\t�ɼ�2\t�ɼ�3\tƽ��ֵ\n"); 
      for(i=0;i<now_no&&stu[i].name[0];i++) 
         printf("\t%d\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",stu[i].no,stu[i].name,stu[i].sex,stu[i].score1,stu[i].score2,stu[i].score3,stu[i].ave); 
      printf("\t\t��������������˵�."); 
      fflush(stdin); 
      as=getchar(); 
   } 
  while(!as); 
  system("cls"); 
}
void display1()/*��ʾ���ݺ���*/
{
   int i; 
   char as;   
   do 
    { 
       printf("\t\t\t�༶ѧԱscore1�ɼ�����\n"); 
       printf("\t���\t����\t�Ա�\t�ɼ�1\n");
       sort1();
       for(i=0;i<now_no&&stu[i].name[0];i++)
          printf("\t%d\t%s\t%s\t%.2f\t\n",stu[i].no,stu[i].name,stu[i].sex,stu[i].score1); 
       printf("\t\t\t�༶ѧԱscore2�ɼ�����\n"); 
       printf("\t���\t����\t�Ա�\t�ɼ�2\n");
       sort2();
       for(i=0;i<now_no&&stu[i].name[0];i++)
           printf("\t%d\t%s\t%s\t%.2f\t\n",stu[i].no,stu[i].name,stu[i].sex,stu[i].score2);  
       printf("\t\t\t�༶ѧԱscore3�ɼ�����\n"); 
       printf("\t���\t����\t�Ա�\t�ɼ�3\n");
       sort3();
       for(i=0;i<now_no&&stu[i].name[0];i++)
           printf("\t%d\t%s\t%s\t%.2f\t\n",stu[i].no,stu[i].name,stu[i].sex,stu[i].score3);  
       printf("\t\t��������������˵�."); 
       fflush(stdin); 
       as=getchar(); 
    } 
   while(!as); 
   system("cls"); 
}

void insert()/*�������ݺ���*/ 
{ 
   char ch; 
   do 
    { 
        printf("\n\t\t�����²���ѧԱ����Ϣ\n"); 
        printf("\n����ѧ�����:"); 
        scanf("%d",&stu[now_no].no); 
        fflush(stdin); 
        printf("\n����ѧԱ����:"); 
        fflush(stdin); 
        gets(stu[now_no].name); 
        printf("\n����ѧԱ�Ա�:"); 
        fflush(stdin); 
        gets(stu[now_no].sex); 
        printf("\n����ѧԱ�ɼ�1:"); 
        fflush(stdin); 
        scanf("%f",&stu[now_no].score1); 
        printf("\n����ѧԱ�ɼ�2:"); 
        fflush(stdin); 
        scanf("%f",&stu[now_no].score2); 
        printf("\n����ѧԱ�ɼ�3:"); 
        fflush(stdin); 
        scanf("%f",&stu[now_no].score3); 
        printf("\n\n"); 
        now_no=now_no+1; 
        sort(); 
        printf("�Ƿ��������?(Y/N)"); 
        fflush(stdin); 
        ch=getchar(); 
        system("cls"); 
     } 
     while(ch!='n'&&ch!='N'); 
} 
void del()/*ɾ�����ݺ���*/ 
{ 
    int inum,i; 
    printf("����Ҫɾ��ѧԱ�ı��:"); 
    fflush(stdin); 
    scanf("%d",&inum); 
    for(i=0;i<now_no;i++) 
      { 
        if(stu[i].no==inum) 
          { 
             if(i==now_no)now_no-=1; 
             else 
               { 
                   stu[i]=stu[now_no-1]; 
                   now_no-=1; 
               } 
             sort(); 
             break; 
          } 
       } 
     system("cls"); 
} 
void save()/*�������ݺ���*/ 
{ 
    FILE *fp; 
    int i; 
    char filepath[20]; 
    printf("����Ҫ������ļ�·��:"); 
    fflush(stdin); 
    gets(filepath); 
    if((fp=fopen(filepath,"w"))==NULL) 
      { 
          printf("\n����ʧ��!"); 
          exit(0); 
      } 
    for(i=0;i<now_no;i++) 
         { 
              stu[i].sum=stu[i].score1+stu[i].score2+stu[i].score3; 
              stu[i].ave=stu[i].sum/3; 
              fprintf(fp,"\t%d\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",stu[i].no,stu[i].name,stu[i].sex,stu[i].score1,stu[i].score2,stu[i].score3,stu[i].ave); 
         } 
    fclose(fp); 
    printf("ѧ����Ϣ�ѱ�����%s��!\n",filepath); 
    system("pause"); 
    system("cls"); 
} 
void find()/*��ѯ����*/ 
{ 
    int i; 
    char str[20],as; 
    do 
     { 
        printf("����Ҫ��ѯ��ѧ������:"); 
        fflush(stdin); 
        gets(str); 
        for(i=0;i<now_no;i++) 
        if(!strcmp(stu[i].name,str)) 
           { 
              printf("\t���\t����\t�Ա�\t�ɼ�1\t�ɼ�2\t�ɼ�3\tƽ��ֵ\n"); 
              printf("\t%d\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",stu[i].no,stu[i].name,stu[i].sex,stu[i].score1,stu[i].score2,stu[i].score3,stu[i].ave); 
           } 
        printf("\t\t��������������˵�."); 
        fflush(stdin); 
        as=getchar(); 
      } 
    while(!as); 
    system("cls"); 
} 


void average()/*��ƽ����*/ 
{ 
  int i; 
  for(i=0;i<now_no;i++) 
    { 
        stu[i].sum=stu[i].score1+stu[i].score2+stu[i].score3; 
        stu[i].ave=stu[i].sum/3; 
    } 
} 
void modify()/*�޸����ݺ���*/ 
{ 
  int i; 
  char str[20]; 
  printf("����Ҫ�޸ĵ�ѧ������:"); 
  fflush(stdin); 
  gets(str); 
  for(i=0;i<now_no;i++) 
  {
     if(!strcmp(stu[i].name,str)) 
        { 
        system("cls"); 
        printf("\n\t\t�����²���ѧԱ����Ϣ\n"); 
        printf("\n����ѧ�����:"); 
        fflush(stdin); 
        scanf("%d",&stu[i].no); 
        printf("\n����ѧԱ�Ա�:"); 
        fflush(stdin); 
        gets(stu[i].sex); 
        printf("\n����ѧԱ�ɼ�1:"); 
        fflush(stdin); 
        scanf("%f",&stu[i].score1); 
        printf("\n����ѧԱ�ɼ�2:"); 
        fflush(stdin); 
        scanf("%f",&stu[i].score2); 
        printf("\n����ѧԱ�ɼ�3:"); 
        fflush(stdin); 
        scanf("%f",&stu[i].score3); 
        printf("\n\n"); 
        sort(); 
        break; 
       }
  }
  system("cls"); 
} 

void read() 
{ 
  FILE *fp; 
  int i; 
  char filepath[20]; 
  printf("����Ҫ������ļ�·��:"); 
  fflush(stdin); 
  gets(filepath); 
  if((fp=fopen(filepath,"r"))==NULL) 
    { 
       printf("�Ҳ���%s�ļ�!\n",filepath); 
       system("pause"); 
       exit(0); 
    } 
 now_no=0; 
 for(i=0;i<MAX&&!feof(fp);i++) 
    { 
       fscanf(fp,"\t%d\t%s\t%s\t%f\t%f\t%f\t%f\n",&stu[i].no,stu[i].name,stu[i].sex,&stu[i].score1,&stu[i].score2,&stu[i].score3,&stu[i].ave); 
       now_no++; 
    } 
 fclose(fp); 
 printf("��������ļ�%s�е�������Ϣ�Ѿ�����!\n",filepath); 
 system("pause"); /*�����������*/
 system("cls"); 
} 

void del_file() 
{ 
 FILE *fp; 
 char filepath[20]; 
 printf("����Ҫɾ�����ļ�·��:"); 
 fflush(stdin); 
 gets(filepath); 
 fp=fopen(filepath,"w"); 
 fclose(fp); 
 printf("��������ļ�%s�е�������Ϣ�Ѿ�ɾ��!\n",filepath); 
 system("pause"); 
 system("cls"); 
}
