//�������ƣ���������վ���ܹ滮ϵͳ���

/*Ӧ��������ݽṹ���㷨����Ʋ�ʵ��һ����������������30����������վ�������Ż���������ϵͳ��
�������Ϣ���ݽṹ���������ͺķѣ���������λ�õȣ�ʵ�����¹��ܣ�
��1��ʵ�ֳ�����������Ʒ���أ�
��2��ʵ�����ŵ�����·����
��3���ܹ���ʱ��ѯ�����״̬��
Ҫ��
��1����⼰�����������ͼ·���㷨��
��2�������������ͼ�Ĵ洢��
��3�����������ز�ѯ������
��4�������Ѻá�ϵͳ����Ӧ�ÿ��١��ȶ�����Ч�Ϳɿ���*/ 
//���ͷ��ã�������λ�ã�
//վ��ɴ��ļ��������
#include<bits/stdc++.h>
#define inf 0x3f3f3f3f;
#define maxn 1005

struct node
{
    int num;    //���
    int s;      //���
    int e;      //�յ�
    int we;     //����
    int yes;    //�Ƿ��͵�
}th[maxn];

int WEIGHT = 500; //��������������
int NUM = 1000;  //��������
int CITY = 30;   //�������� 
int START;       //���
int thing[maxn];    //��ʾ�����Ƿ��ϳ�

int pre[maxn][maxn];    //����֮��·������
int dis[maxn];      //����֮����̾���
int vis[maxn];      //�Ƿ����
int path[maxn];     //���·����¼
int stack[maxn];    //ģ��ջ
int out[maxn];      //���·�������¼
int outnow[maxn];  //��¼��̵�·��
int n = 30, m = 80;   //n��ʾһ���ж��ٸ�վ�㣬 m��ʾһ���ж�����·��
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

//============================================��ʼ��=============================================
void init() 
{
    int i, j;
    for(int i=1; i<=n; i++)
    {
        dis[i] = inf;
    }
    memset(vis, 0, sizeof(vis));//��ʼ���ڴ�
    memset(thing, 0, sizeof(thing));//��ʼ���ڴ�
}
//===========================================�ļ�����=============================================

int K = 0;//����һ������
 
void input1()//��ȡ�����ļ��к��� 
{
    if(K == 0)//�жϿ��� 
    {
        FILE *fp;//�����ļ�ָ��ָ��Ҫ��ȡ���ļ� 
        fp = fopen("����.txt", "r");//��������ֵ�����ļ�ָ�����ָ���ļ��� 
        printf("������\t��ʼվ��\t��ֹվ��\t����\t\t\n");//���Ҫ��ȡ���ļ���Ϣ 
        int i, num, s, e, we;//����Ҫ�õ�����Ϣ 
        for(i = 0; i< NUM; i++)//1000������ 
        {
            fscanf(fp, "%d %d %d %d", &num, &s, &e, &we);//��ţ���㣬�յ㣬���� 
            printf("%d\t\t%d\t\t%d\t\t%d\t\t\n", num, s, e, we);//����ոն�ȡ�����ļ���Ϣ 
            th[i].num = num;//���뵽�ṹ����Ϣ�� 
            th[i].s = s;
            th[i].e = e;
            th[i].we = we;
            th[i].yes = 0;
        }
        fclose(fp);//�ر����ָ���Ա����´�ʹ�� 
    }
}

void input2()//��ȡ�ص��ļ��к��� 
{
    if(K == 0)//�жϿ��� 
    {
        FILE *fp;//�����ļ�ָ��ָ��Ҫ��ȡ���ļ�
        fp = fopen("վ��.txt", "r");//��������ֵ�����ļ�ָ�����ָ���ļ���
        printf("��ʼվ��\t��ֹվ��\t����\n");//���Ҫ��ȡ���ļ���Ϣ
        int i, j, a, b, dis;//����Ҫ�õ��������� 
        for(i=0; i<m; i++)
        {
                fscanf(fp, "%d %d %d", &a, &b, &dis);//��㣬�յ㣬���� 
                printf("%d\t\t%d\t\t%d\t\t\n", a, b, dis);//�����ȡ������Ϣ 
                pre[a][b] = dis;//����֮��ľ��� 
        }
        fclose(fp);//�ر�ָ�� 
        K=1;//�رտ��ط�ֹ��ִ�ж�ȡ�ļ����� 
    }
}

