#include<iostream>
#include<cstring>
using namespace std;
struct student 
{
    int year;
    int month;
    int day;
    string name;
    int num;
    int age;
};
int main()
{
    int n;
    cin>>n;
    student stu[999];
    for(int i=0;i<n;i++)
    {
        cin>>stu[i].num>>stu[i].name>>stu[i].year>>stu[i].month>>stu[i].day;
        stu[i].age=(2023*365+11*30+24-stu[i].year*365-stu[i].month*30-stu[i].day)/365;
    }
    cout<<"stuNum stuName birDay Age"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<stu[i].num<<" "<<stu[i].name<<" "<<stu[i].year<<"-"<<stu[i].month<<"-"<<stu[i].day<<" "<<stu[i].age<<endl;
    }
    return 0;
}