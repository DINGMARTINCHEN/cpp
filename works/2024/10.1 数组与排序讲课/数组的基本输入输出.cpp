#include <bits/stdc++.h>
using namespace std;

void _0_to_9()//�����±��0��ʼȡ
{
    int a[10];
    // # ����һ���ܴ�� 10�� int����Ԫ�� �� ����a
            // ! ���±�0��ʼ��a[0]~a[9]
    
    for(int i=0;i<10;i++)// # ����
    //i<10ȡ����10  ��Ϊ0~9
    {
        cin>>a[i];
    }

    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }

    return ;//ÿ��һ����ϰ��
}

void _1_to_10()//������ͨ
{
    int a[11];
    //! ��ʹ��a[0],������Ҫ�ඨ��һ��
    // # ����һ���ܴ�� 11�� int����Ԫ�� �� ����a
                //���±�0��ʼ��a[0]~a[10]
    
    // memset(a,9,sizeof(a));//��ʼ������

    for(int i=1;i<=10;i++)// # ����
    //! ���𣺴�1��ʼȡ��10������10ʱȡ�Ⱥ�
    {
        cin>>a[i];
    }

    for(int i=1;i<=10;i++)
    {
        cout<<a[i]<<" ";
    }
    return ;//ÿ��һ����ϰ��
}

void _2_wei()
{
    int a[10][10];
    // # ����һ���ܴ�� 10*10=100�� int����Ԫ�� �� ����
                //���±�0��ʼ��a[0][0]~a[9][9]
    
    for(int i=0;i<10;i++)// # ����
    {
        for(int j=0;j<10;j++)
        {
            cin>>a[i][j];
            // a[i][j]=i*10+j+1;//!��ʼ���õ�
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
    return ;//ÿ��һ����ϰ��
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
    string a[10];//�� 10�� string����Ԫ�� �� ����a
    for(int i=0;i<10;i++)
    {
        cin>>a[i];//!����ʱ�ÿո����
    }
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    return ;//ÿ��һ����ϰ��
    /*
    first second third fourth fifth sixth seventh eighth ninth tenth
     */
}

void _char_()
{
    char a[10];//�� 10�� char����Ԫ�� �� ����a
    for(int i=0;i<10;i++)
    {
        cin>>a[i];//!����ʱ�ã����ж��ᱻ���룺���˿ո�
    }
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    return ;//ÿ��һ����ϰ��
    /*
    first second third fourth fifth sixth seventh eighth ninth tenth
    first    second third fourth fifth sixth seventh eighth ninth tenth//!���˼����ո���֤�ո��ܱ�����
     */
}

int main() 
{
    // _0_to_9();//�����±��0��ʼȡ
    // _1_to_10();//�±��1��ʼȡ
    // _2_wei();//��ά����
    _char_();//char��������

    
    // _string_();//�ַ�������
    return 0;//ÿ��һ����ϰ��
}