#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

struct students
{
    string name;
    int year;
    int month;
    int day;
    int num;
};

bool cmp(students a,students b)
{
    if(a.year<b.year)
    {
        return true;
    }
    if(a.year==b.year)
    {
        if(a.month<b.month)
        {
            return true;
        }
        if(a.month==b.month)
        {
            if(a.day<b.day)
            {
                return true;
            }
            if(a.day==b.day&&a.num>b.num)
            {
                return true;
            }
            else
            {
                return false;
            }
            if(a.day>b.day)
            {
                return false;
            }
        }
        if(a.month>b.month)
        {
            return false;
        }
    }
    if(a.year>b.year)
    {
        return false;
    }
}

int main() 
{
    int n;
    cin>>n;
    students stu[n];
    for(int i=0;i<n;i++)
    {
        cin>>stu[i].name>>stu[i].year>>stu[i].month>>stu[i].day;
        stu[i].num=i;
    }
    sort(stu,stu+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<stu[i].name<<endl;
        // cout<<" "<<stu[i].year<<" "<<stu[i].month<<" "<<stu[i].day<<endl;
    }
    return 0;
}
// Devon 1988 1 1
// Lindsay 1988 1 2
// Bancroft 1988 1 10
// Columbia 1988 2 1
// Ainey 1988 2 2
// Chelsea 1988 7 27
// Buck 1988 9 10
// Barnett 1988 11 9
// Barclay 1988 11 10
// Averill 1989 2 3
// Brock 1989 7 27
// Tantian 1989 9 2
// Courtney 1989 10 17
// Liberty 1989 11 9
// Buckley 1989 11 10
// Guning 1989 12 30
// Maliang 1990 1 2
// Kyla 1990 1 19
// Bronson 1990 2 3
// Broderick 1990 2 14
// Chenya 1990 4 5
// Luowen 1990 4 6
// Qiujingya 1990 5 8
// Lark 1990 6 5
// Kirsten 1990 7 27
// Pangcheng 1990 7 28
// Dawn 1990 11 10
// Heling 1990 12 11
// Zhaojiang 1991 1 8
// Twood 1991 1 19
// Lingshuai 1991 2 9
// Corliss 1991 3 1
// Lari 1991 3 2
// Clovis 1991 3 13
// Liyue 1991 3 14
// Yangyan 1991 3 20
// Atherol 1991 7 27
// Yangyu  1991 9 13
// Leslie  1991 11 10--------
// Xiebing 1991 11 10---------
// Luopeng 1992 1 9
// Mating  1992 1 18
// Bromley 1992 1 19
// Yuanhui 1992 3 3
// Songtin 1992 6 12
// Claibor 1992 7 27
// Ballard 1992 8 20
// Daralis 1992 9 10
// Wangxin 1992 10 20
// Burgess 1992 11 9
// Barden  1992 11 10
// Wangxin 1992 12 3
// Qianmu  1993 1 2
// Yangchu 1993 1 7
// Pengwei 1993 2 3
// Kangyi  1993 2 9
// Liufang 1993 3 30
// Kismet  1993 7 24
// Leigh   1993 9 10
// Shejing 1993 9 30
// Ansley  1993 11 9
// Bud     1993 11 10
// Hanmei  1994 1 1
// Brown   1994 1 17
// Guofan  1994 5 5
// Sunxian 1994 5 7
// Atwater 1994 7 24
// Liyue   1994 10 10
// Brishen 1994 11 9
// Demelza 1994 11 10