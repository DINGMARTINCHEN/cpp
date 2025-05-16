#include<stdio.h>
#include<math.h>
#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>n>>m;
    int i,j;
    for(i=0;i<n;i++)
    {
         for(j=0;j<m;j++)
         {
            cout<<char(65+abs(i-j)); 
         }
        cout<<endl;
    } 
   return 0;
}
