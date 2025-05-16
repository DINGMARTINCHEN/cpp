#include<bits/stdc++.h>
using namespace std;
struct student
{
    int num;
    int chinese;
    int all;
};
bool compare(student x,student y)
{
    if(x.all>y.all)
    {
        return true;
    }
    else if(x.all==y.all&&x.chinese>y.chinese)
    {
        return true;
    }
    else if(x.all==y.all&&x.chinese==y.chinese&&x.num<y.num)
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
    int n;
    student stu[99999];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        stu[i].chinese=a;
        stu[i].all=a+b+c;
        stu[i].num=i+1;
    }
    sort(stu,stu+n,compare);
    for(int i=0;i<5;i++)
    {
        cout<<stu[i].num<<" "<<stu[i].all<<endl;
    }
    return 0;
}