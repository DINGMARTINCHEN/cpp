#include<bits/stdc++.h>
using namespace std;

//   product_food_data.txtʳƷ�ֿ�----1
//   product_sport_data.txt�˶��ֿ�----2
//   product_cloth_data.txt�·��ֿ�----3
//   product_pens_data.txt�ľֿ߲�----4
//   product_machine_data.txt�ҵ�ֿ�----5


const int N=999;
// ifstream infile("custom_data.txt", ios::in);//��ȡ�ļ�   infile�ȸ�ֵ��Ԫ�������Ԫ��
// infile >> productname[j];
// ofstream outfile("custom_data.txt", ios::app);//׷��д���ļ�          ����ǵü���ָ�" "
//outfile << productname[s] << "  ";
// ofstream back_outfile("custom_data.txt", ios::out);//��պ�д��          ֻҪ������һ�оͻ��������custom_data�ļ�

int product_size[6]={0,114,53,51,50,50};//���ں��������Ʒ�����Ĵ��룩

struct product_infor
{
    int num;//���
    string name;
    int stock;//���
    int price;//����
};

struct habit//�����û�����Ʒ֮�佨����ϵ
{
    int elemt;//1-ʳƷ
    int num;//��Ʒ���
    int times;//�������
};

struct custom_infor
{
    string name;
    string password;
    int shop_sum_x;//����i�ı仯
    int shop_sum_elem[N];//�ڵ�[i]�����˶�Ӧelem 
    int shop_sum_num[N];//�ڵ�[i]�����˶�Ӧnum
    int shop_sum_sum[N];//�ڵ�[i]�����˶�Ӧelem
    int times;//������Ʒ����������������ں���ѭ��
    habit product[999];//999ָ����times�����ȡһ���Ƚϴ������
};

struct custom_infor custom[N];//���ڴ��������û��ļ���Ϣ�������������д���ļ�
struct product_infor product[N][N];
struct custom_infor all_custom;//ȫ�ֱ�����һ�ε�¼Ϊһλ�����߷���

//---------------------------------------------------------------

// int rand_int(int minn,int maxn)//���ϲ���https://blog.csdn.net/Appppiiiiggg/article/details/134877444
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
    cout<<"��Ʒ���-----��Ʒ����-----��Ʒ����-----��Ʒ���"<<endl;
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
    //$$$$$$$$$$$$$$$$$$$$$$$    ��л������� :D  
    //���ܷ���ѭ���ڣ�����һֱ��ȡǰ�ĸ��ַ�
    // ifstream infile("product_food_data.txt", ios::in);//��ȡ�ļ�
    //$$$$$$$$$$$$$$$$$$$$$$$ 
    return ;
}

string custom_paasword_find(string name)//��������
{
    ifstream infile("custom_data.txt", ios::in);//��ȡ�ļ�
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

bool custom_name_find(string name)//�ж��û������Ƿ����
{
    bool flag=0;
    ifstream infile("custom_data.txt", ios::in);//��ȡ�ļ�
    for(int i=0;i<999;i++)//--------------------------------�������û��������---�Ҳ���дһ���пգ��ж��Ƿ�����������û�
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
        product[all_custom.shop_sum_elem[i]][all_custom.shop_sum_num[i]].stock-=all_custom.shop_sum_sum[i];//�ڽ�������иı��棬�Լ��ٺ�����ѭ��
    }
    cout<<"���ڴ˴ι����й�����"<<sum_price<<"Ԫ����ѡ��֧��......";//�û��������˽���
    return ;
}

