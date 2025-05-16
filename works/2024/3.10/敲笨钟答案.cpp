#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,len;
    string str;
    cin>>N;
    getline(cin,str);//读取第一行换行符
    for(int i=0;i<N;i++){
        int a=0,b=0,c=0;
        getline(cin,str);
        len=str.size();
        for(int i=len;i>=0;i--){
            if(str[i]=='.'){
                if(str[i-1]=='g'&&str[i-2]=='n'&&str[i-3]=='o'){
                    b=1;
                }
            }//条件一，并记录条件是否满足
            if(str[i]==','){
                if(str[i-1]=='g'&&str[i-2]=='n'&&str[i-3]=='o'){
                    a=1;
                }
            }//条件二，并记录条件是否满足
            if(str[i]==' '&&c<=2){
                c++;
                if(c==3){
                    c=i+1;
                }
            }//记录后3个单词首字母下标，其实也可以多用几个变量来写这部分，这里直接用c是考虑到下标不会小于3
        }//整个for都是从字符串尾部向前遍历
        if(a==1&&b==1){//条件满足
            for(int i=0;i<c;i++){
                printf("%c",str[i]);
            }
            printf("qiao ben zhong.\n");
        }else{//条件不满足
            printf("Skipped\n");
        }
    }
}