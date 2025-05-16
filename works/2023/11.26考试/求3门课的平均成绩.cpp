#include<iostream>
using namespace std;
struct student
{
    string num;
    string name;
    int score[4]={0};
    int sumup;
};
int main()
{
    int n;
    cin>>n;
    long long sum1=0,sum2=0,sum3=0;
    student stu[9999];
    for(int i=0;i<n;i++)
    {
        cin>>stu[i].num;
        cin>>stu[i].name;
        cin>>stu[i].score[1];
        cin>>stu[i].score[2];
        cin>>stu[i].score[3];
        sum1=sum1+stu[i].score[1];
        sum2=sum2+stu[i].score[2];
        sum3=sum3+stu[i].score[3];
        stu[i].sumup=stu[i].score[2]+stu[i].score[1]+stu[i].score[3];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(stu[i].sumup<stu[j].sumup)
            {
                swap(stu[i],stu[j]);
            }
        }
    }
    cout<<sum1/n<<" "<<sum2/n<<" "<<sum3/n<<endl;
    cout<<stu[0].num<<" "<<stu[0].name<<" "<<stu[0].score[1]<<" "<<stu[0].score[2]<<" "<<stu[0].score[3];
}
