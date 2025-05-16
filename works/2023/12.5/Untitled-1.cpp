#include<stdio.h>
#include<string.h>
#include<stdbool.h>


bool jiance1(int x,int y,char a[])    
{
    int i,n;
    char b[y+1],c[y+1][x+1];
    char s=&a,d=&c;
    for(i=0;i<x;i++)
    {
        if(strstr(s,"O O O O O")!=NULL)
        {
            printf("game over!"); 
            return 1;
        }
    }
    for(i=0;i<x;i++)
    {
        strcpy(b,a[i]);
        for(n=0;n<y;n++)
        {
            c[n][i]=b[n];
        }
    }
    for(i=0;i<y;i++)
    {    
        if(strstr(d,"OOOOO")!=NULL)
        {
            printf("game over!"); 
            return 1;
        }
    }
    return 0; 
}



bool jiance2(int x,int y,char a[])    
{
    int i,n;
    char c[x*y];
    for(i=0;i<x;i++)
    {
        if(strstr(a[i],"O O O O O")!=NULL)
        {
            printf("game over!"); 
            return 1;
        }
    }
    for(i=0;i<x;i++)
    {
        for(n=0;n<y;n++)
        {
            c[n][i]=a[i][n];
        }
    }
    for(i=0;i<y;i++)
    {    
        if(strstr(c[i:i+x],"OOOOO")!=NULL)
        {
            printf("game over!"); 
            return 1;
        }
    }
    return 0; 
}




int main()
{
    int i,v,m,b,c,n,time=0;
    int x=10,y=20;
    char a[x][y],qizi;
    for(i=0;i<x;i++)
    {
            for(v=0;v<y;v+=2)
            {
                a[i][v]='+';
                a[i][v+1]=' ';
                printf("%c%c",a[i][v],a[i][v+1]);
        }
        v=0;
        printf("\n");
    }
    while(scanf("%d%d",&b,&c)!=EOF)
    {
        time+=1;
        if(time%2==0)
        {
            qizi='O';
        }
        else
        {
            qizi='*';
        }
        a[b-1][2*c-2]=qizi;
        /*
        if(jiance1(x,y,a)==1)
        {
            return 0;
        }*/
        system("cls");
        for(m=0;m<x;m+=1)
        {
            for(n=0;n<y;n+=2)
            {    
                printf("%c%c",a[m][n],a[m][n+1]);
            }
            n=0;
            printf("\n");
        }
    }
    return 0;
 } 
