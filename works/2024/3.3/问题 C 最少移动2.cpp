#include <iostream>
#include <vector>
 
using namespace std;
 
typedef long long ll;
 
vector<ll> arr;
ll t,n,avg,cnt;
 
int main()
{
    ios::sync_with_stdio(false);
    cin >> t;
    while(t--)
    {
        cin >> n;
        avg = 0;
        for(ll i = 0; i < n; i++)
        {
            ll tmp;
            cin >> tmp;
            avg += tmp;
            arr.push_back(tmp);
        }
        avg /= n;
        cnt = 0;
        for(int i = 0; i < n-1; i++)
        {
            if(arr[i] > avg)
            {
                cnt += arr[i]-avg;
                arr[i+1] += arr[i]-avg;
                arr[i] = avg;
            }
            else if(arr[i] < avg)
            {
                cnt += avg-arr[i];
                arr[i+1] -= avg-arr[i];
                arr[i] = avg;
            }
        }
        if(arr[n-1] != avg)
            cout << "-1" << endl;
        else
            cout << cnt << endl;
        arr.clear();
    }
    return 0;
}
