// #include<bits/stdc++.h>
// using namespace std;

// int a[99999][10];
// int main()
// {
//     int n;
//     cin>>n;
//     int sum=0;
//     for(int i=0;i<3;i++)//1
//     {
//         for(int j=0;i<3;j++)//2
//         {
//             for(int q=0;q<3;q++)//3
//             {
//                 for(int w=0;w<3;w++)//4
//                 {
//                     for(int r=0;r<3;r++)//5
//                     {
//                         for(int e=0;e<3;e++)//6
//                         {
//                             for(int t=0;t<3;t++)//7
//                             {
//                                 for(int y=0;y<3;y++)//8
//                                 {
//                                     for(int u=0;u<3;u++)//9
//                                     {
//                                         for(int o=0;o<3;o++)//10
//                                         {
//                                             if(q+w+e+r+t+y+u+j+i+o==n)
//                                             {
//                                                 a[sum][0]=i;
//                                                 a[sum][1]=j;
//                                                 a[sum][2]=q;
//                                                 a[sum][3]=w;
//                                                 a[sum][4]=r;
//                                                 a[sum][5]=e;
//                                                 a[sum][6]=t;
//                                                 a[sum][7]=y;
//                                                 a[sum][8]=u;
//                                                 a[sum][9]=o;
//                                                 sum++;
//                                             }
//                                         }
//                                     }
//                                 }
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     for(int i=0;i<sum;i++)
//     {
//         for(int j=0;j<10;j++)
//         {
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
#include<iostream>  
using namespace std;  
int main()  
{  
    int a,b,c,d,e,f,g,h,i,j,in,x=0;  
    cin>>in;  
    for (a=1;a<=3;a++)  
    {  
        for (b=1;b<=3;b++)  
        {  
            for (c=1;c<=3;c++)  
            {  
                for (d=1;d<=3;d++)  
                {  
                    for (e=1;e<=3;e++)  
                    {  
                        for (f=1;f<=3;f++)  
                        {  
                            for (g=1;g<=3;g++)  
                            {  
                                for(h=1;h<=3;h++)  
                                {  
                                    for (i=1;i<=3;i++)  
                                    {  
                                        for (j=1;j<=3;j++)  
                                        {  
                                            if (a+b+c+d+e+f+g+h+i+j==in)  
                                            {  
                                                x++;  
                                            }  
                                        }  
                                    }  
                                }  
                            }  
                        }  
                    }  
                }  
            }  
        }  
    }  
    cout<<x<<endl;  
    for (a=1;a<=3;a++)  
    {  
        for (b=1;b<=3;b++)  
        {  
            for (c=1;c<=3;c++)  
            {  
                for (d=1;d<=3;d++)  
                {  
                    for (e=1;e<=3;e++)  
                    {  
                        for (f=1;f<=3;f++)  
                        {  
                            for (g=1;g<=3;g++)  
                            {  
                                for(h=1;h<=3;h++)  
                                {  
                                    for (i=1;i<=3;i++)  
                                    {  
                                        for (j=1;j<=3;j++)  
                                        {  
                                            if (a+b+c+d+e+f+g+h+i+j==in)  
                                            {  
                                                cout<<a<<" ";  
                                                cout<<b<<" ";  
                                                cout<<c<<" ";  
                                                cout<<d<<" ";  
                                                cout<<e<<" ";  
                                                cout<<f<<" ";  
                                                cout<<g<<" ";  
                                                cout<<h<<" ";  
                                                cout<<i<<" ";  
                                                cout<<j<<endl;  
                                            }  
                                        }  
                                    }  
                                }  
                            }  
                        }  
                    }  
                }  
            }  
        }  
    }  
}  
//so beautiful!