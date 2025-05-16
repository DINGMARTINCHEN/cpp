#include<bits/stdc++.h>
using namespace std;
struct allnumbers
{
    long long  num;
    long long times=0;
};
long long a[999999]={0},b;
allnumbers numbers[999999];
bool compare(allnumbers x,allnumbers y)
{
    if(x.times>y.times)
    {
        return true;
    }
    else if(x.times==y.times&&x.num<y.num)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    long long n;
    cin>>n;
    for(long long i=0;i<n;i++)
    {
        cin>>b;
        numbers[b].num=b;
        numbers[b].times++;
    }
    sort(numbers,numbers+n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<numbers[i].num<<" "<<numbers[i].times<<endl;
    }
    cout<<numbers[0].num<<" "<<numbers[0].times<<endl;
    for(long long i=0;i<n;i++)
    {
        if(numbers[i].times==numbers[i+1].times)
        {
            cout<<numbers[i+1].num<<" "<<numbers[i+1].times<<endl;
        }
        else{
            return 0;
        }
    }
}
/*
20
2 4 2 3 2 5 3 7 2 3 4 3 7 7 7 7 7 7 7 7 
*/