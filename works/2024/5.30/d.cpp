#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
    int num;
    while(cin>>num){
        if(num % 3 == 0){   //���Ǳ�3���������
            cout<<pow(3,num/3)<<endl;
            continue;
        }
        int flag[100] = {0};
        int i=0;
        while(num != 2 && num != 4){
            //������ܱ�3��������ô��3����1����2������1��4��ͬ�������������ȡ4����Ϊ������������������2��
            //ȡ4�Ϳ���ֱ�Ӱ�4�ֽ�Ϊ2+2
            flag[i++]=3;
            num-=3;
        }
        while(num){  //��2��1���������2����1��2����1����2��2������ǰ��Ż��ж��Ƿ����4�������Ϳ��Ի�Ϊ2��2
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