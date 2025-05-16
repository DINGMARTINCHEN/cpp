#include<bits/stdc++.h>
using namespace std;
struct student
{
    int num;
    int score;
};
int main()
{
    int n;
    cin>>n;
    student stu[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>stu[i].num>>stu[i].score;
    }
    int a1,b1;
    cin>>a1>>b1;
    stu[a1].score=b1;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    for(int i=1;i<=a;i++)
    {
        if(i==d)
        {
            continue;
        }
        else
        {
            cout<<stu[i].num<<" "<<stu[i].score<<endl;
        }
    }
    cout<<b<<" "<<c<<endl;
    for(int i=a+1;i<=n;i++)
    {
        if(i==d)
        {sz"?
            continue;
        }
        else
        {
            cout<<stu[i].num<<" "<<stu[i].score<<endl;
        }
    }
}