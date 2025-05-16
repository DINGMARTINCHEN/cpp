#include<bits/stdc++.h>
using namespace std;
#define Max 1000
static int s = 0;//货物的总量
string zh = "1";   //设置进入的账号
char password[7] = "123456";  //设置密码
void menu();
void pai();
void duqu()
{
    ofstream outfile1("data.txt", ios::out);//初始化文件，清空存储的内容
    if (!outfile1)
    {
        cout << "打开文件失败！" << endl;
        exit(1);
    }
    outfile1.close();
    string productname[Max];//物品名称
    int  productnum[Max];//物品编号
    int num[Max];//物品的数量
    string  name[Max];//管理人名
    string str1, str2;
    cout << "是否初始化管理的货物" << endl;
    cin >> str2;
    if (str2 == "是")
    {
        ofstream outfile("data.txt", ios::out);
        if (!outfile)
        {
            cerr << "打开失败" << endl;
            exit(1);
        }
        for (int i = 0; i < Max; i++)
        {
            cout << "请输入要添加的物品的名称" << endl;
            cin >> productname[s];
            outfile << productname[s] << "  ";
            cout << "请输入要添加的物品的编号" << endl;
            cin >> productnum[s];
            outfile << productnum[s] << "  ";
            cout << "请输入要添加的物品的数量" << endl;
            cin >> num[s];
            outfile << num[s] << "  ";
            cout << "请输入要添加的物品的收货人" << endl;
            cin >> name[s];
            outfile << name[s] << "  ";
            s++;
            cout << "是否继续添加" << endl;
            cin >> str1;
            if (str1 == "否")
            {
                break;
            }
        }
        outfile.close();
    }
}
void add()
{
    string productname[Max];//物品名称
    int  productnum[Max];//物品编号
    int num[Max];//物品的数量
    string  name[Max];//人名     
    ofstream outfile("data.txt", ios::app);
    if (!outfile)
    {
        cerr << "打开失败" << endl;
        exit(1);
    }
    cout << "请输入要添加的物品的名称" << endl;
    cin >> productname[s];
    outfile << productname[s] << "  ";
    cout << "请输入要添加的物品的编号" << endl;
    cin >> productnum[s];
    outfile << productnum[s] << "  ";
    cout << "请输入要添加的物品的数量" << endl;
    cin >> num[s];
    outfile << num[s] << "  ";
    cout << "请输入要添加的物品的管理人" << endl;
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
    string productname[Max];//物品名称
    int  productnum[Max];//物品编号
    int num[Max];//物品的数量
    string  name[Max];//人名
    ifstream infile("data.txt", ios::in);
    if (!infile)
    {
        cout << "打开文件失败" << endl;
        exit(1);
    }
    cout << "物品名称------" << "物品编号------" << "物品的数量------"
        << "管理人" << endl;
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
    string productname[Max];//物品名称
    int  productnum[Max];//物品编号
    int num[Max];//物品的数量
    string  name[Max];//人名
    ifstream infile("data.txt", ios::in);
    if (!infile)
    {
        cout << "打开文件失败" << endl;
        exit(1);
    }
    cout << "物品名称   " << "物品编号   " << "物品的数量   "
        << "管理人名" << endl;
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
        cerr << "打开失败" << endl;
        exit(1);
    }
    cout << "你想删除第几个" << endl;
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
    string productname[Max];//物品名称
    int  productnum[Max];//物品编号
    int num[Max];//物品的数量
    string  name[Max];//人名
    int n1;
    int z;
    string productname1;
    int productnum1;
    int num1;
    string name1;
    ifstream infile("data.txt", ios::in);
    if (!infile)
    {
        cerr << "打开失败" << endl;
        exit(1);
    }
    cout << "物品名称   " << "物品编号   " << "物品的数量   "
        << "管理人名" << endl;
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
    cout << "请输入要修改第几个" << endl;
    cin >> n1;
    for (int i = 0; i <= s; i++)
    {
        if (n1 - 1 == i)
        {
            cout << "1.修改物品名称" << endl;
            cout << "2.修改物品编码" << endl;
            cout << "3.修改物品数量" << endl;
            cout << "4.管理人名" << endl;
            cout << "请输入序号" << endl;
            cin >> z;
            switch (z)
            {
            case 1: cout << "请输入要修改的物品的名字" << endl;
                cin >> productname1;
                productname[i] = productname1;
                cout << "修改成功!" << endl;
                break;
            case 2:  cout << "请输入要修改的物品的编码" << endl;
                cin >> productnum1;
                productnum[i] = productnum1;
                cout << "修改成功!" << endl;
                break;
            case 3:cout << "请输入要修改的物品的数量" << endl;
                cin >> num1;
                num[i] = num1;
                cout << "修改成功!" << endl;
                break;
            case 4:cout << "请输入修改的管理人的名字" << endl;
                cin >> name1;
                name[i] = name1;
                cout << "修改成功!" << endl;
                break;
            default:
                cout << "请输入标准的功能序号" << endl;
                gai();
                break;
            }
            break;
        }

    }
    ofstream outfile("data.txt", ios::out);
    if (!outfile)
    {
        cerr << "打开失败" << endl;
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
    cout << "*******功能序号*******" << endl;
    cout << "1.查询货物的信息" << endl;
    cout << "2.添加货物信息" << endl;//添加信息
    cout << "3.删除货物信息" << endl;//删除信息
    cout << "4.修改信息" << endl;
    cout << "5.退出程序" << endl;
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
        default:cout << "请输入标准的功能序号" << endl;
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
    cout << "********欢迎使用物流信息管理系统********" << endl;
    cout << "****************************************" << endl;
    cout << "******************登录******************" << endl;
    cout << "*********账号：";
    cin >> zh1;
    cout << endl;
    cout << "*********密码：";
    cin >> password1;
    cout << endl;
    if ((zh1 == zh && !strcmp(password1, password)))
    {
        cout << "****************登录成功！*****************" << endl;
        system("pause");
        system("cls");
        cout << "请先建立文件" << endl;
        duqu();
        menu();
        return;
    }
    else
    {
        cout << "****************登录失败！*****************" << endl;
        cout << "****************请重新登录*****************" << endl;
        login();
    }
}
void pai() {
    string productname[Max];//物品名称
    int  productnum[Max];//物品编号
    int num[Max];//物品的数量
    string  name[Max];//人名
    string productname1;
    int  productnum1;
    int num1;
    string  name1;
    ifstream infile("data.txt", ios::in);
    if (!infile)
    {
        cout << "打开文件失败" << endl;
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
        cerr << "打开失败" << endl;
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