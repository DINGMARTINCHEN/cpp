#include<bits/stdc++.h>
using namespace std;
struct student
{
    string name;
    int score;
};
bool compare(student a,student b)
{
    return a.name<b.name;
}
int main()
{
    int n;
    cin>>n;
    student stu[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>stu[i].name>>stu[i].score;
        sum+=stu[i].score;
    }
    sort(stu,stu+n,compare);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<stu[i].name<<" "<<stu[i].score<<endl;
    // }
    cout<<stu[sum%n].name;
}