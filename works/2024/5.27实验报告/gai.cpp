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
    edge(int x=0,int y=0,double w=0,double val=0):x(x),y(y),w(w),val(val){}//初始化
}e[100100];

int cmp(edge a,edge b)//自定义的比较函数方便使用sort函数
{
    return a.val<b.val;
}
int getfather(int x)//寻找对应的代表单元
{
    return fa[x]==x ? x: fa[x]=getfather(fa[x]);
}

void kruskal(int sum)//迪杰斯特拉算法
{
    
    int cnt=n;
    double res=0;
    double tmp_ans=0;
    
    double average=sum * 1.0 /(n-1); 
    
    //方差 * (n-1)
    for(int i=0;i<m;i++){
        e[i].val = (e[i].w-average) * (e[i].w-average);//计算方差
    }
    for(int i=1;i<=n;i++)fa[i]=i;
    sort(e,e+m,cmp);
    for(int i=0;i<m;i++)
    {
        int t1=getfather(e[i].x);
        int t2=getfather(e[i].y);
        if(t1!=t2)//比较代表单元，检查是否会形成回路
            
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
        sort(tmp,tmp+m);//将边按权值排序后确定边权值之和的范围
        for(int i=0;i<n-1;i++){
            minn+=tmp[i];
        }
        for(int i=m-1;i>m-n;--i){
            maxx+=tmp[i];
        }
        for(int i=minn;i<=maxx;i++){ // 迪杰斯特拉算法
            kruskal(i);
        }
        ans=ans/(n-1);
        liangzai[cas]=ans;
        cas++;
        // printf("Case %d: %.2f\n",cas,ans);//输出结果
    }
    for(int i=1;i<=cas;i++)
    {
        cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<liangzai[i]<<endl;
    }
    return 0;
}