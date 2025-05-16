#include<iostream>
#include<cmath>
using namespace std;

bool chou(int i)
{
    if (i == 2 || i == 3 || i == 5)
        return true;
    else
    {
        int j = i;
        while (1)
        {
            if (j % 2 == 0)
                j = j / 2;
            else if (j % 3 == 0)
                j = j / 3;
            else if (j % 5 == 0)
                j = j / 5;
            else
                return false;
            if (j == 2 || j == 3 || j == 5)
                return true;
        }
    }
}
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=1;sum;i++)
    {
        if(chou(i))
        {
            sum++;
        }
        if(sum==n)
        {
            cout<<i;
        }
    }
}