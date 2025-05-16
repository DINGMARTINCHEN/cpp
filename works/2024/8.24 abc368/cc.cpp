#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    int t=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(t%3==0)
        {                
            a[i]-=3;
        }
        else
        {
            a[i]--;
        }
        sum++;
        if(a[i]%3==0)
        {
            sum+=a[i]/3*2;
        }
        else if(a[i]%3==1)
        {
            sum+=1+a[i]/3*2;
        }
        else
        {
            sum+=1+a[i]/3*2;
        }
        t=sum;
    }
    cout<<sum;
    return 0;
}

/*


t 0 1 2 3 4 5 6                        step
1    0                                  1
2    1 0                                2
3    2 1 -2                             3
4    3 2 -1                             3
5    4 3 0                              3
6    5 4 1 0                            4
7    6 5 2 1 0                          5=====
8    7 6 3 2 1 -2                       6
9    8 7 4 3 2 -1                       6
10   9 8 5 4 3 0                        6
11   10 9 6 5 4 1 0                     7
12   11 10 7 6 5 2 1 0                  8
13   12 11 8 7 6 3 2 1 -2               9
14   13 12 9 8 7 4 3 2 -1               9
15   14 13 10 9 8 5 2 1 -2               9
16   15 14 11 10 9 6 5 4 1 0            10
17   16 15 12 11 10 7 6 5 2 1 0            9
18   17 16 13 12 11 8 5 4 1 0           10
19   18 17 14 13 12 9 6 5 2 1 0         11
*/