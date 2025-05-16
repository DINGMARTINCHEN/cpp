#include<iostream>
using namespace std;
int main()
{
	int x1,x2,x3,x4,y1,y2,y3,y4,w1,w2,h1,h2;
	cin>>x1>>y1>>w1>>h1>>x3>>y3>>w2>>h2;
	x2=x1+w1;
	y2=y1+h1;
	y4=y3+h2;
	x4=x3+w2;
	if(x1<x3&&y1<y3)//第一个点坐标在第二个左下方 
	{
		if(x2>x3&&y2>y3)
		{
			cout<<(x2-x3)*(y2-y3)<<" "<<w1*h1+w2*h2-(x2-x3)*(y2-y3);
		}
	} 
	if(x1<x3&&y1>y3)//第一个点坐标在第二个左上方 
	{
		if(x2>x3&&y1<y4)
		{
			cout<<(x2-x3)*(y4-y1)<<" "<<w1*h1+w2*h2-(x2-x3)*(y4-y1);
		}
	}
	if(x1<x3&&y1>y3)//第一个点坐标在第二个右上方 
	{
		if(x4>x1&&y1<y4)
		{
			cout<<(x4-x1)*(y4-y1)<<" "<<w1*h1+w2*h2-(x4-x1)*(y4-y1);
		}
	}
	if(x1>x3&&y1<y3)//第一个点坐标在第二个右下方 
	{
		if(x4>x1&&y3<y2)
		{
			cout<<(x4-x1)*(y2-y3)<<" "<<w1*h1+w2*h2-(x4-x1)*(y2-y3);
		}
	}
 } 
