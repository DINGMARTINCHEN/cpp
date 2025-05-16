#include <bits/stdc++.h>
using namespace std;

void _0_to_9()//数组下标从0开始取
{
    int a[10];
    // # 定义一个能存放 10个 int类型元素 的 数组a
            // ! 从下标0开始：a[0]~a[9]
    
    for(int i=0;i<10;i++)// # 输入
    //i<10取不到10  即为0~9
    {
        cin>>a[i];
    }

    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }

    return ;//每天一个好习惯
}

void _1_to_10()//触类旁通
{
    int a[11];
    //! 不使用a[0],所以需要多定义一个
    // # 定义一个能存放 11个 int类型元素 的 数组a
                //从下标0开始：a[0]~a[10]
    
    // memset(a,9,sizeof(a));//初始化数组

    for(int i=1;i<=10;i++)// # 输入
    //! 区别：从1开始取到10；并且10时取等号
    {
        cin>>a[i];
    }

    for(int i=1;i<=10;i++)
    {
        cout<<a[i]<<" ";
    }
    return ;//每天一个好习惯
}

void _2_wei()
{
    int a[10][10];
    // # 定义一个能存放 10*10=100个 int类型元素 的 数组
                //从下标0开始：a[0][0]~a[9][9]
    
    for(int i=0;i<10;i++)// # 输入
    {
        for(int j=0;j<10;j++)
        {
            cin>>a[i][j];
            // a[i][j]=i*10+j+1;//!初始化用的
        }
    }

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return ;//每天一个好习惯
    /*
        1  2  3  4  5  6  7  8  9  10
        11 12 13 14 15 16 17 18 19 20
        21 22 23 24 25 26 27 28 29 30   22--a[2][1]
        31 32 33 34 35 36 37 38 39 40
        41 42 43 44 45 46 47 48 49 50
        51 52 53 54 55 56 57 58 59 60
        61 62 63 64 65 66 67 68 69 70
        71 72 73 74 75 76 77 78 79 80
        81 82 83 84 85 86 87 88 89 90
        91 92 93 94 95 96 97 98 99 100
     */
}

void _string_()
{
    string a[10];//有 10个 string类型元素 的 数组a
    for(int i=0;i<10;i++)
    {
        cin>>a[i];//!输入时用空格隔开
    }
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    return ;//每天一个好习惯
    /*
    first second third fourth fifth sixth seventh eighth ninth tenth
     */
}

void _char_()
{
    char a[10];//有 10个 char类型元素 的 数组a
    for(int i=0;i<10;i++)
    {
        cin>>a[i];//!输入时用，所有都会被读入：除了空格
    }
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    return ;//每天一个好习惯
    /*
    first second third fourth fifth sixth seventh eighth ninth tenth
    first    second third fourth fifth sixth seventh eighth ninth tenth//!加了几个空格：验证空格不能被读入
     */
}

int main() 
{
    // _0_to_9();//数组下标从0开始取
    // _1_to_10();//下标从1开始取
    // _2_wei();//二维数组
    _char_();//char类型数组

    
    // _string_();//字符串数组
    return 0;//每天一个好习惯
}