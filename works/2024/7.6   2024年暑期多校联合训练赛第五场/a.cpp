#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N=2e5+50;

char a[N];
char b[N];

// void a()
// {
//     string a;
//     while(1)
//     {
//         cin>>a;
//         for(int i=0;i<a.size();i++)
//         {
//             if(a[i]==' ')
//             {
//                 while(1)
//                 {
//                     if(a[i+1]==' ')
//                     {
//                         i++;
//                     }
//                     else
//                     {
//                         cout<<' ';
//                         break;
//                     }
//                 }
//                 cout<<' ';
//             }
//             if(a[i]<='Z'&&a[i]>='A')
//             {
//                 cout<<char(int(a[i])-int('A')+int('a'));
//             }
//             if(a[i]<='z'&&a[i]>='a')
//             {
//                 cout<<a[i];
//             }
//         }
//     }
// }

int isc(char x)
{
    if(isupper(x) || islower(x)) return 1;
    return 0;
}

int main()
{
    int pos=0;
    while(cin.getline(a+pos,N-pos))
    {
        pos=strlen(a);
        a[pos]=' ';
        pos++;
    }
    int i=0,j=0;
    while(!isc(a[i])) i++;
    while(a[i]!='\0')
    {
        if(isupper(a[i])) b[j++]=tolower(a[i]);
        if(islower(a[i])) b[j++]=a[i];
        if(a[i]==' ')
            if(j>0 && b[j-1]!=' ') b[j++]=' ';
        if(a[i]=='\n' || a[i]=='\r')
            if(j>0 && islower(b[j-1]))
                b[j++]=' ';
        i++;
    }
    cout<<b;
}