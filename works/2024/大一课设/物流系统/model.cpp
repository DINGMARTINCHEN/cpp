#include<bits/stdc++.h>
using namespace std;
#define Max 1000
static int s = 0;//���������
string zh = "1";   //���ý�����˺�
char password[7] = "123456";  //��������
void menu();
void pai();
void duqu()
{
    ofstream outfile1("data.txt", ios::out);//��ʼ���ļ�����մ洢������
    if (!outfile1)
    {
        cout << "���ļ�ʧ�ܣ�" << endl;
        exit(1);
    }
    outfile1.close();
    string productname[Max];//��Ʒ����
    int  productnum[Max];//��Ʒ���
    int num[Max];//��Ʒ������
    string  name[Max];//��������
    string str1, str2;
    cout << "�Ƿ��ʼ������Ļ���" << endl;
    cin >> str2;
    if (str2 == "��")
    {
        ofstream outfile("data.txt", ios::out);
        if (!outfile)
        {
            cerr << "��ʧ��" << endl;
            exit(1);
        }
        for (int i = 0; i < Max; i++)
        {
            cout << "������Ҫ��ӵ���Ʒ������" << endl;
            cin >> productname[s];
            outfile << productname[s] << "  ";
            cout << "������Ҫ��ӵ���Ʒ�ı��" << endl;
            cin >> productnum[s];
            outfile << productnum[s] << "  ";
            cout << "������Ҫ��ӵ���Ʒ������" << endl;
            cin >> num[s];
            outfile << num[s] << "  ";
            cout << "������Ҫ��ӵ���Ʒ���ջ���" << endl;
            cin >> name[s];
            outfile << name[s] << "  ";
            s++;
            cout << "�Ƿ�������" << endl;
            cin >> str1;
            if (str1 == "��")
            {
                break;
            }
        }
        outfile.close();
    }
}
void add()
{
    string productname[Max];//��Ʒ����
    int  productnum[Max];//��Ʒ���
    int num[Max];//��Ʒ������
    string  name[Max];//����     
    ofstream outfile("data.txt", ios::app);
    if (!outfile)
    {
        cerr << "��ʧ��" << endl;
        exit(1);
    }
    cout << "������Ҫ��ӵ���Ʒ������" << endl;
    cin >> productname[s];
    outfile << productname[s] << "  ";
    cout << "������Ҫ��ӵ���Ʒ�ı��" << endl;
    cin >> productnum[s];
    outfile << productnum[s] << "  ";
    cout << "������Ҫ��ӵ���Ʒ������" << endl;
    cin >> num[s];
    outfile << num[s] << "  ";
    cout << "������Ҫ��ӵ���Ʒ�Ĺ�����" << endl;
    cin >> name[s];
    outfile << name[s] << "  ";
    s++;
    outfile.close();
    menu();
}
void  sera()
{
    system("cls");
    pai();
    string productname[Max];//��Ʒ����
    int  productnum[Max];//��Ʒ���
    int num[Max];//��Ʒ������
    string  name[Max];//����
    ifstream infile("data.txt", ios::in);
    if (!infile)
    {
        cout << "���ļ�ʧ��" << endl;
        exit(1);
    }
    cout << "��Ʒ����------" << "��Ʒ���------" << "��Ʒ������------"
        << "������" << endl;
    for (int j = 0; j < s; j++)
    {
        infile >> productname[j];
        cout << productname[j] << "------";
        infile >> productnum[j];
        cout << productnum[j] << "------";
        infile >> num[j];
        cout << num[j] << "------";
        infile >> name[j];
        cout << name[j] << endl;
    }
    infile.close();
    menu();
}
void Delete()
{
    system("cls");
    int k;
    string productname[Max];//��Ʒ����
    int  productnum[Max];//��Ʒ���
    int num[Max];//��Ʒ������
    string  name[Max];//����
    ifstream infile("data.txt", ios::in);
    if (!infile)
    {
        cout << "���ļ�ʧ��" << endl;
        exit(1);
    }
    cout << "��Ʒ����   " << "��Ʒ���   " << "��Ʒ������   "
        << "��������" << endl;
    for (int j = 0; j < s; j++)
    {
        infile >> productname[j];
        cout << productname[j];
        infile >> productnum[j];
        cout << productnum[j] << "        ";
        infile >> num[j];
        cout << num[j] << "          ";
        infile >> name[j];
        cout << name[j] << "            ";
        cout << endl;
    }
    infile.close();
    ofstream outfile("data.txt", ios::out);
    if (!outfile)
    {
        cerr << "��ʧ��" << endl;
        exit(1);
    }
    cout << "����ɾ���ڼ���" << endl;
    cin >> k;
    for (int i = 0; i < s; i++)
    {
        if (i != k - 1)
        {
            outfile << productname[i] << "  ";
            outfile << productnum[i] << "  ";
            outfile << num[i] << "  ";
            outfile << name[i] << "  ";
        }
    }
    s--;
    outfile.close();
    menu();
}
void gai()
{
    system("cls");
    string productname[Max];//��Ʒ����
    int  productnum[Max];//��Ʒ���
    int num[Max];//��Ʒ������
    string  name[Max];//����
    int n1;
    int z;
    string productname1;
    int productnum1;
    int num1;
    string name1;
    ifstream infile("data.txt", ios::in);
    if (!infile)
    {
        cerr << "��ʧ��" << endl;
        exit(1);
    }
    cout << "��Ʒ����   " << "��Ʒ���   " << "��Ʒ������   "
        << "��������" << endl;
    for (int k = 0; k < s; k++)
    {
        infile >> productname[k];
        cout << productname[k] << "       ";
        infile >> productnum[k];
        cout << productnum[k] << "        ";
        infile >> num[k];
        cout << num[k] << "         ";
        infile >> name[k];
        cout << name[k] << "         ";
        cout << endl;
    }
    infile.close();
    cout << "������Ҫ�޸ĵڼ���" << endl;
    cin >> n1;
    for (int i = 0; i <= s; i++)
    {
        if (n1 - 1 == i)
        {
            cout << "1.�޸���Ʒ����" << endl;
            cout << "2.�޸���Ʒ����" << endl;
            cout << "3.�޸���Ʒ����" << endl;
            cout << "4.��������" << endl;
            cout << "���������" << endl;
            cin >> z;
            switch (z)
            {
            case 1: cout << "������Ҫ�޸ĵ���Ʒ������" << endl;
                cin >> productname1;
                productname[i] = productname1;
                cout << "�޸ĳɹ�!" << endl;
                break;
            case 2:  cout << "������Ҫ�޸ĵ���Ʒ�ı���" << endl;
                cin >> productnum1;
                productnum[i] = productnum1;
                cout << "�޸ĳɹ�!" << endl;
                break;
            case 3:cout << "������Ҫ�޸ĵ���Ʒ������" << endl;
                cin >> num1;
                num[i] = num1;
                cout << "�޸ĳɹ�!" << endl;
                break;
            case 4:cout << "�������޸ĵĹ����˵�����" << endl;
                cin >> name1;
                name[i] = name1;
                cout << "�޸ĳɹ�!" << endl;
                break;
            default:
                cout << "�������׼�Ĺ������" << endl;
                gai();
                break;
            }
            break;
        }

    }
    ofstream outfile("data.txt", ios::out);
    if (!outfile)
    {
        cerr << "��ʧ��" << endl;
        exit(1);
    }
    for (int j = 0; j < s; j++)
    {
        outfile << productname[j] << "  ";
        outfile << productnum[j] << "  ";
        outfile << num[j] << "  ";
        outfile << name[j] << "  ";
    }
    outfile.close();
    menu();
}
void menu()
{
    int n;
    bool b = true;
    system("pause");
    system("cls");
    cout << "**********************" << endl;
    cout << "*******�������*******" << endl;
    cout << "1.��ѯ�������Ϣ" << endl;
    cout << "2.��ӻ�����Ϣ" << endl;//�����Ϣ
    cout << "3.ɾ��������Ϣ" << endl;//ɾ����Ϣ
    cout << "4.�޸���Ϣ" << endl;
    cout << "5.�˳�����" << endl;
    cout << "**********************" << endl;
    do
    {
        cin >> n;
        switch (n)
        {
        case 1:   sera();
            break;
        case 2:  add();
            break;
        case 3:  Delete();
            break;
        case 4:gai();
            break;
        case 5: b = false;
            exit(0);
            break;
        default:cout << "�������׼�Ĺ������" << endl;
            menu();
        }
    } while (b);
}
void login()
{

    bool   bol1 = true;
    string zh1;
    char password1[7];

    int i = 0;
    cout << "********��ӭʹ��������Ϣ����ϵͳ********" << endl;
    cout << "****************************************" << endl;
    cout << "******************��¼******************" << endl;
    cout << "*********�˺ţ�";
    cin >> zh1;
    cout << endl;
    cout << "*********���룺";
    cin >> password1;
    cout << endl;
    if ((zh1 == zh && !strcmp(password1, password)))
    {
        cout << "****************��¼�ɹ���*****************" << endl;
        system("pause");
        system("cls");
        cout << "���Ƚ����ļ�" << endl;
        duqu();
        menu();
        return;
    }
    else
    {
        cout << "****************��¼ʧ�ܣ�*****************" << endl;
        cout << "****************�����µ�¼*****************" << endl;
        login();
    }
}
void pai() {
    string productname[Max];//��Ʒ����
    int  productnum[Max];//��Ʒ���
    int num[Max];//��Ʒ������
    string  name[Max];//����
    string productname1;
    int  productnum1;
    int num1;
    string  name1;
    ifstream infile("data.txt", ios::in);
    if (!infile)
    {
        cout << "���ļ�ʧ��" << endl;
        exit(1);
    }
    for (int j = 0; j < s; j++)
    {
        infile >> productname[j];
        infile >> productnum[j];
        infile >> num[j];
        infile >> name[j];
    }
    infile.close();
    for (int i = 0; i < s - 1; i++)
    {
        for (int k = i + 1; k < s; k++)
        {
            if (num[i] > num[k])
            {
                productname1 = productname[i];
                productnum1 = productnum[i];
                num1 = num[i];
                name1 = name[i];
                productname[i] = productname[k];
                productnum[i] = productnum[k];
                num[i] = num[k];
                name[i] = name[k];
                productname[i] = productname1;
                productnum[k] = productnum1;
                num[k] = num1;
                name[k] = name1;
            }
        }
    }
    ofstream outfile("data.txt", ios::out);
    if (!outfile)
    {
        cerr << "��ʧ��" << endl;
        exit(1);
    }
    for (int t = 0; t < s; t++)
    {
        outfile << productname[t] << "  ";
        outfile << productnum[t] << "  ";
        outfile << num[t] << "  ";
        outfile << name[t] << "  ";
    }
    outfile.close();
}
int main()
{
     login();
    return 0;
}