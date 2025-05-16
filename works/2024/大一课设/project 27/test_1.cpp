#include<bits/stdc++.h>
using namespace std;

//   product_food_data.txt食品仓库----1
//   product_sport_data.txt运动仓库----2
//   product_cloth_data.txt衣服仓库----3
//   product_pens_data.txt文具仓库----4
//   product_machine_data.txt家电仓库----5


const int N=999;
// ifstream infile("custom_data.txt", ios::in);//读取文件   infile先赋值给元素再输出元素
// infile >> productname[j];
// ofstream outfile("custom_data.txt", ios::app);//追加写入文件          存入记得加入分隔" "
//outfile << productname[s] << "  ";
// ofstream back_outfile("custom_data.txt", ios::out);//清空后写入          只要加入这一行就会清空所有custom_data文件

int product_size[6]={0,114,53,51,50,50};//便于后续添加商品（更改代码）

struct product_infor
{
    int num;//编号
    string name;
    int stock;//库存
    int price;//单价
};

struct habit//方便用户和商品之间建立联系
{
    int elemt;//1-食品
    int num;//商品编号
    int times;//购买次数
};

struct custom_infor
{
    string name;
    string password;
    int shop_sum_x;//控制i的变化
    int shop_sum_elem[N];//在第[i]次买了对应elem 
    int shop_sum_num[N];//在第[i]次买了对应num
    int shop_sum_sum[N];//在第[i]次买了对应elem
    int times;//购买商品的数量或次数：便于后续循环
    habit product[999];//999指的是times，这边取一个比较大的数字
};

struct custom_infor custom[N];//用于存入整个用户文件信息，排序后在重新写入文件
struct product_infor product[N][N];
struct custom_infor all_custom;//全局变量，一次登录为一位消费者服务

//---------------------------------------------------------------

// int rand_int(int minn,int maxn)//网上查找https://blog.csdn.net/Appppiiiiggg/article/details/134877444
// {
// 	srand(time(NULL));
// 	int b = minn+rand()%(maxn-minn+1);
// 	return b;
// }

//------------------------------------------------------------

int string_to_int(string a)
{
    int num=0;
    int base=1;
    for(int i=a.size()-1;i>=0;i--)
    {
        int aa=int(a[i]-'0');
        num+=(aa*base);
        base*=10;
    }
    return num;
}

void product_find(int pnum)
{
    cout<<"商品编号-----商品名称-----商品单价-----商品库存"<<endl;
    string a[product_size[pnum]],b[product_size[pnum]],c[product_size[pnum]],d[product_size[pnum]];
    if(pnum==1)
    {
        ifstream infile("product_food_data.txt", ios::in);
        for(int i=0;i<product_size[pnum];i++)
        {
            infile>>a[i];
            cout<<a[i]<<"------";
            infile>>b[i];
            cout<<b[i]<<"------";
            infile>>c[i];
            cout<<c[i]<<"------";
            infile>>d[i];
            cout<<d[i]<<endl;
        }
        infile.close();
    }
    if(pnum==2)
    {
        ifstream infile("product_sport_data.txt", ios::in);
        for(int i=0;i<product_size[pnum];i++)
        {
            infile>>a[i];
            cout<<a[i]<<"------";
            infile>>b[i];
            cout<<b[i]<<"------";
            infile>>c[i];
            cout<<c[i]<<"------";
            infile>>d[i];
            cout<<d[i]<<endl;
        }
        infile.close();
    }
    if(pnum==3)
    {
        ifstream infile("product_cloth_data.txt", ios::in);
        for(int i=0;i<product_size[pnum];i++)
        {
            infile>>a[i];
            cout<<a[i]<<"------";
            infile>>b[i];
            cout<<b[i]<<"------";
            infile>>c[i];
            cout<<c[i]<<"------";
            infile>>d[i];
            cout<<d[i]<<endl;
        }
        infile.close();
    }
    if(pnum==4)
    {
        ifstream infile("product_pens_data.txt", ios::in);
        for(int i=0;i<product_size[pnum];i++)
        {
            infile>>a[i];
            cout<<a[i]<<"------";
            infile>>b[i];
            cout<<b[i]<<"------";
            infile>>c[i];
            cout<<c[i]<<"------";
            infile>>d[i];
            cout<<d[i]<<endl;
        }
        infile.close();
    }
    if(pnum==5)
    {
        ifstream infile("product_machine_data.txt", ios::in);
        for(int i=0;i<product_size[pnum];i++)
        {
            infile>>a[i];
            cout<<a[i]<<"------";
            infile>>b[i];
            cout<<b[i]<<"------";
            infile>>c[i];
            cout<<c[i]<<"------";
            infile>>d[i];
            cout<<d[i]<<endl;
        }
        infile.close();
    }
    //$$$$$$$$$$$$$$$$$$$$$$$    感谢阮江宇提醒 :D  
    //不能放在循环内，否则一直读取前四个字符
    // ifstream infile("product_food_data.txt", ios::in);//读取文件
    //$$$$$$$$$$$$$$$$$$$$$$$ 
    return ;
}

