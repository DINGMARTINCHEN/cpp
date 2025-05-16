#include<bits/stdc++.h>
using namespace std;
struct student
{
    int num;
    string name;
    double score[99];
    double avg;
};
bool compare(student x,student y)
{
	if(x.avg>y.avg)
	{
		return true;
	}
	else if(x.avg==y.avg&&x.num<y.num)
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
	int n,m;
	student stu[999];
	cin>>n>>m;
	string course[99];
	for(int i=0;i<m;i++)
	{
		cin>>course[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>stu[i].num>>stu[i].name;
		for(int j=0;j<m;j++)
		{
			cin>>stu[i].score[j];
			stu[i].avg+=stu[i].score[j];
		}
	}
	sort(stu,stu+n,compare);
	cout<<"ID Name ";
	for(int i=0;i<m;i++)
	{
		cout<<course[i]<<" ";
	 } 
	cout<<"Avg"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<stu[i].num<<" "<<stu[i].name<<" ";
		for(int j=0;j<m;j++)
		{
			cout<<stu[i].score[j]<<" ";
		}
		cout<<round(stu[i].avg/m)<<endl;
	}
	return 0;
}
/*

5 3

math chinese english

1 zhangsan 80 80 80

2 lisi 1 1 0.9

3 wangwu 90 80 70

4 zhaoliu 60 70 80

5 guijiaoqi 80 90 60

*/
