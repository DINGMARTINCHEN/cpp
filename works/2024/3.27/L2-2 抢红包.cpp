#include<bits/stdc++.h>
using namespace std;
struct people
{
    int num;
    long long sum=0;
    int times=0;
};
bool compare(people a,people b)
{
    if(a.sum>b.sum)
    {
        return true;
    }
    else if(a.sum==b.sum&&a.times>b.times)
    {
        return true;
    }
    else if(a.sum==b.sum&&a.times==b.times&&a.num<b.num)
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
    // map<long long,int>mp;
    people mp[n];
    for(int i=0;i<n;i++)
    {
        mp[i].times=0;
        mp[i].sum=0;
        mp[i].num=0;
    }
    // cout<<mp[5].num<<endl<<endl;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        mp[i].num=i+1;
        for(int j=0;j<m;j++)
        {
            int a;
            cin>>a;
            int b;
            cin>>b;
            // mp[a-1].num=a;
            mp[a-1].sum+=b;
            mp[i].sum-=b;
            mp[i].times++;
        }
    }
    // cout<<mp[5].num<<endl<<endl;
    sort(mp,mp+n,compare);
    for(int i=0;i<n;i++)
    {
        double z=mp[i].sum;
        z/=100;
        printf("%d %.2f\n",mp[i].num,z);
    }
    // map<long long,int>::iterator iter;
    // for (iter = mp.begin(); iter != mp.end(); iter++)
    // {
    //         cout << iter->first << " " << iter->second << endl  ;
    // }
}  