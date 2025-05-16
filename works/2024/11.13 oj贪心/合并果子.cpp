#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>a;
    a.reserve(10001);
    cin>>n;
    int x;
    for (int i=1;i<=n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    int sum=0;
    sort(a.begin(),a.end());
    vector<int>::iterator iter=a.begin();
    int m;
    while(a.size()>=2)
    {
        m=*a.begin()+*(a.begin()+1);
        sum+=m;
        a.erase(a.begin(),a.begin()+2); 
        iter=a.begin();
        if (m>*(a.end()-1)) a.push_back(m);
        else for (;iter<a.end();iter++)
        {
            if (*iter>=m) 
            {
                a.insert(iter,m);
                break;
            }
        }
    }
    cout<<sum;
}

