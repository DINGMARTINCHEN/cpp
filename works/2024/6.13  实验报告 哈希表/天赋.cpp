#include<bits/stdc++.h>
using namespace std;

const int N = 100;

struct Student {
    int studentID;
    string name;
    string className;
    int chineseGrade;
    int mathGrade;
    int englishGrade;
};

Student* hashTable[N] = {nullptr};

int hashFunction(int key) {
    return key % N;
}

void insert(Student* student) {
    int index = hashFunction(student->studentID);

    while (hashTable[index] != nullptr) {
        index = (index + 1) % N; 
    }

    hashTable[index] = student;
}

Student* search(int studentID) {
    int index = hashFunction(studentID);

    while (hashTable[index] != nullptr && hashTable[index] -> studentID != studentID) {
        index = (index + 1) % N; 
    }

    return hashTable[index];
}

int main() {
    int n;
    cout << "请输入学生个数:";
    cin >> n;
    cout << "请输入学生信息:" << endl;
    for(int i = 0 ; i < n; i++){
        Student* stu = new Student;
        cin >> stu->studentID >> stu->name >> stu->className >> stu->chineseGrade >> stu->mathGrade >> stu->englishGrade;
        insert(stu);
    } 
    cout << "请输入查询学生学号:";
    int studentID;
    cin >> studentID;
    Student* result = search(studentID);
    if (result != nullptr) {
        cout << "学号：" << result->studentID << endl;
        cout << "姓名：" << result->name << endl;
        cout << "班级：" << result->className << endl;
        cout << "语文成绩：" << result->chineseGrade << endl;
        cout << "数学成绩：" << result->mathGrade << endl;
        cout << "外语成绩：" << result->englishGrade << endl;
    } 
    else {
        cout << "学生信息未找到！" << endl;
    }

    for (int i = 0; i < N; i++){
        if (hashTable[i] != nullptr){
            delete hashTable[i];
        }
    }

    return 0;
}




/*
测试数据
15 zhangsan class1 99 80 60
34 lisi class4 69 96 100
21 wangwu class1 70 80 85
11 laoliu class3 89 69 77
17 zhaoqi class2 88 66 70
30 ann class5 80 61 78
45 bil class4 60 59 73
25 cli class2 77 79 83
22 dila class1 68 84 81
19 xiaohe class3 66 79 84
*/