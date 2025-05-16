//    .##.....#
//    .#.#.#...


//    .###....#     1
//    .#.#.#...

//    .####...#     2.1
//    .#.#.#...


//    .###....#     2.2
//    .#.###...

#include<bits/stdc++.h>
#define int long long
using namespace std;


signed main()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	int l,r;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]||b[i]=='#')
		{
			l=i;
			break;
		}
	}
	for(int i=a.size()-1;i>=0;i--)
	{
		if(a[i]||b[i]=='#')
		{
			r=i;
			break;
		}
	}
	int sum1=0,sum2=0;
	string a1=a,b1=b;
	for(int i=l;i<=r-1;i++)//иоср 
	{
		if(a1[i]=='#'&&a1[i+1]=='.'&&b1[i]=='.'&&b1[i+1]=='.')
		{
			a1[i+1]='#';
			sum1++;
		}
		// #0
		// 00
		
		else if(b1[i]=='#'&&b1[i+1]=='.'&&a1[i]=='.'&&a1[i+1]=='.')
		{
			b1[i+1]='#';
			sum1++;
		}
		// 00
		// #0
		
		else if(b1[i]=='#'&&b1[i+1]=='.'&&a1[i]=='.'&&a1[i+1]=='#')
		{
			b1[i+1]='#';
			sum1++;
		}
		// 0#
		// #0
		
		else if(a1[i]=='#'&&a1[i+1]=='.'&&b1[i]=='.'&&b1[i+1]=='#')
		{
			a1[i+1]='#';
			sum1++;
		}
		// #0
		// 0#
		
		else if(a1[i]=='#'&&a1[i+1]=='.'&&b1[i]=='#'&&b1[i+1]=='.')
		{
			a1[i+1]='#';
			sum1++;
		}
		// #0
		// #0
	}
	
	string a2=a,b2=b;
	for(int i=l;i<=r-1;i++)//обср 
	{
		if(a2[i]=='#'&&a2[i+1]=='.'&&b2[i]=='.'&&b2[i+1]=='.')
		{
			a2[i+1]='#';
			sum2++;
		}
		// #0
		// 00
		
		else if(b2[i]=='#'&&b2[i+1]=='.'&&a2[i]=='.'&&a2[i+1]=='.')
		{
			b2[i+1]='#';
			sum2++;
		}
		// 00
		// #0
		
		else if(b2[i]=='#'&&b2[i+1]=='.'&&a2[i]=='.'&&a2[i+1]=='#')
		{
			b2[i+1]='#';
			sum2++;
		}
		// 0#
		// #0
		
		else if(a2[i]=='#'&&a2[i+1]=='.'&&b2[i]=='.'&&b2[i+1]=='#')
		{
			a2[i+1]='#';
			sum2++;
		}
		// #0
		// 0#
		
		else if(a2[i]=='#'&&a2[i+1]=='.'&&b2[i]=='#'&&b2[i+1]=='.')
		{
			b2[i+1]='#';
			sum2++;
		}
		// #0
		// #0
	}
//	cout<<sum1<<endl<<a1<<endl<<b1<<endl;
//	
//	cout<<sum2<<endl<<a2<<endl<<b2<<endl;
//	cout<<a<<endl<<b;
    cout<<min(sum1,sum2);
	return 0;  
}
//.##......
//.#.#.#..#

