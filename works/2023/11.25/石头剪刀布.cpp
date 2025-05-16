#include<iostream>
using namespace std;
/*
bool game1(int a,int b)//1 2 3 石刀布
{
    if(a==1)
    {
        if(b==2)
        {
            return true;
        }
        if(b==3)
        {
            return false;
        }
    }
    if(a==2)
    {
        if(b==3)
        {
            return true;
        }
        if(b==1)
        {
            return false;
        }
    }
    if(a==3)
    {
        if(b==1)
        {
            return true;
        }
        if(b==2)
        {
            return false;
        }
    }
}
bool game2(int a,int b)//1 2 3 石布刀
{
    if(a==1)
    {
        if(b==3)
        {
            return true;
        }
        if(b==2)
        {
            return false;
        }
    }
    if(a==3)
    {
        if(b==2)
        {
            return true;
        }
        if(b==1)
        {
            return false;
        }
    }
    if(a==2)
    {
        if(b==1)
        {
            return true;
        }
        if(b==3)
        {
            return false;
        }
    }
}
bool game3(int a,int b)//1 2 3 布石刀
{
    if(a==2)
    {
        if(b==3)
        {
            return true;
        }
        if(b==1)
        {
            return false;
        }
    }
    if(a==3)
    {
        if(b==1)
        {
            return true;
        }
        if(b==2)
        {
            return false;
        }
    }
    if(a==1)
    {
        if(b==2)
        {
            return true;
        }
        if(b==3)
        {
            return false;
        }
    }
}
*/
bool simple1(int a,int b)//刀石布
{
    if((a==1&&b==3)||(a==2&&b==1)||(a==3&&b==2))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool simple2(int a,int b)//刀布石
{
    if((a==1&&b==2)||(a==2&&b==3)||(a==3&&b==1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n,sum1,sum2;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(simple1(a[i],b[i]))
        {
            sum1++;
        }
        if(simple2(a[i],b[i]))
        {
            sum2++;
        }
    }
    if(sum1>sum2)
    {
        cout<<sum1;
    }
    else{

        cout<<sum2;
    }
}