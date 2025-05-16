//课题名称：物流配送站智能规划系统设计

/*应用相关数据结构及算法，设计并实现一个单车辆，不少于30个物流配送站的智能优化货物配送系统。
设计其信息数据结构，根据配送耗费（如重量、位置等）实现如下功能：
（1）实现车辆的最优商品配重；
（2）实现最优的配送路径；
（3）能够及时查询货物的状态。
要求：
（1）理解及熟练运用相关图路径算法；
（2）理解运用运用图的存储；
（3）理解运用相关查询技术；
（4）界面友好、系统运行应该快速、稳定、高效和可靠。*/ 
//配送费用（重量，位置）
//站点可从文件随机导入
#include<bits/stdc++.h>
#define inf 0x3f3f3f3f;
#define maxn 1005

struct node
{
    int num;    //编号
    int s;      //起点
    int e;      //终点
    int we;     //重量
    int yes;    //是否送到
}th[maxn];

int WEIGHT = 500; //货物最多承载重量
int NUM = 1000;  //货物总数
int CITY = 30;   //城市总数 
int START;       //起点
int thing[maxn];    //表示货物是否上车

int pre[maxn][maxn];    //两点之间路径距离
int dis[maxn];      //两点之间最短距离
int vis[maxn];      //是否访问
int path[maxn];     //最短路径记录
int stack[maxn];    //模拟栈
int out[maxn];      //最短路径正向记录
int outnow[maxn];  //记录最短的路径
int n = 30, m = 80;   //n表示一共有多少个站点， m表示一共有多少条路径
int sta;
int sta_now;

void init();
void input1();
void input2();
void choose();
void check();
void load(int s);
void check_thing();
int Dijkstra(int v, int t);
int bool_yes();
void printall();
void menu();

//============================================初始化=============================================
void init() 
{
    int i, j;
    for(int i=1; i<=n; i++)
    {
        dis[i] = inf;
    }
    memset(vis, 0, sizeof(vis));//初始化内存
    memset(thing, 0, sizeof(thing));//初始化内存
}
//===========================================文件读入=============================================

int K = 0;//加上一个开关
 
void input1()//读取货物文件夹函数 
{
    if(K == 0)//判断开关 
    {
        FILE *fp;//定义文件指针指向要读取的文件 
        fp = fopen("货物.txt", "r");//将函数的值赋给文件指针变量指向文件名 
        printf("货物编号\t起始站点\t终止站点\t重量\t\t\n");//输出要读取的文件信息 
        int i, num, s, e, we;//定义要用到的信息 
        for(i = 0; i< NUM; i++)//1000个货物 
        {
            fscanf(fp, "%d %d %d %d", &num, &s, &e, &we);//序号，起点，终点，重量 
            printf("%d\t\t%d\t\t%d\t\t%d\t\t\n", num, s, e, we);//输出刚刚读取到的文件信息 
            th[i].num = num;//输入到结构体信息里 
            th[i].s = s;
            th[i].e = e;
            th[i].we = we;
            th[i].yes = 0;
        }
        fclose(fp);//关闭这个指针以便于下次使用 
    }
}

void input2()//读取地点文件夹函数 
{
    if(K == 0)//判断开关 
    {
        FILE *fp;//定义文件指针指向要读取的文件
        fp = fopen("站点.txt", "r");//将函数的值赋给文件指针变量指向文件名
        printf("起始站点\t终止站点\t距离\n");//输出要读取的文件信息
        int i, j, a, b, dis;//定义要用的数据名称 
        for(i=0; i<m; i++)
        {
                fscanf(fp, "%d %d %d", &a, &b, &dis);//起点，终点，距离 
                printf("%d\t\t%d\t\t%d\t\t\n", a, b, dis);//输出读取到的信息 
                pre[a][b] = dis;//两点之间的距离 
        }
        fclose(fp);//关闭指针 
        K=1;//关闭开关防止再执行读取文件操作 
    }
}

