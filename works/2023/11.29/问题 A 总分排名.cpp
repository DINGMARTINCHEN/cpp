#include<bits/stdc++.h>
using namespace std;
struct student
{
    string name;
    int c;
    int a;
    int b;
    int sum;
};
int main()
{
    int n;
    cin>>n;
    string ming;
    cin>>ming;
    student stu[1002];
    int find; 
    for (int  i = 0; i < n; i++)
    {
        cin>>stu[i].name>>stu[i].a>>stu[i].b>>stu[i].c;
        stu[i].sum=stu[i].a+stu[i].b+stu[i].c;
        if(ming==stu[i].name)
        {
            find=stu[i].sum;
        }
        
    }
    int sum=1;
    for(int i=0;i<n;i++)
    {
        if(find<stu[i].sum)
        {
            sum++;//小明排名排名怎么说呢
        }
    }
    cout<<find<<" "<<sum;
    for(int i=0;i<n;i++)
    {
        if(stu[i].sum==find)
        {
            cout<<endl<<stu[i].name;
        }
    }
    return 0;
}