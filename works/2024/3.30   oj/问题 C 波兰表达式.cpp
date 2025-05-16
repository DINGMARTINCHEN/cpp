#include<bits/stdc++.h>
using namespace std;
double expe()
{
    char s[30];
    cin>>s;
    switch(s[0])
    {
        case '+':   return expe()+expe();
        case '-':   return expe()-expe();
        case '*':   return expe()*expe();
        case '/':   return expe()/expe();
        default:    return atof(s);
            break;
    }
}
int main()
{
    int a=expe();
    cout<<a;
    return 0;
}