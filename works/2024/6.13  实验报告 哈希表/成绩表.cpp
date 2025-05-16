#include<bits/stdc++.h>
#define MAX 666 
void input(); /*输入数据函数*/
void sort();/*排序数据函数*/
void sort1(); 
void sort2(); 
void sort3();  
void display();/*显示数据函数*/ 
void display1();
void insert(); /*插入数据函数*/
void del(); /*删除数据函数*/
void average(); /*平均值函数*/
void find();/*查找数据函数*/
void find1();
void find2(); 
void save(); /*保存数据函数*/
void read(); /*读出数据函数*/
void del_file();  /*删除文件函数*/
void modify(); /*修改文件函数*/
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
main()/*主函数*/ 
{ 
int as;
  char ch;
  do{
 
     start: printf("\n\n\n\t\t\t欢迎使用小白的学生成绩管理系统\n"); 
       printf("\n\n\n\n\n\n\t\t******************按任意键继续********************");
       ch=getchar();
    }
  while(!ch); 
  system("cls");
 /*一下为功能选择模块*/ 
 do 
 { 
    printf("\n\t\t\t\t1.录入学员信息\n\t\t\t\t2.显示学员总成绩信息\n\t\t\t\t3.对总成绩排序\n\t\t\t\t4.显示学员单科成绩排序\n\t\t\t\t5.添加学员信息\n\t\t\t\t6.删除学员信息\n\t\t\t\t7.修改学员信息\n\t\t\t\t8.查询学员信息\n\t\t\t\t9.从文件读入学员信息\n\t\t\t\t10.删除文件中学员信息\n\t\t\t\t11.保存学员信息\n\t\t\t\t12.退出\n"); 
    printf("\t\t\t\t选择功能选项(输入所选功能前的数字):"); 
    fflush(stdin);
    /*可用可不用，用于清除缓存防止下次用scanf输入是出现错误*/ 
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
 }while(1);/*while(1)，1表示真，所以while(1)表示永远循环下去，一般在while(1)的循环体内都有break 或者return 跳出循环*/ 
       /*至此功能选择结束*/ 
} 

void input()/*原始数据录入模块*/ 
{ 
  int i=0; 
  char ch; 
  do 
   { 
         printf("\t\t\t\t1.录入学员信息\n输入第%d个学员的信息\n",i+1); 
         printf("\n输入学生编号:"); 
         scanf("%d",&stu[i].no); 
         fflush(stdin); 
         printf("\n输入学员姓名:"); 
         fflush(stdin); 
         gets(stu[i].name); 
         printf("\n输入学员性别:"); 
         fflush(stdin); 
         gets(stu[i].sex); 
         printf("\n输入学员成绩1:"); 
         scanf("%f",&stu[i].score1); 
         printf("\n输入学员成绩2:"); 
         fflush(stdin); 
         scanf("%f",&stu[i].score2); 
         printf("\n输入学员成绩3:"); 
         fflush(stdin); 
         scanf("%f",&stu[i].score3); 
         printf("\n\n"); 
         i++; 
         now_no=i; 
         printf("是否继续输入?(Y/N)"); 
         fflush(stdin); 
         ch=getchar(); 
         system("cls"); 
   } 
   while(ch!='n'&&ch!='N'); 
   system("cls"); 
} 
void sort()/*排序数据函数*/ 
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
    printf("排序以完成进入功能2可进行显示\n");
    system("pause");
    system("cls");
} 
void sort1()/*排序数据函数*/ 
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
void sort2()/*排序数据函数*/ 
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
void sort3()/*排序数据函数*/ 
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
void display()/*显示数据函数*/ 
{ 
  int i; 
  char as; 
  average();    
  do 
   { 
      printf("\t\t\t班级学员信息列表\n"); 
      printf("\t编号\t姓名\t性别\t成绩1\t成绩2\t成绩3\t平均值\n"); 
      for(i=0;i<now_no&&stu[i].name[0];i++) 
         printf("\t%d\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",stu[i].no,stu[i].name,stu[i].sex,stu[i].score1,stu[i].score2,stu[i].score3,stu[i].ave); 
      printf("\t\t按任意键返回主菜单."); 
      fflush(stdin); 
      as=getchar(); 
   } 
  while(!as); 
  system("cls"); 
}
void display1()/*显示数据函数*/
{
   int i; 
   char as;   
   do 
    { 
       printf("\t\t\t班级学员score1成绩排序\n"); 
       printf("\t编号\t姓名\t性别\t成绩1\n");
       sort1();
       for(i=0;i<now_no&&stu[i].name[0];i++)
          printf("\t%d\t%s\t%s\t%.2f\t\n",stu[i].no,stu[i].name,stu[i].sex,stu[i].score1); 
       printf("\t\t\t班级学员score2成绩排序\n"); 
       printf("\t编号\t姓名\t性别\t成绩2\n");
       sort2();
       for(i=0;i<now_no&&stu[i].name[0];i++)
           printf("\t%d\t%s\t%s\t%.2f\t\n",stu[i].no,stu[i].name,stu[i].sex,stu[i].score2);  
       printf("\t\t\t班级学员score3成绩排序\n"); 
       printf("\t编号\t姓名\t性别\t成绩3\n");
       sort3();
       for(i=0;i<now_no&&stu[i].name[0];i++)
           printf("\t%d\t%s\t%s\t%.2f\t\n",stu[i].no,stu[i].name,stu[i].sex,stu[i].score3);  
       printf("\t\t按任意键返回主菜单."); 
       fflush(stdin); 
       as=getchar(); 
    } 
   while(!as); 
   system("cls"); 
}

