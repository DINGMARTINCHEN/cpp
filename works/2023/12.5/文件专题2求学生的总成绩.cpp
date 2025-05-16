#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

// ����ѧ���ܳɼ�
int calculateTotalScore(int score1, int score2, int score3) {
    return score1 + score2 + score3;
}

int main() {
    ifstream inFile("studata.txt"); // �������ļ�
    ofstream outFile("data.txt"); // ������ļ�

    string line;
    while (getline(inFile, line)) {
        stringstream ss(line);
        int id, score1, score2, score3;
        string name;

        // ��һ���ж�ȡѧ����Ϣ
        ss >> id >> name >> score1 >> score2 >> score3;

        // ����ѧ���ܳɼ�
        int totalScore = calculateTotalScore(score1, score2, score3);

        // ��ѧ����Ϣ���ܳɼ�д������ļ�
        outFile << id << " " << name << " " << score1 << " " << score2 << " " << score3 << " " << totalScore << endl;
    }

    // �ر��ļ�
    inFile.close();
    outFile.close();

    return 0;
}