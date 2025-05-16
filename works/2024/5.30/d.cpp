#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
    int num;
    while(cin>>num){
        if(num % 3 == 0){   //考虑被3整除的情况
            cout<<pow(3,num/3)<<endl;
            continue;
        }
        int flag[100] = {0};
        int i=0;
        while(num != 2 && num != 4){
            //如果不能被3整除，那么除3必余1或者2，而余1和4是同样的情况，这里取4是因为这种情况下最后是两个2，
            //取4就可以直接把4分解为2+2
            flag[i++]=3;
            num-=3;
        }
        while(num){  //余2和1的情况，余2就是1个2，余1就是2个2，所以前面才会判断是否等于4，这样就可以化为2个2
            flag[i++] = 2;
            num-=2;
        }
        int result = 1;
        for(int j=0;j<i;j++){
            result *= flag[j];
        }
        cout<<result<<endl;
    }//while
    return 0;
}