//==========================================选择起点======================================================
void choose()
{
    int val[35], i;
    memset(val, 0, sizeof(val));//初始化内存 
    for(i=0;i<NUM;i++)
    {
        val[th[i].s]++;
        val[th[i].e]++;
    }
    printf("目前共有30个城市\n");
    printf("目前有货物的城市为：\n");
    for(i = 1; i<=30; i++)
    {
        if(val[i] > 0)//如果这个城市有货物在，就输出 
            printf("%d ", i);//输出城市信息 
    }
    printf("\n请选择货车起点:\n");
    scanf("%d", &START);//货车起点的城市序号 
}
//=========================================查询货物========================================================
void check()
{
    int res;//定义要使用的数据名称 
    printf("输入查询货物的编号:\n");
    scanf("%d", &res);//读入数据 
    if(res >=0 && res <NUM)//判断是否该货物存在 
    {
        if(th[res].yes == 0)//判断是否送到 
        {
            printf("货物在起点运输站%d\n", th[res].s);
        }
        else if(th[res].yes == 1)
        {
            printf("货物在终点运输站%d\n", th[res].e);
        }
        else if(th[res].yes == -1)
        {
            printf("货物在运输车上\n");
        }
    }
}
//===========================================查询货车货物=====================================================
void check_thing()
{
    printf("货车现在有货物：");
    int i;
    for(i=0; i<NUM; i++)//循环所有货物 
    {
        if(thing[i] == 1)//该货物在车上 
        {
           printf("%d ", i);//输出该货物名称 
        }
    }
    printf("\n");
}
//=======================================最优配货方案=======================================================
void load(int s)
{

    int i, k, min_, number;
    min_ = inf;//最大值 
    number = -1;
    for(i=0; i<NUM; i++)//以货物总数进行循环 
    {
        if(thing[i] == 1 && th[i].e == s)//货物在车上并且该货物的终点是该站点 
        {
            thing[i] = 0;//货物下车 
            th[i].yes = 1;//货物送到 
            WEIGHT = WEIGHT + th[i].we;//车能承载的重量增加 
            printf("货物%d送达\n", i);//表示货物送达 
        }
    }
    for(i=0; i<NUM; i++)//以货物总数进行循环 
    {
        if(th[i].s == s && th[i].yes == 0)//该货物在该站且没有完成配送 
        {
            if(Dijkstra(th[i].s, th[i].e) < min_)//广度优先搜索最短路 
            {
                min_ = Dijkstra(th[i].s, th[i].e);//这条路最短 
                number = th[i].e;//终点就定在这里 
            }
        }
    }
    if(number != -1)//number一开始定义是-1，当不是-1的时候表明已经确定目标地点 
    {
        for(i=0; i<NUM; i++)//以货物总数进行循环
        {
            if(th[i].s == s && th[i].e == number && WEIGHT > th[i].we && th[i].yes == 0) 
            {//如果该货物在该站并且终点恰好为目标地点，同时重量允许该货物上车 
                thing[i] = 1;//货物上车 
                th[i].yes = -1;//货物未送达 
                WEIGHT = WEIGHT - th[i].we;//车上能承载重量减少 
                printf("货物%d放上运送车\n", i);
            }
        }
    }
    else if(number == -1)//如果该站点没有货物要运输，就没有目标站点 
    {//这样要寻找离该站点最近的站点出发去 
        min_ = inf;//赋值最大值 
        for(i=0; i<NUM; i++)//以货物总数进行循环
        {
            if(th[i].yes == 0)//货物未送达 
            {
                if(Dijkstra(s, th[i].s) < min_)//搜索到更短的路径 
                {
                    min_ = Dijkstra(s, th[i].s);//该路径变成新的目标地点 
                    number = th[i].s;
                }
            }
        }
        if(number != -1)//这时再判断下有没有目标地点，如果没有 
        {//表示已经运送完成 
            printf("货车空车开到%d\n", number);
        }
        else
        {
            printf("货物全部配送完成\n");
        }
    }
    START = number; 
}
//=======================================dijkstra最短路=====================================================
int Dijkstra(int v, int t)//广度优先搜索 
{
    int i, j;
    for(i=1; i<=n; i++)
    {
        dis[i] = pre[v][i];
        path[i] = -1;
    }
    int pos = v, min_;
    vis[v] = 1;
    dis[v] = 0;
    for(i=1; i<=n; i++)
    {
        min_ = inf;
        for(j=1; j<=n; j++)
        {
            if(vis[j] == 0 && min_ > dis[j])
            {
                min_ = dis[j];
                pos = j;
            }
        }
        vis[pos] = 1;
        for(j=1; j<=n; j++)
        {
            if(vis[j] == 0 &&dis[j] > dis[pos] + pre[pos][j])
            {
                dis[j] = dis[pos] + pre[pos][j];
                path[j] = pos;
            }
        }
    }
    int top = 0;
    j = t, sta = 0;
    while(path[j] != -1)
    {
        stack[top] = j;
        top++;
        j = path[j];
    }
    stack[top] = j;
    top++;
    out[sta] = v;
    sta++;
    while(top != 0)
    {
        top--;
        out[sta] = stack[top];
        sta++;
    }
    return dis[t];
}

