#include <iostream>

int countOnesInBinary(int n) {
    int count = 0;
    while (n > 0) {
        // �ж����λ�Ƿ�Ϊ1
        if (n & 1) {
            count++;
        }
        // ����һλ�������һλ
        n >>= 1;
    }
    return count;
}

int main() {
    int n;
    std::cout << "������һ������ n��";
    std::cin >> n;

    int ones = countOnesInBinary(n);

    std::cout << n << " ת��Ϊ�����ƺ���� " << ones << " ��1��" << std::endl;

    return 0;
}