void product_up_to_date(int pnum)
{
    if(pnum==1)
    {
        ofstream aaoutfile("product_food_data.txt", ios::out);//���ԭ���ֿ��ļ�
        ofstream outfile("product_food_data.txt", ios::app);//׷��д���ļ�
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
        ofstream outfile("product_sport_data.txt", ios::app);//׷��д���ļ�
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
        ofstream outfile("product_cloth_data.txt", ios::app);//׷��д���ļ�
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
        ofstream outfile("product_pens_data.txt", ios::app);//׷��д���ļ�
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
        ofstream outfile("product_machine_data.txt", ios::app);//׷��д���ļ�
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
    ofstream aaaoutfile(a, ios::out);//����ļ�
    ofstream outfile("history_data.txt", ios::app);//д���ļ�

    //�����洢�ṹ  �û���--������Ʒ��������--��Ʒ����--��Ʒ���--�������    history�ļ�
    //-------------------------------------��Ʒ����--��Ʒ���--�������    history�ļ�
    for(long long i=0;i<200;i++)//���ļ���Ϣ�洢������������
    {
        int temp=custom[i].times;//ԭ���Ĺ������
        if(custom[i].name==all_custom.name)//������Ϣ---�˴ι�����
        {
            custom[i].times+=all_custom.shop_sum_x;
        }
        outfile<<custom[i].name<<" ";
        outfile<<custom[i].times<<" ";
        for(int j=0;j<temp;j++)
        {
            outfile<<custom[i].product[j].elemt<<" "<<custom[i].product[j].num<<" "<<custom[i].product[j].times<<" ";
        }
        //-------------------------------------��Ʒ����--��Ʒ���--�������    history�ļ�
        if(custom[i].name==all_custom.name)//��Ӵ˴ι������Ϣ
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
    cout<<endl<<"��ѡ�����������Ʒ���ͣ�"<<endl;
    cout<<endl<<"ʳƷ�ֿ�----1"<<endl<<"�˶��ֿ�----2"<<endl<<"�·��ֿ�----3"<<endl<<"�ľֿ߲�----4"<<endl<<"�ҵ�ֿ�----5"<<endl;
    cout<<"������ֿ���ţ�";
    cin>>choice;
    product_find(choice);
    cout<<endl<<endl<<"��������Ҫ��Ʒ�����͡���š���������@��β";
    cout<<endl<<"!!!!ע��!!!!������Ʒ�������ó�����棡";
    cout<<endl<<"�磺1 2 3 4 5 6 @  ����1���2����3������4���5����6��"<<endl;
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
    cout<<"�Ƿ�������"<<endl;
    cout<<"1����������"<<endl<<"2����������"<<endl;
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
    cout<<"������ʷ�����¼�����Ƽ�������Ʒ��"<<endl;
    cout<<endl<<endl<<"��Ʒ����--------��Ʒ���-------�������"<<endl<<endl;
    ifstream infile("history_data.txt", ios::in);//��ȡ�ļ�


    //�����洢�ṹ  �û���--������Ʒ��������--��Ʒ����--��Ʒ���--�������    history�ļ�
    //-------------------------------------��Ʒ����--��Ʒ���--�������    history�ļ�
    for(long long i=0;i<200;i++)//���ļ���Ϣ�洢������������
    {
        string a;
        infile>>custom[i].name;
        infile>>a;custom[i].times=string_to_int(a);//������Ʒ��������
        for(int j=0;j<custom[i].times;j++)
        {
            infile>>a;  custom[i].product[j].elemt=string_to_int(a);
            infile>>a;  custom[i].product[j].num=string_to_int(a);
            infile>>a;  custom[i].product[j].times=string_to_int(a);
        }
        if(custom[i].name==all_custom.name)//�����û�����λ��
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
    cout<<endl<<endl<<"�Ƿ���Ҫ��������Ʒ��������ﳵ��"<<endl;
    cout<<"����Ҫ�������룺���ǡ����������ţ������������룺���񡱣��������ţ�"<<endl;
    string bbb;
    cin>>bbb;
    if(bbb=="��")
    {
        cout<<endl<<endl<<"��������Ҫ��Ʒ�����͡���š���������@��β";
        cout<<endl<<"!!!!ע��!!!!������Ʒ�������ó�����棡";
        cout<<endl<<"�磺1 2 3 4 5 6 @  ����1���2����3������4���5����6��"<<endl;
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
        cout<<endl<<"�������"<<endl;
        shop_car();
    }
    else
    {
        cout<<"1����������"<<endl<<"2���˳�����"<<endl;
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
    cout<<"�������Ʒ����";
    cin>>product[pnum][product_size[pnum]].name;
    cout<<endl<<"�������Ʒ���ۣ�";
    cin>>product[pnum][product_size[pnum]].price;
    cout<<endl<<"�������Ʒ������";
    cin>>product[pnum][product_size[pnum]].stock;
    product[pnum][product_size[pnum]].num=product_size[pnum];

    if(pnum==1)
    {
        ofstream outfile("product_food_data.txt", ios::app);//׷��д���ļ�
        outfile<<product[pnum][product_size[pnum]].num<<" "<<product[pnum][product_size[pnum]].name<<" ";
        outfile<<product[pnum][product_size[pnum]].price<<" "<<product[pnum][product_size[pnum]].stock<<" ";
    }
    if(pnum==2)
    {
        ofstream outfile("product_sport_data.txt", ios::app);//׷��д���ļ�
        outfile<<product[pnum][product_size[pnum]].num<<" "<<product[pnum][product_size[pnum]].name<<" ";
        outfile<<product[pnum][product_size[pnum]].price<<" "<<product[pnum][product_size[pnum]].stock<<" ";
    }
    if(pnum==3)
    {
        ofstream outfile("product_cloth_data.txt", ios::app);//׷��д���ļ�
        outfile<<product[pnum][product_size[pnum]].num<<" "<<product[pnum][product_size[pnum]].name<<" ";
        outfile<<product[pnum][product_size[pnum]].price<<" "<<product[pnum][product_size[pnum]].stock<<" ";
    }
    if(pnum==4)
    {
        ofstream outfile("product_pens_data.txt", ios::app);//׷��д���ļ�
        outfile<<product[pnum][product_size[pnum]].num<<" "<<product[pnum][product_size[pnum]].name<<" ";
        outfile<<product[pnum][product_size[pnum]].price<<" "<<product[pnum][product_size[pnum]].stock<<" ";
    }
    if(pnum==5)
    {
        ofstream outfile("product_machine_data.txt", ios::app);//׷��д���ļ�
        outfile<<product[pnum][product_size[pnum]].num<<" "<<product[pnum][product_size[pnum]].name<<" ";
        outfile<<product[pnum][product_size[pnum]].price<<" "<<product[pnum][product_size[pnum]].stock<<" ";
    }
    // admin_space();
    return ;
}

void admin_space()
{
    cout<<endl<<endl;
    cout<<"������ֿ���룺"<<endl;
    cout<<"ʳƷ�ֿ�----1"<<endl;
    cout<<"�˶��ֿ�----2"<<endl;
    cout<<"�·��ֿ�----3"<<endl;
    cout<<"�ľֿ߲�----4"<<endl;
    cout<<"�ҵ�ֿ�----5"<<endl;
    int choice;
    cin>>choice;
    cout<<"��ѡ���ܣ�"<<endl;
    cout<<"1����ӻ�Ʒ��Ϣ"<<endl<<"2����ѯ��Ʒ��Ϣ"<<endl<<"3������������˳�ϵͳ"<<endl<<endl;
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
    string custom_name,custom_password;//�ļ��в����û���Ϣ��ʱ����
    string password,name;//�û�����
    cout<<"-------------------���¼-------------------"<<endl;
    cout<<"�������û�����";
    cin>>name;
    cout<<"���������룺";
    cin>>password;
    custom_name=name;
    if(custom_name_find(name)==true)//�Ȳ����û��Ƿ����
    {
        custom_password=custom_paasword_find(name);
    }
    else//--------------------------�����ڸ��û������µ�¼
    {
        cout<<"-----------��¼ʧ�ܣ�-----------"<<endl;
        cout<<"---------�����ڸ��û���---------"<<endl;
        return ;
    }
    if(password==custom_password)//�ж��û������Ƿ���ȷ
    {
        cout<<"-----------��½�ɹ���-----------"<<endl<<endl<<endl;
        all_custom.name=name;
        menu_custom();
    }
    else//-----------------------------����������µ�¼
    {
        cout<<"-----------��¼ʧ�ܣ�-----------"<<endl;
        cout<<"-----------�������-----------"<<endl;
        return ;
    }
}

void initi_custom_file()//ע���û��ļ�
{
    ofstream outfile("custom_data.txt", ios::app);//׷��д���ļ�
    string name,password;
    cout<<"--------------������ע����Ϣ--------------"<<endl;
    cout<<"�û�����";
    cin>>name;

    if(custom_name_find(name)==true)//�ж��Ƿ����ͬ���û����Է�ֹ�����Ǵ��˺�
    {
        cout<<endl<<endl<<"�Ѵ��ڸ��û���"<<endl<<"������û���"<<endl<<"����������������ϵ����Ա"<<endl<<endl;//û���ˣ������޸��ļ����ݰ���ʦ��ֻ�������Ϣ
        cout<<endl<<"����ע�������룺1"<<endl<<"��¼��ѡ��2"<<endl;
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
        cout<<endl<<"���룺";
        cin>>password;
        outfile<<password<<" ";
    }
    outfile.close();
    for(int i=0;i<99;i++)//�ָ�����
    {
        cout<<endl;
    }
    login();
}

void custom_space()
{
    cout<<"########################��ӭʹ��project27���ܹ���ϵͳ########################"<<endl;
    cout<<endl<<"����ʹ����ѡ��1"<<endl<<"���û���ѡ��2"<<endl<<"����������˳�"<<endl<<endl ;
    cout<<endl;
    int choice_1;
    cin>>choice_1;
    if(choice_1==1)
    {
        initi_custom_file();
	}
	else if(choice_1==2)
	{
        ofstream outfile("custom_data.txt", ios::app);//׷��д���ļ�
        outfile<<"dsc 123456 ";//���Ĭ���û�����dsc Ĭ�����룺123456
        outfile.close();
		login();
	}
	else
	{
		return ;
	}
}

void up_to_date_product(int pnum)//�������ļ������ݶ������飬����������򣬸����ļ��ȣ�ͬʱ������һ�β������µĲֿ�������ͬ
{
    int maxn=0;
    if(pnum==1)
    {
        ifstream infile("product_food_data.txt", ios::in);//��ȡ�ļ�
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
        ifstream infile("product_sport_data.txt", ios::in);//��ȡ�ļ�
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
        ifstream infile("product_cloth_data.txt", ios::in);//��ȡ�ļ�
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
        ifstream infile("product_pens_data.txt", ios::in);//��ȡ�ļ�
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
        ifstream infile("product_machine_data.txt", ios::in);//��ȡ�ļ�
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
    up_to_date_product(1);//���²ֿ��Ʒ����
    up_to_date_product(2);
    up_to_date_product(3);
    up_to_date_product(4);
    up_to_date_product(5);
    cout<<"��ѡ���ɫ��";
    cout<<endl<<"1������Ա"<<endl<<"2��������"<<endl<<"3������������˳�����"<<endl<<endl;
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