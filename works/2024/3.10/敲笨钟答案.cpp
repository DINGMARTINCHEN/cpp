#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,len;
    string str;
    cin>>N;
    getline(cin,str);//��ȡ��һ�л��з�
    for(int i=0;i<N;i++){
        int a=0,b=0,c=0;
        getline(cin,str);
        len=str.size();
        for(int i=len;i>=0;i--){
            if(str[i]=='.'){
                if(str[i-1]=='g'&&str[i-2]=='n'&&str[i-3]=='o'){
                    b=1;
                }
            }//����һ������¼�����Ƿ�����
            if(str[i]==','){
                if(str[i-1]=='g'&&str[i-2]=='n'&&str[i-3]=='o'){
                    a=1;
                }
            }//������������¼�����Ƿ�����
            if(str[i]==' '&&c<=2){
                c++;
                if(c==3){
                    c=i+1;
                }
            }//��¼��3����������ĸ�±꣬��ʵҲ���Զ��ü���������д�ⲿ�֣�����ֱ����c�ǿ��ǵ��±겻��С��3
        }//����for���Ǵ��ַ���β����ǰ����
        if(a==1&&b==1){//��������
            for(int i=0;i<c;i++){
                printf("%c",str[i]);
            }
            printf("qiao ben zhong.\n");
        }else{//����������
            printf("Skipped\n");
        }
    }
}