#include<iostream>
using namespace std;
int monthrun[99],fei[9999];
 int y1,y2,m1,m2,d1,d2,h1,h2,min1,min2,s1,s2,all1,all2,ds1,ds2;
void mon(int y1)
{
	if((y1%4==0&&y1%100!=0)||y1%400==0)
	{
		monthrun[1]=0;
    	monthrun[2]=31+monthrun[1];
    	monthrun[3]=29+monthrun[2];
    	monthrun[4]=31+monthrun[3];
   		monthrun[5]=30+monthrun[4];
    	monthrun[6]=31+monthrun[5];
    	monthrun[7]=30+monthrun[6];
    	monthrun[8]=31+monthrun[7];
    	monthrun[9]=31+monthrun[8];
    	monthrun[10]=30+monthrun[9];
    	monthrun[11]=31+monthrun[10];
    	monthrun[12]=30+monthrun[11];
    	ds1=d1+monthrun[m1];
	}
	else
    {
        fei[1]=0;
    fei[2]=31+fei[1];
    fei[3]=28+fei[2];
    fei[4]=31+fei[3];
    fei[5]=30+fei[4];
    fei[6]=31+fei[5];
    fei[7]=30+fei[6];
    fei[8]=31+fei[7];
    fei[9]=31+fei[8];
    fei[10]=30+fei[9];
    fei[11]=31+fei[10];
    fei[12]=30+fei[11];
    ds1=d1+fei[m1];
    }
}

int main()
{
    char z;
    cin>>y1>>z>>m1>>z>>d1>>h1>>z>>min1>>z>>s1;
    cin>>y2>>z>>m2>>z>>d2>>h2>>z>>min2>>z>>s2;
    mon(y1);
    mon(y2);
    all1=s1+min1*60+h1*60*60+ds1*24*60*60;
    all2=s2+min2*60+h2*60*60+ds2*24*60*60;
    int h,min,s,all;
    all=all2-all1;
    s=(all%3600)%60;
    min=(all%3600)/60;
    h=all/3600;
    cout<<h<<" "<<min<<" "<<s;
}
