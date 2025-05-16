#include <bits/stdc++.h>
using namespace std;
struct student
{
    int grade;
    int score;
    int rank;
};
bool compare(student a, student b)
{
    if (a.score > b.score)
    {
        return true;
    }
    else if (a.score == b.score && a.grade < b.grade)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    student stu[9999];
    int n;
    int a[999] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> stu[i].score >> stu[i].grade;
        stu[i].rank = 0;
    }
    sort(stu, stu + n, compare);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (stu[i].grade > stu[j].grade && stu[i].score < stu[j].score)
            {
                stu[i].rank++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << stu[i].rank << endl;
    }
}