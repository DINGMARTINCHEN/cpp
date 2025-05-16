#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N=1e5;

int pre[N];

struct node 
{
    int s,e;
}a[N];

bool cmp(node a,node b)
{
    return a.s<b.s;
}

int process(int t) 
{
    int n;
    string test_in_name ;
    if(t<=9)
    {
        test_in_name= "_testdatastdin_0" + std::to_string(t) + ".in";
    }
    else
    {
        test_in_name= "_testdatastdin_" + std::to_string(t) + ".in";
    }

    ifstream infile(test_in_name, ios::in);
    infile >> n;
    for(int i=0;i<n;i++)
    {
        infile>>a[i].s>>a[i].e;
    }
    sort(a,a+n,cmp);
    pre[0]=a[0].e;

    int sum=0;
    for(int i=0;i<n;i++)
    {
        bool flag=0;
        for(int j=0;j<sum;j++)
        {
            if(pre[j]<=a[i].s)
            {
                pre[j]=a[i].e;
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            pre[sum++]=a[i].e;
        }
    }

    string ans_name="ans_"+std::to_string(t)+".out";
    ofstream back_outfile(ans_name, ios::out);
    back_outfile<<sum<<endl;
    
    cout<<"test "<<t<<" answer : "<<sum;
    string test_out_name ;
    if(t<=9)
    {
        test_out_name= "_testdatastdin_0" + std::to_string(t) + ".out";
    }
    else
    {
        test_out_name= "_testdatastdin_" + std::to_string(t) + ".out";
    }
    ifstream filein(test_out_name, ios::in);
    int key;
    filein >> key;
    cout<<"  key: "<<key;
    if(key==sum)
    {
        cout<<"  AC";
    }
    else
    {
        cout<<"  WA";
    }
    cout<<endl;
    return 0;
}

signed main()
{
    for(int i=1;i<=13;i++)
    {
        process(i);
    }
    return 0;
}