void insert()/*插入数据函数*/ 
{ 
   char ch; 
   do 
    { 
        printf("\n\t\t输入新插入学员队信息\n"); 
        printf("\n输入学生编号:"); 
        scanf("%d",&stu[now_no].no); 
        fflush(stdin); 
        printf("\n输入学员姓名:"); 
        fflush(stdin); 
        gets(stu[now_no].name); 
        printf("\n输入学员性别:"); 
        fflush(stdin); 
        gets(stu[now_no].sex); 
        printf("\n输入学员成绩1:"); 
        fflush(stdin); 
        scanf("%f",&stu[now_no].score1); 
        printf("\n输入学员成绩2:"); 
        fflush(stdin); 
        scanf("%f",&stu[now_no].score2); 
        printf("\n输入学员成绩3:"); 
        fflush(stdin); 
        scanf("%f",&stu[now_no].score3); 
        printf("\n\n"); 
        now_no=now_no+1; 
        sort(); 
        printf("是否继续输入?(Y/N)"); 
        fflush(stdin); 
        ch=getchar(); 
        system("cls"); 
     } 
     while(ch!='n'&&ch!='N'); 
} 
void del()/*删除数据函数*/ 
{ 
    int inum,i; 
    printf("输入要删除学员的编号:"); 
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
void save()/*保存数据函数*/ 
{ 
    FILE *fp; 
    int i; 
    char filepath[20]; 
    printf("输入要保存的文件路径:"); 
    fflush(stdin); 
    gets(filepath); 
    if((fp=fopen(filepath,"w"))==NULL) 
      { 
          printf("\n保存失败!"); 
          exit(0); 
      } 
    for(i=0;i<now_no;i++) 
         { 
              stu[i].sum=stu[i].score1+stu[i].score2+stu[i].score3; 
              stu[i].ave=stu[i].sum/3; 
              fprintf(fp,"\t%d\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",stu[i].no,stu[i].name,stu[i].sex,stu[i].score1,stu[i].score2,stu[i].score3,stu[i].ave); 
         } 
    fclose(fp); 
    printf("学生信息已保存在%s中!\n",filepath); 
    system("pause"); 
    system("cls"); 
} 
void find()/*查询函数*/ 
{ 
    int i; 
    char str[20],as; 
    do 
     { 
        printf("输入要查询的学生姓名:"); 
        fflush(stdin); 
        gets(str); 
        for(i=0;i<now_no;i++) 
        if(!strcmp(stu[i].name,str)) 
           { 
              printf("\t编号\t姓名\t性别\t成绩1\t成绩2\t成绩3\t平均值\n"); 
              printf("\t%d\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",stu[i].no,stu[i].name,stu[i].sex,stu[i].score1,stu[i].score2,stu[i].score3,stu[i].ave); 
           } 
        printf("\t\t按任意键返回主菜单."); 
        fflush(stdin); 
        as=getchar(); 
      } 
    while(!as); 
    system("cls"); 
} 


void average()/*求平均数*/ 
{ 
  int i; 
  for(i=0;i<now_no;i++) 
    { 
        stu[i].sum=stu[i].score1+stu[i].score2+stu[i].score3; 
        stu[i].ave=stu[i].sum/3; 
    } 
} 
void modify()/*修改数据函数*/ 
{ 
  int i; 
  char str[20]; 
  printf("输入要修改的学生姓名:"); 
  fflush(stdin); 
  gets(str); 
  for(i=0;i<now_no;i++) 
  {
     if(!strcmp(stu[i].name,str)) 
        { 
        system("cls"); 
        printf("\n\t\t输入新插入学员队信息\n"); 
        printf("\n输入学生编号:"); 
        fflush(stdin); 
        scanf("%d",&stu[i].no); 
        printf("\n输入学员性别:"); 
        fflush(stdin); 
        gets(stu[i].sex); 
        printf("\n输入学员成绩1:"); 
        fflush(stdin); 
        scanf("%f",&stu[i].score1); 
        printf("\n输入学员成绩2:"); 
        fflush(stdin); 
        scanf("%f",&stu[i].score2); 
        printf("\n输入学员成绩3:"); 
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
  printf("输入要读入的文件路径:"); 
  fflush(stdin); 
  gets(filepath); 
  if((fp=fopen(filepath,"r"))==NULL) 
    { 
       printf("找不到%s文件!\n",filepath); 
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
 printf("保存的在文件%s中的所有信息已经读入!\n",filepath); 
 system("pause"); /*按任意键继续*/
 system("cls"); 
} 

void del_file() 
{ 
 FILE *fp; 
 char filepath[20]; 
 printf("输入要删除的文件路径:"); 
 fflush(stdin); 
 gets(filepath); 
 fp=fopen(filepath,"w"); 
 fclose(fp); 
 printf("保存的在文件%s中的所有信息已经删除!\n",filepath); 
 system("pause"); 
 system("cls"); 
}
