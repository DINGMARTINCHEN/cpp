#include "iostream"
#include "ctime"
using namespace std;
struct t
{
    int year;
    int month;
    int day;
};
int main(){
    t now;
    time_t now_time;
    time(&now_time);
    tm *gmt=localtime(&now_time);
    now.year=gmt->tm_year+1900;
    now.month=gmt->tm_mon+1;
    now.day=gmt->tm_mday;
    cout<<now.year<<"-"<<now.month<<"-"<<now.day;
}