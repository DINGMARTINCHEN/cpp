#include<string>
#include<cstring>
#include<iostream>
#include<cstdio>
using namespace std;
string pre,inor;
void work(string pre,string inor)
{
// ABEDFCHG   ��
// CBADEFGH   ǰ
    
    if(pre.empty())return;//������п��ˣ���û��Ҫ������
    
    char root=pre[0];//ȡ��ǰ�����е�����ĸ�������ڵ�
    
    int k=inor.find(root);//�ҵ����������и��ڵ��λ��
    
    pre.erase(pre.begin());//ɾȥǰ�������еĸ��ڵ�
    
    string leftpre=pre.substr(0,k);//��0��ʼ�и�k��
    
    string rightpre=pre.substr(k);//��k��ʼ�и���
    
    string leftinor=inor.substr(0,k);//��0��ʼ�и�k��
    
    string rightinor=inor.substr(k+1);//��k+1��ʼ�и���
    
    work(leftpre,leftinor);
    work(rightpre,rightinor);
    printf("%c",root);
    //��ΪҪ����������У����������Ҹ�
    //�ȱ����������������������ٸ��ڵ�
}
int main()
{
    cin>>inor>>pre;
    work(pre,inor);
    putchar('\n');
    return 0;
}