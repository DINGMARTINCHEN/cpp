// #include<bits/stdc++.h>
// using namespace std;
// const int N=50010;
// int a[N],b[N];
// int main()
// {
// 	int t,n;
// 	int lc=0,rc=0;
// 	cin>>t>>n;
// 	for(int i=0;i<n;i++)
// 	{
// 		int x;
// 		cin>>x;
// 		if(x<0) //��ߵĵ� 
// 			a[++lc]=-x; 
// 		else b[++rc]=x; //�ұߵĵ� 
// 	}
// 	sort(a+1,a+lc+1);
// 	sort(b+1,b+rc+1);
// 	int ans=0;
// 	for(int i=0;i<=lc;i++)//�����ߣ������� 
// 	{
// 		int lim=t-2*a[i];
// 		if(lim<0) break;
// 		int l=0,r=rc;
// 		while(l<r)
// 		{
// 			int mid=l+r+1>>1;
// 			if(b[mid]<=lim) l=mid;
// 			else r=mid-1;
// 		}
// 		ans=max(ans,i+l);
// 	}
// 	for(int i=0;i<=rc;i++) //�����ߣ������� 
// 	{
// 		int lim=t-2*b[i];
// 		if(lim<0) break;
// 		int l=0,r=lc;
// 		while(l<r)
// 		{
// 			int mid=l+r+1>>1;
// 			if(a[mid]<=lim) l=mid;
// 			else r=mid-1;
// 		}
// 		ans=max(ans,i+l);
// 	}
// 	cout<<ans<<endl;
// 	return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int t,n,a[50505],MAX;
// bool check(int x){
// 	for(int i=x;i<=n;i++){//ö���ҵ�
// 		int l=i-x+1;//�Ƴ����
// 		if(a[i]<=0){//һ�����ߵ��ڵ��ж�
// 			if(-a[l]<=t)return true;
// 		}
// 		if(a[l]>=0){//��ײ��ǽ����ͷ���ж�
// 			if(a[i]<=t)return true;
// 		}
// 		if(a[l]<=0&&a[i]>=0){//����������������������һ��
// 			if(min(-a[l],a[i])+(a[i]-a[l])<=t)return true;
// 		}
// 	}
// 	return false;
// }
// int main(){
// 	scanf("%d%d",&t,&n);
// 	for(int i=1;i<=n;i++){
// 		scanf("%d",&a[i]);
// 	}
// 	sort(a+1,a+1+n);
// 	int lt=-1,rt=n+1;//��ס��lһ��Ҫ����Ϊ-1����һһ��Ҳ���ʲ�����
// 	while(lt+1<rt){
// 		int mid=lt+(rt-lt)/2;//�ȼ��ڣ�lt+rt��/2����������һ��������int
// 		if(check(mid)){
// 			lt=mid;//������У�����l��ef��t��ȥ����Ϊ����������Խ��Խ��
// 		}
// 		else{
// 			rt=mid;
// 		}
// 	}
// 	printf("%d",lt);//��Ϊ�����е�mid��l��ef��t�������ˣ�so���l��ef��t
// 	return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int t,n;
int a[100001];
bool check(int x){//�жϺ�������ʾ�����ܷ���ʵ�x��·��
	for(int r=x;r<=n;r++){//ö���Ҷ˵�
		int l=r-x+1;
		if(a[r]<=0)//����Ҷ˵���ԭ����ߣ���Ҫһֱ������
		    if(-a[l]<=t)return 1;//���������жϼ��ɣ����Ծ�ֱ�ӷ���true
		if(a[l]>=0)//�����˵���ԭ���ұߣ���Ҫһֱ������
		    if(a[r]<=t)return 1;//ͬ��
		if(a[l]<=0&&a[r]>=0)//��������������ԭ��
		    if(min(a[r],-a[l])+a[r]-a[l]<=t)return 1;//��ô��һ������ȥ����ԭ��̵���һ�ߣ����ߵ���һ��
	}
	return 0;//�������ѭ��ִ���꣬û���ҵ����н⣬�Ǿͷ���false
}
int main(){
	cin>>t>>n;
	for(int i=1;i<=n;i++)
	    cin>>a[i];
	sort(a+1,a+1+n);//������·��λ������
	int l=-1,r=n+1;//�����ܷ��ʵ�·����������Ϊ0~n�����԰���߽���Ϊ1���ұ߽���Ϊn+1���Ϳ��Ա�֤���ֵ����н�
	while(l+1<r){//����дl+1<r��Ϊ�˷�ֹ���l,r���ֽ�����������l>r
		int mid=(l+r)>>1;
		if(check(mid))l=mid;
		else r=mid;
        //����l,r��ֵʱдmid������mid+1��mid-1��Ҳ��Ϊ�˷�ֹ���l>r
	}
	cout<<l<<endl;//������l
	return 0;//Happy ending~
} 