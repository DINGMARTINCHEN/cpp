#include<bits/stdc++.h>
using namespace std;
int main()
{
    // ifstream infile("data.txt", ios::in);//读取文件   infile先赋值给元素再输出元素
    // ofstream outfile("data.txt", ios::app);//追加写入文件          存入记得加入分隔" "
    // ofstream back_outfile("data.txt", ios::out);//清空后写入         只要加入这一行就会清空所有data文件
   
    // for(int i=0;i<10;i++)
    // {
    //     string a;
    //     cin>>a;
    //     outfile<<a<<" ";
    // }
    for(int i=0;i<10;i++)
    {
        string a;
        infile>>a;
        cout<<a<<"--";
    }
    for(int i=0;i<10;i++)
    {
        string a;
        infile>>a;
        cout<<a<<"--";
    }
    // cout<<"111111111";
    // string a;
    // cin>>a;
    // back_outfile<<a<<"----";
    // infile>>a;
    // cout<<"----------"; 
}