//==========================================ѡ�����======================================================
void choose()
{
    int val[35], i;
    memset(val, 0, sizeof(val));//��ʼ���ڴ� 
    for(i=0;i<NUM;i++)
    {
        val[th[i].s]++;
        val[th[i].e]++;
    }
    printf("Ŀǰ����30������\n");
    printf("Ŀǰ�л���ĳ���Ϊ��\n");
    for(i = 1; i<=30; i++)
    {
        if(val[i] > 0)//�����������л����ڣ������ 
            printf("%d ", i);//���������Ϣ 
    }
    printf("\n��ѡ��������:\n");
    scanf("%d", &START);//�������ĳ������ 
}
//=========================================��ѯ����========================================================
void check()
{
    int res;//����Ҫʹ�õ��������� 
    printf("�����ѯ����ı��:\n");
    scanf("%d", &res);//�������� 
    if(res >=0 && res <NUM)//�ж��Ƿ�û������ 
    {
        if(th[res].yes == 0)//�ж��Ƿ��͵� 
        {
            printf("�������������վ%d\n", th[res].s);
        }
        else if(th[res].yes == 1)
        {
            printf("�������յ�����վ%d\n", th[res].e);
        }
        else if(th[res].yes == -1)
        {
            printf("���������䳵��\n");
        }
    }
}
//===========================================��ѯ��������=====================================================
void check_thing()
{
    printf("���������л��");
    int i;
    for(i=0; i<NUM; i++)//ѭ�����л��� 
    {
        if(thing[i] == 1)//�û����ڳ��� 
        {
           printf("%d ", i);//����û������� 
        }
    }
    printf("\n");
}
//=======================================�����������=======================================================
void load(int s)
{

    int i, k, min_, number;
    min_ = inf;//���ֵ 
    number = -1;
    for(i=0; i<NUM; i++)//�Ի�����������ѭ�� 
    {
        if(thing[i] == 1 && th[i].e == s)//�����ڳ��ϲ��Ҹû�����յ��Ǹ�վ�� 
        {
            thing[i] = 0;//�����³� 
            th[i].yes = 1;//�����͵� 
            WEIGHT = WEIGHT + th[i].we;//���ܳ��ص��������� 
            printf("����%d�ʹ�\n", i);//��ʾ�����ʹ� 
        }
    }
    for(i=0; i<NUM; i++)//�Ի�����������ѭ�� 
    {
        if(th[i].s == s && th[i].yes == 0)//�û����ڸ�վ��û��������� 
        {
            if(Dijkstra(th[i].s, th[i].e) < min_)//��������������· 
            {
                min_ = Dijkstra(th[i].s, th[i].e);//����·��� 
                number = th[i].e;//�յ�Ͷ������� 
            }
        }
    }
    if(number != -1)//numberһ��ʼ������-1��������-1��ʱ������Ѿ�ȷ��Ŀ��ص� 
    {
        for(i=0; i<NUM; i++)//�Ի�����������ѭ��
        {
            if(th[i].s == s && th[i].e == number && WEIGHT > th[i].we && th[i].yes == 0) 
            {//����û����ڸ�վ�����յ�ǡ��ΪĿ��ص㣬ͬʱ��������û����ϳ� 
                thing[i] = 1;//�����ϳ� 
                th[i].yes = -1;//����δ�ʹ� 
                WEIGHT = WEIGHT - th[i].we;//�����ܳ����������� 
                printf("����%d�������ͳ�\n", i);
            }
        }
    }
    else if(number == -1)//�����վ��û�л���Ҫ���䣬��û��Ŀ��վ�� 
    {//����ҪѰ�����վ�������վ�����ȥ 
        min_ = inf;//��ֵ���ֵ 
        for(i=0; i<NUM; i++)//�Ի�����������ѭ��
        {
            if(th[i].yes == 0)//����δ�ʹ� 
            {
                if(Dijkstra(s, th[i].s) < min_)//���������̵�·�� 
                {
                    min_ = Dijkstra(s, th[i].s);//��·������µ�Ŀ��ص� 
                    number = th[i].s;
                }
            }
        }
        if(number != -1)//��ʱ���ж�����û��Ŀ��ص㣬���û�� 
        {//��ʾ�Ѿ�������� 
            printf("�����ճ�����%d\n", number);
        }
        else
        {
            printf("����ȫ���������\n");
        }
    }
    START = number; 
}
//=======================================dijkstra���·=====================================================
int Dijkstra(int v, int t)//����������� 
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

//========================================���ȫ��·��==============================================
int bool_yes()//������ 
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

        printf("����%d��\n", i);
        i++;
        load(START);
        printf("�ʹ����%d��\n", bool_yes());
        printf("\n");
        if(bool_yes() == NUM)
        {
            break;
        }
    }
}
//=========================================�˵�=======================================================
void menu()
{
    printf("\t\t\t******************************************\t\t\t\n");
    printf("\t\t\t\t1.�ļ���ȡվ�������Ϣ\n");
    printf("\t\t\t\t2.�г������������\n");
    printf("\t\t\t\t3.��ѯ�����״̬\n");
    printf("\t\t\t\t4.������ʱװ��Ļ���\n");
    printf("\t\t\t\t5.����ת�ػ�������һվ��\n");
    printf("\t\t\t\t6.���������������·��\n");
    printf("\t\t\t******************************************\t\t\t\n");
    printf("��ѡ��");
}
//======================================������======================================================
int main()//������ 
{
    init();//��ʼ������ 
    while (1)//��ֹͣѭ�� 
    {
        system("cls");//�����Ļ������ʹ��Ļ��� 
        menu();//����˵� 
        int res;
        char str[100];
        scanf("%d", &res);//����ָ�� 
        if(res==1)
        {
                system("cls" );
                input1();
                input2();
                printf("�������������:");
                scanf("%s", str);
        }
        else if(res==2)
        {
                system("cls" );
                choose();
                printf("�������������:");
                scanf("%s", str);
        }
        else if(res==3)
        {
                system("cls" );
                check();
                printf("�������������:");
                scanf("%s", str);
        }
        else if(res==4)
        {
                system("cls" );
                check_thing();
                printf("�������������:");
                scanf("%s", str);
        }
        else if(res==5)
        {
                system("cls" );
                printf("����ѡ��������м��β���\n");
                int count_, i = 1;
                scanf("%d", &count_);
                while(count_)
                {
                    printf("����%d\n", i);
                    load(START);
                    count_--;
                    i++;
                }
                printf("�������������:");
                scanf("%s", str);
        }
        else if(res==6)
        {
                system("cls" );
                printall();
                printf("�������������:");
                scanf("%s", str);
        }
         else
                exit(0);
    }
    return 0;
}


