#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<long long, long long, greater<long long> > stick;
    long long n;
    cin >> n;
    long long max1 = 0;
    for (long long i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        if ( max1 < a)
        {
            max1 = a;
        }
        stick[a]++;
    }                  
    
    long long max = 0;
    if ( stick[max1] < 2 )
    {
        cout << 0;
        return 0;
    }
    for (long long i = max1 ; i>0 ; i--)
    {
        if (stick[i] > 4)
        {
            cout << i * i;
            return 0;
        }
        if (stick[i] >= 2 && stick[i] < 4 && max != 0)
        {
            cout << max * i;
            return 0;
        }
        if (stick[i] >= 2 && stick[i] < 4)
        {
            max = i;
        }
    }
    cout<<0;
}