//========================================输出全部路径==============================================
int bool_yes()//函数名 
{
    int k = 0, i;
    for(i=0; i<NUM; i++)
    {
        if(th[i].yes == 1)
        {
            k++;
        }
    }
    return k;
}

void printall()
{
    int i = 1;
    while(1)
    {

        printf("操作%d：\n", i);
        i++;
        load(START);
        printf("送达货物%d件\n", bool_yes());
        printf("\n");
        if(bool_yes() == NUM)
        {
            break;
        }
    }
}
//=========================================菜单=======================================================
void menu()
{
    printf("\t\t\t******************************************\t\t\t\n");
    printf("\t\t\t\t1.文件读取站点货物信息\n");
    printf("\t\t\t\t2.列出货车配送起点\n");
    printf("\t\t\t\t3.查询货物的状态\n");
    printf("\t\t\t\t4.货车此时装配的货物\n");
    printf("\t\t\t\t5.货车转载货物至下一站点\n");
    printf("\t\t\t\t6.输出货车配送完整路径\n");
    printf("\t\t\t******************************************\t\t\t\n");
    printf("请选择：");
}
//======================================主函数======================================================
int main()//主函数 
{
    init();//初始化数据 
    while (1)//不停止循环 
    {
        system("cls");//清空屏幕函数，使屏幕清空 
        menu();//输出菜单 
        int res;
        char str[100];
        scanf("%d", &res);//读入指令 
        if(res==1)
        {
                system("cls" );
                input1();
                input2();
                printf("输入任意键继续:");
                scanf("%s", str);
        }
        else if(res==2)
        {
                system("cls" );
                choose();
                printf("输入任意键继续:");
                scanf("%s", str);
        }
        else if(res==3)
        {
                system("cls" );
                check();
                printf("输入任意键继续:");
                scanf("%s", str);
        }
        else if(res==4)
        {
                system("cls" );
                check_thing();
                printf("输入任意键继续:");
                scanf("%s", str);
        }
        else if(res==5)
        {
                system("cls" );
                printf("可以选择货车进行几次操作\n");
                int count_, i = 1;
                scanf("%d", &count_);
                while(count_)
                {
                    printf("操作%d\n", i);
                    load(START);
                    count_--;
                    i++;
                }
                printf("输入任意键继续:");
                scanf("%s", str);
        }
        else if(res==6)
        {
                system("cls" );
                printall();
                printf("输入任意键继续:");
                scanf("%s", str);
        }
         else
                exit(0);
    }
    return 0;
}


