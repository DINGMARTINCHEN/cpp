#include<bits/stdc++.h>
using namespace std;
struct students
{
    int score;
    string name;
};
int main()
{
    int n;
    cin>>n;
    students stu[n];
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>stu[i].name>>stu[i].score;
        sum+=stu[i].score;
    }
    sum/=n;
    sum/=2;
    int min=999,flag=0;
    for(int i=0;i<n;i++)
    {
        if(abs(sum-stu[i].score)<min)
        {
            flag=i;
            min=abs(sum-stu[i].score);
        }
    }
    cout<<sum<<" "<<stu[flag].name;
}