string custom_paasword_find(string name)//返回密码
{
    ifstream infile("custom_data.txt", ios::in);//读取文件
    while(1)
    {
        string a;
        infile>>a;
        if(a==name)
        {
            infile>>a;
            return a;
            break;
        }
    }
}

bool custom_name_find(string name)//判断用户名称是否存在
{
    bool flag=0;
    ifstream infile("custom_data.txt", ios::in);//读取文件
    for(int i=0;i<999;i++)//--------------------------------限制了用户最大数量---我不会写一个判空：判断是否读到了最后的用户
    {
        string a;
        infile>>a;
        if(a==name)
        {
            return true;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        return false;
    }
}

void sum_up()
{
    long long sum_price=0;
    for(int i=0;i<all_custom.shop_sum_x;i++)
    {
        int sum=0;
        sum=product[all_custom.shop_sum_elem[i]][all_custom.shop_sum_num[i]].price*all_custom.shop_sum_sum[i];
        sum_price+=sum;
        product[all_custom.shop_sum_elem[i]][all_custom.shop_sum_num[i]].stock-=all_custom.shop_sum_sum[i];//在结算程序中改变库存，以减少后续的循环
    }
    cout<<"您在此次购物中共消费"<<sum_price<<"元，请选择支付......";//用户界面至此结束
    return ;
}

void product_up_to_date(int pnum)
{
    if(pnum==1)
    {
        ofstream aaoutfile("product_food_data.txt", ios::out);//清空原来仓库文件
        ofstream outfile("product_food_data.txt", ios::app);//追加写入文件
        for(int i=0;i<product_size[pnum];i++)
        {
            string name;
            int num,stock,price;
            name=product[pnum][i].name;
            num=product[pnum][i].num;
            price=product[pnum][i].price;
            stock=product[pnum][i].stock;
            outfile<<num<<" "<<name<<" "<<price<<" "<<stock<<" ";
        }
    }
    if(pnum==2)
    {
        ofstream aaoutfile("product_sport_data.txt", ios::out);
        ofstream outfile("product_sport_data.txt", ios::app);//追加写入文件
        for(int i=0;i<product_size[pnum];i++)
        {
            string name;
            int num,stock,price;
            name=product[pnum][i].name;
            num=product[pnum][i].num;
            price=product[pnum][i].price;
            stock=product[pnum][i].stock;
            outfile<<num<<" "<<name<<" "<<price<<" "<<stock<<" ";
        }
    }
    if(pnum==3)
    {
        ofstream aaoutfile("product_cloth_data.txt", ios::out);
        ofstream outfile("product_cloth_data.txt", ios::app);//追加写入文件
        for(int i=0;i<product_size[pnum];i++)
        {
            string name;
            int num,stock,price;
            name=product[pnum][i].name;
            num=product[pnum][i].num;
            price=product[pnum][i].price;
            stock=product[pnum][i].stock;
            outfile<<num<<" "<<name<<" "<<price<<" "<<stock<<" ";
        }
    }
    if(pnum==4)
    {
        ofstream aaoutfile("product_pens_data.txt", ios::out);
        ofstream outfile("product_pens_data.txt", ios::app);//追加写入文件
        for(int i=0;i<product_size[pnum];i++)
        {
            string name;
            int num,stock,price;
            name=product[pnum][i].name;
            num=product[pnum][i].num;
            price=product[pnum][i].price;
            stock=product[pnum][i].stock;
            outfile<<num<<" "<<name<<" "<<price<<" "<<stock<<" ";
        }
    }
    if(pnum==5)
    {
        ofstream aaoutfile("product_machine_data.txt", ios::out);
        ofstream outfile("product_machine_data.txt", ios::app);//追加写入文件
        for(int i=0;i<product_size[pnum];i++)
        {
            string name;
            int num,stock,price;
            name=product[pnum][i].name;
            num=product[pnum][i].num;
            price=product[pnum][i].price;
            stock=product[pnum][i].stock;
            outfile<<num<<" "<<name<<" "<<price<<" "<<stock<<" ";
        }
    }
    return ;
}
void process_shop();

void custom_history_up_to_date()
{
    string a="history_data.txt";
    ofstream aaaoutfile(a, ios::out);//清空文件
    ofstream outfile("history_data.txt", ios::app);//写入文件

    //期望存储结构  用户名--购买商品类型总数--商品类型--商品编号--购买次数    history文件
    //-------------------------------------商品类型--商品编号--购买次数    history文件
    for(long long i=0;i<200;i++)//将文件信息存储到代码数组中
    {
        int temp=custom[i].times;//原来的购买次数
        if(custom[i].name==all_custom.name)//更改信息---此次购物者
        {
            custom[i].times+=all_custom.shop_sum_x;
        }
        outfile<<custom[i].name<<" ";
        outfile<<custom[i].times<<" ";
        for(int j=0;j<temp;j++)
        {
            outfile<<custom[i].product[j].elemt<<" "<<custom[i].product[j].num<<" "<<custom[i].product[j].times<<" ";
        }
        //-------------------------------------商品类型--商品编号--购买次数    history文件
        if(custom[i].name==all_custom.name)//添加此次购买的信息
        {
            for(int j=0;j<all_custom.shop_sum_x;j++)
            {
                string name;
                int elem,num,sum;
                name=product[all_custom.shop_sum_elem[j]][all_custom.shop_sum_num[j]].name;
                elem=all_custom.shop_sum_elem[j];
                num=all_custom.shop_sum_num[j];
                sum=all_custom.shop_sum_sum[j];
                outfile<<elem<<" "<<num<<" "<<sum<<" ";
            }
        }
    }
    return ;
}

void process_shop()
{
    sum_up();
    for(int i=1;i<=5;i++)
    {
        product_up_to_date(i);
    }
    custom_history_up_to_date();
    return ;
}

void shop_car()
{
    int choice;
    cout<<endl<<"请选择想浏览的商品类型："<<endl;
    cout<<endl<<"食品仓库----1"<<endl<<"运动仓库----2"<<endl<<"衣服仓库----3"<<endl<<"文具仓库----4"<<endl<<"家电仓库----5"<<endl;
    cout<<"请输入仓库代号：";
    cin>>choice;
    product_find(choice);
    cout<<endl<<endl<<"请输入需要产品的类型、编号、数量，以@结尾";
    cout<<endl<<"!!!!注意!!!!购买物品数量不得超过库存！";
    cout<<endl<<"如：1 2 3 4 5 6 @  代表1类的2号买3件；和4类的5号买6件"<<endl;
    string aa,bb,cc;
    while(1)
    {
        cin>>aa>>bb>>cc;
        if(aa=="@")
        {
            break;
        }
        all_custom.shop_sum_x++;
        int elem=string_to_int(aa);
        int num=string_to_int(bb);
        int sum=string_to_int(cc);
        all_custom.shop_sum_elem[all_custom.shop_sum_x]=elem;
        all_custom.shop_sum_num[all_custom.shop_sum_x]=num;
        all_custom.shop_sum_sum[all_custom.shop_sum_x]=sum;
    }

    // cin>>all_custom.shopping_car[all_custom.shop_sum];
    // cout<<"test---------------"<<all_custom.shopping_car[all_custom.shop_sum]<<endl;
    cout<<"是否继续购物？"<<endl;
    cout<<"1：继续购物"<<endl<<"2：结束购物"<<endl;
    int b;
    cin>>b;
    if(b==1)
    {
        shop_car();
    }
    else{
        process_shop() ;
    }
    return ;
}

void menu_custom()
{
    all_custom.shop_sum_x=0;
    cout<<"根据历史购物记录向您推荐如下商品："<<endl;
    cout<<endl<<endl<<"商品类型--------商品编号-------购买次数"<<endl<<endl;
    ifstream infile("history_data.txt", ios::in);//读取文件


    //期望存储结构  用户名--购买商品类型总数--商品类型--商品编号--购买次数    history文件
    //-------------------------------------商品类型--商品编号--购买次数    history文件
    for(long long i=0;i<200;i++)//将文件信息存储到代码数组中
    {
        string a;
        infile>>custom[i].name;
        infile>>a;custom[i].times=string_to_int(a);//购买商品类型总数
        for(int j=0;j<custom[i].times;j++)
        {
            infile>>a;  custom[i].product[j].elemt=string_to_int(a);
            infile>>a;  custom[i].product[j].num=string_to_int(a);
            infile>>a;  custom[i].product[j].times=string_to_int(a);
        }
        if(custom[i].name==all_custom.name)//查找用户所在位置
        {
            all_custom.times=custom[i].times;
            for(int j=0;j<custom[i].times;j++)
            {
                all_custom.product[j].elemt=custom[i].product[j].elemt;
                all_custom.product[j].num=custom[i].product[j].num;
                all_custom.product[j].times=custom[i].product[j].times;
                cout<<all_custom.product[j].elemt<<"-------"<<all_custom.product[j].num<<"-------"<<all_custom.product[j].times<<endl;
            }
        }
    }
    cout<<endl<<endl<<"是否需要将下列物品添加至购物车？"<<endl;
    cout<<"若需要，请输入：“是”（不带引号）；否则请输入：“否”（不带引号）"<<endl;
    string bbb;
    cin>>bbb;
    if(bbb=="是")
    {
        cout<<endl<<endl<<"请输入需要产品的类型、编号、数量，以@结尾";
        cout<<endl<<"!!!!注意!!!!购买物品数量不得超过库存！";
        cout<<endl<<"如：1 2 3 4 5 6 @  代表1类的2号买3件；和4类的5号买6件"<<endl;
        all_custom.shop_sum_x=0;
        string aa,bb,cc;
        while(1)
        {
            cin>>aa>>bb>>cc;
            if(aa=="@")
            {
                break;
            }
            int elem=string_to_int(aa);
            int num=string_to_int(bb);
            int sum=string_to_int(cc);
            all_custom.shop_sum_elem[all_custom.shop_sum_x]=elem;
            all_custom.shop_sum_num[all_custom.shop_sum_x]=num;
            all_custom.shop_sum_sum[all_custom.shop_sum_x]=sum;
        }
        // all_custom.shop_sum_x++;
        // cin>>all_custom.shopping_car[all_custom.shop_sum];
        cout<<endl<<"继续购物："<<endl;
        shop_car();
    }
    else
    {
        cout<<"1：继续购物"<<endl<<"2：退出程序"<<endl;
        int b;
        cin>>b;
        if(b==1)
        {
            shop_car();
            
        }
        else{
            return ;
        }
    }
    return ;
}

void product_add(int pnum)
{
    product_size[pnum]++;
    cout<<"请输入货品名：";
    cin>>product[pnum][product_size[pnum]].name;
    cout<<endl<<"请输入货品单价：";
    cin>>product[pnum][product_size[pnum]].price;
    cout<<endl<<"请输入货品数量：";
    cin>>product[pnum][product_size[pnum]].stock;
    product[pnum][product_size[pnum]].num=product_size[pnum];

    if(pnum==1)
    {
        ofstream outfile("product_food_data.txt", ios::app);//追加写入文件
        outfile<<product[pnum][product_size[pnum]].num<<" "<<product[pnum][product_size[pnum]].name<<" ";
        outfile<<product[pnum][product_size[pnum]].price<<" "<<product[pnum][product_size[pnum]].stock<<" ";
    }
    if(pnum==2)
    {
        ofstream outfile("product_sport_data.txt", ios::app);//追加写入文件
        outfile<<product[pnum][product_size[pnum]].num<<" "<<product[pnum][product_size[pnum]].name<<" ";
        outfile<<product[pnum][product_size[pnum]].price<<" "<<product[pnum][product_size[pnum]].stock<<" ";
    }
    if(pnum==3)
    {
        ofstream outfile("product_cloth_data.txt", ios::app);//追加写入文件
        outfile<<product[pnum][product_size[pnum]].num<<" "<<product[pnum][product_size[pnum]].name<<" ";
        outfile<<product[pnum][product_size[pnum]].price<<" "<<product[pnum][product_size[pnum]].stock<<" ";
    }
    if(pnum==4)
    {
        ofstream outfile("product_pens_data.txt", ios::app);//追加写入文件
        outfile<<product[pnum][product_size[pnum]].num<<" "<<product[pnum][product_size[pnum]].name<<" ";
        outfile<<product[pnum][product_size[pnum]].price<<" "<<product[pnum][product_size[pnum]].stock<<" ";
    }
    if(pnum==5)
    {
        ofstream outfile("product_machine_data.txt", ios::app);//追加写入文件
        outfile<<product[pnum][product_size[pnum]].num<<" "<<product[pnum][product_size[pnum]].name<<" ";
        outfile<<product[pnum][product_size[pnum]].price<<" "<<product[pnum][product_size[pnum]].stock<<" ";
    }
    // admin_space();
    return ;
}

void admin_space()
{
    cout<<endl<<endl;
    cout<<"请输入仓库代码："<<endl;
    cout<<"食品仓库----1"<<endl;
    cout<<"运动仓库----2"<<endl;
    cout<<"衣服仓库----3"<<endl;
    cout<<"文具仓库----4"<<endl;
    cout<<"家电仓库----5"<<endl;
    int choice;
    cin>>choice;
    cout<<"请选择功能："<<endl;
    cout<<"1、添加货品信息"<<endl<<"2、查询货品信息"<<endl<<"3、输入任意键退出系统"<<endl<<endl;
    int choice_1;
    cin>>choice_1;
    if(choice_1==1)
    {
        product_add(choice);
    }
    else if(choice_1==2)
    {
        product_find(choice);
    }
    else
    {
        return ;
    }
    admin_space();
}

void login()
{
    string custom_name,custom_password;//文件中查找用户信息临时储存
    string password,name;//用户输入
    cout<<"-------------------请登录-------------------"<<endl;
    cout<<"请输入用户名：";
    cin>>name;
    cout<<"请输入密码：";
    cin>>password;
    custom_name=name;
    if(custom_name_find(name)==true)//先查找用户是否存在
    {
        custom_password=custom_paasword_find(name);
    }
    else//--------------------------不存在该用户，重新登录
    {
        cout<<"-----------登录失败！-----------"<<endl;
        cout<<"---------不存在该用户！---------"<<endl;
        return ;
    }
    if(password==custom_password)//判断用户密码是否正确
    {
        cout<<"-----------登陆成功！-----------"<<endl<<endl<<endl;
        all_custom.name=name;
        menu_custom();
    }
    else//-----------------------------密码错误，重新登录
    {
        cout<<"-----------登录失败！-----------"<<endl;
        cout<<"-----------密码错误！-----------"<<endl;
        return ;
    }
}

void initi_custom_file()//注册用户文件
{
    ofstream outfile("custom_data.txt", ios::app);//追加写入文件
    string name,password;
    cout<<"--------------请输入注册信息--------------"<<endl;
    cout<<"用户名：";
    cin>>name;

    if(custom_name_find(name)==true)//判断是否存在同样用户名以防止出错：登错账号
    {
        cout<<endl<<endl<<"已存在该用户！"<<endl<<"请更换用户名"<<endl<<"若是忘记密码请联系管理员"<<endl<<endl;//没招了，不会修改文件内容啊老师，只会添加信息
        cout<<endl<<"重新注册请输入：1"<<endl<<"登录请选择：2"<<endl;
        int a;
        cin>>a;
        if(a==1)
        {
            initi_custom_file(); 
        }
        else{
            login();
        }
    }
    else
    {
        outfile<<name<<" ";
        cout<<endl<<"密码：";
        cin>>password;
        outfile<<password<<" ";
    }
    outfile.close();
    for(int i=0;i<99;i++)//分割区域
    {
        cout<<endl;
    }
    login();
}

void custom_space()
{
    cout<<"########################欢迎使用project27智能购物系统########################"<<endl;
    cout<<endl<<"初次使用请选：1"<<endl<<"老用户请选择：2"<<endl<<"输入任意键退出"<<endl<<endl ;
    cout<<endl;
    int choice_1;
    cin>>choice_1;
    if(choice_1==1)
    {
        initi_custom_file();
	}
	else if(choice_1==2)
	{
        ofstream outfile("custom_data.txt", ios::app);//追加写入文件
        outfile<<"dsc 123456 ";//添加默认用户名：dsc 默认密码：123456
        outfile.close();
		login();
	}
	else
	{
		return ;
	}
}

void up_to_date_product(int pnum)//把所有文件的数据读入数组，方便后续排序，更改文件等；同时更新上一次操作导致的仓库余量不同
{
    int maxn=0;
    if(pnum==1)
    {
        ifstream infile("product_food_data.txt", ios::in);//读取文件
        for(int i=0;i<product_size[pnum];i++)
        {
            string a,b,c,d;
            infile>>a;
            infile>>b;
            infile>>c;
            infile>>d;
            int num=string_to_int(a);
            int price=string_to_int(c);
            int stock=string_to_int(d);
            product[pnum][product_size[pnum]].num=num;
            product[pnum][product_size[pnum]].name=b;
            product[pnum][product_size[pnum]].price=price;
            product[pnum][product_size[pnum]].stock=stock;
            if(maxn<num)
            {
                maxn=num;
            }
        }
    }
    if(pnum==2)
    {
        ifstream infile("product_sport_data.txt", ios::in);//读取文件
        for(int i=0;i<product_size[pnum];i++)
        {
            string a,b,c,d;
            infile>>a;
            infile>>b;
            infile>>c;
            infile>>d;
            int num=string_to_int(a);
            int price=string_to_int(c);
            int stock=string_to_int(d);
            product[pnum][product_size[pnum]].num=num;
            product[pnum][product_size[pnum]].name=b;
            product[pnum][product_size[pnum]].price=price;
            product[pnum][product_size[pnum]].stock=stock;
            if(maxn<num)
            {
                maxn=num;
            }
        }
    }
    if(pnum==3)
    {
        ifstream infile("product_cloth_data.txt", ios::in);//读取文件
        for(int i=0;i<product_size[pnum];i++)
        {
            string a,b,c,d;
            infile>>a;
            infile>>b;
            infile>>c;
            infile>>d;
            int num=string_to_int(a);
            int price=string_to_int(c);
            int stock=string_to_int(d);
            product[pnum][product_size[pnum]].num=num;
            product[pnum][product_size[pnum]].name=b;
            product[pnum][product_size[pnum]].price=price;
            product[pnum][product_size[pnum]].stock=stock;
            if(maxn<num)
            {
                maxn=num;
            }
        }
    }
    if(pnum==4)
    {
        ifstream infile("product_pens_data.txt", ios::in);//读取文件
        for(int i=0;i<product_size[pnum];i++)
        {
            string a,b,c,d;
            infile>>a;
            infile>>b;
            infile>>c;
            infile>>d;
            int num=string_to_int(a);
            int price=string_to_int(c);
            int stock=string_to_int(d);
            product[pnum][product_size[pnum]].num=num;
            product[pnum][product_size[pnum]].name=b;
            product[pnum][product_size[pnum]].price=price;
            product[pnum][product_size[pnum]].stock=stock;
            if(maxn<num)
            {
                maxn=num;
            }
        }
    }
    if(pnum==5)
    {
        ifstream infile("product_machine_data.txt", ios::in);//读取文件
        for(int i=0;i<product_size[pnum];i++)
        {
            string a,b,c,d;
            infile>>a;
            infile>>b;
            infile>>c;
            infile>>d;
            int num=string_to_int(a);
            int price=string_to_int(c);
            int stock=string_to_int(d);
            product[pnum][product_size[pnum]].num=num;
            product[pnum][product_size[pnum]].name=b;
            product[pnum][product_size[pnum]].price=price;
            product[pnum][product_size[pnum]].stock=stock;
            if(maxn<num)
            {
                maxn=num;
            }
        }
    }
    if(maxn>product_size[pnum])
    {
        product_size[pnum]=maxn;
    }
}

int main()
{
    up_to_date_product(1);//更新仓库货品数量
    up_to_date_product(2);
    up_to_date_product(3);
    up_to_date_product(4);
    up_to_date_product(5);
    cout<<"请选择角色：";
    cout<<endl<<"1、管理员"<<endl<<"2、消费者"<<endl<<"3、输入任意键退出程序"<<endl<<endl;
    int choice_1;
    cin>>choice_1;
    if(choice_1==1)
    {
        admin_space();
    }
    else if(choice_1==2)
    {
        custom_space();
    }
    else
    {
        return 0;
    }
    main();
}