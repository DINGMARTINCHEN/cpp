#include<bits/stdc++.h>
using namespace std;
struct student
{
    string pre;
    string name;
};
int main()

{
    int i=0;
    student stu[9999];
    while(cin>>stu[i].name)
    {
        cin>>stu[i].pre>>stu[i].name;
        i++;
    }
    
}