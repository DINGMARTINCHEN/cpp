#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

// 计算学生总成绩
int calculateTotalScore(int score1, int score2, int score3) {
    return score1 + score2 + score3;
}

int main() {
    ifstream inFile("studata.txt"); // 打开输入文件
    ofstream outFile("data.txt"); // 打开输出文件

    string line;
    while (getline(inFile, line)) {
        stringstream ss(line);
        int id, score1, score2, score3;
        string name;

        // 从一行中读取学生信息
        ss >> id >> name >> score1 >> score2 >> score3;

        // 计算学生总成绩
        int totalScore = calculateTotalScore(score1, score2, score3);

        // 将学生信息和总成绩写入输出文件
        outFile << id << " " << name << " " << score1 << " " << score2 << " " << score3 << " " << totalScore << endl;
    }

    // 关闭文件
    inFile.close();
    outFile.close();

    return 0;
}