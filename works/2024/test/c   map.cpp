//����map�����ַ�ʽ
//by ���

#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){
    map<int,string> m;
    m[0]="aaa";
    m[1]="bbb";
    m[2]="ccc";

    map<int,string>::iterator it;

    //��ʽһ
    // cout<<"��ʽһ��"<<endl;
    // for(auto &t : m){
    //     cout<<"key:"<<t.first<<" value:"<<t.second<<endl;
    // }
    
    //��ʽ��
    cout<<"��ʽ����"<<endl;
    for(map<int,string>::iterator iter = m.begin(); iter != m.end(); ++iter){
        cout<<"key:"<<iter->first<<" value:"<<iter->second<<endl;
    }

    //������
    cout<<"��ʽ����"<<endl;
    map<int,string>::iterator iter=m.begin();
    while(iter != m.end()){
        cout<<"key:"<<iter->first<<" value:"<<iter->second<<endl;
        ++iter;
    }

}
