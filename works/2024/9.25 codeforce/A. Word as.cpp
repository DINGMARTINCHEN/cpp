#include <bits/stdc++.h>

using namespace std;
int low(char c){
    return (c<='z'&&c>='a');
} 
int main(){
    string s;
    cin>>s;
    int t=0;
    for(int i=0;i<s.size();i++){
        if(low(s[i]))
            t++;
    }
    if(t>=(s.size()-t) ){
        for(int i=0;i<s.size();i++){
            if(low(s[i]))
                printf("%c",s[i]);
            else
                printf("%c",s[i]+32);
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            if(low(s[i]))
                printf("%c",s[i]-32);
            else
                printf("%c",s[i]);
        }
    }
}