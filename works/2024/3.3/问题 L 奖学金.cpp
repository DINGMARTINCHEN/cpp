#include<bits/stdc++.h>
using namespace std;
struct students
{
    int num;
    int chinese;
    int math;
    int english;
    int sum;
};
bool cmp(students a,students b)
{
    if(a.sum>b.sum)
    {
        return true;
    }
    else if(a.sum==b.sum&&a.chinese>b.chinese)
    {
        return true;
    }
    else if(a.sum==b.sum&&a.chinese==b.chinese&&a.num<b.num)
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
    cin>>n;
    students stu[n];
    for(int i=0;i<n;i++)
    {
        stu[i].num=i+1;
        cin>>stu[i].chinese>>stu[i].math>>stu[i].english;
        stu[i].sum=stu[i].chinese+stu[i].english+stu[i].math;
    }
    sort(stu,stu+n,cmp);
    for(int i=0;i<5;i++)
    {
        cout<<stu[i].num<<" "<<stu[i].sum<<endl;
    }
}