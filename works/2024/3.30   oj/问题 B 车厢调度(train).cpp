#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<int>st;
    int a[1010];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k=1;
    for(int i=0;i<n;i++)
    {
        while(k<=a[i])
        {
            st.push(k++);
        }
        if(st.top()==a[i])
        {
            st.pop();
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}