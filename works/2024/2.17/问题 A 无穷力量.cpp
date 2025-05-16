#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    map<int,int>men;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        men[a[i]]++;
    }
    sort(a,a+n);
    long long sum=0;
    map<int,int>::iterator it;
    for(map<int,int>::iterator iter = men.begin(); iter != men.end(); ++iter)
    {
        int said=iter->first,menmbers=iter->second;
        if(said+1 >= menmbers)
        {
            sum += said+1;
        }
        if(menmbers % (said+1) != 0 && said+1 < menmbers)
        {
            sum += (menmbers / (said+1) + 1) * (said+1);
        }
        if(menmbers % (said+1) == 0 && said+1 < menmbers)
        {
            sum += (menmbers / (said+1)) * (said+1);
        }
        // cout<<"key:"<<iter->first<<" value:"<<iter->second<<"  "<<sum<<endl;
    }
    cout<<sum;
}