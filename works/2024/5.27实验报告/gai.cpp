#include<bits/stdc++.h>
using namespace std;
int n,m;
double ans;
int tmp[1001];
int fa[1001]; 
struct edge
{
    int x,y;
    double w,val;
    edge(int x=0,int y=0,double w=0,double val=0):x(x),y(y),w(w),val(val){}//��ʼ��
}e[100100];

int cmp(edge a,edge b)//�Զ���ıȽϺ�������ʹ��sort����
{
    return a.val<b.val;
}
int getfather(int x)//Ѱ�Ҷ�Ӧ�Ĵ���Ԫ
{
    return fa[x]==x ? x: fa[x]=getfather(fa[x]);
}

void kruskal(int sum)//�Ͻ�˹�����㷨
{
    
    int cnt=n;
    double res=0;
    double tmp_ans=0;
    
    double average=sum * 1.0 /(n-1); 
    
    //���� * (n-1)
    for(int i=0;i<m;i++){
        e[i].val = (e[i].w-average) * (e[i].w-average);//���㷽��
    }
    for(int i=1;i<=n;i++)fa[i]=i;
    sort(e,e+m,cmp);
    for(int i=0;i<m;i++)
    {
        int t1=getfather(e[i].x);
        int t2=getfather(e[i].y);
        if(t1!=t2)//�Ƚϴ���Ԫ������Ƿ���γɻ�·
            
        {
            fa[t1]=t2;
            res += e[i].w;
            tmp_ans += e[i].val;    
            cnt--;
            if(cnt==1)break;
        }
    }
    if((int)res==sum){
        ans=min(ans, tmp_ans);
        //cout<<"true"<<endl;
    } 
}
double liangzai[999999];
int main()
{
    int cas=1;
    while(~scanf("%d%d",&n,&m),n+m)
    {
        int maxx=0,minn=0;
        ans=999999999999999.0;
        
        for(int i=0;i<m;i++){
            cin>>e[i].x>>e[i].y>>e[i].w;
            tmp[i]=e[i].w;
        }
        sort(tmp,tmp+m);//���߰�Ȩֵ�����ȷ����Ȩֵ֮�͵ķ�Χ
        for(int i=0;i<n-1;i++){
            minn+=tmp[i];
        }
        for(int i=m-1;i>m-n;--i){
            maxx+=tmp[i];
        }
        for(int i=minn;i<=maxx;i++){ // �Ͻ�˹�����㷨
            kruskal(i);
        }
        ans=ans/(n-1);
        liangzai[cas]=ans;
        cas++;
        // printf("Case %d: %.2f\n",cas,ans);//������
    }
    for(int i=1;i<=cas;i++)
    {
        cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<liangzai[i]<<endl;
    }
    return 0;
}