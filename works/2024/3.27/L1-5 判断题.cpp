#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int score[m];
    for(int i=0;i<m;i++)
    {
        cin>>score[i];
    }
    int student[n][m]={0};
    int sum[n]={0};
    int answer[m];
    for(int i=0;i<m;i++)
    {
        cin>>answer[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>student[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(student[i][j]==answer[j])
            {
                sum[i]+=score[j];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<sum[i]<<endl;
    }
}