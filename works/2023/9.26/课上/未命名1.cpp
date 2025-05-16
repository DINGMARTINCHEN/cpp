#include <iostream>

int countOnesInBinary(int n) {
    int count = 0;
    while (n > 0) {
        // 判断最低位是否为1
        if (n & 1) {
            count++;
        }
        // 右移一位，检查下一位
        n >>= 1;
    }
    return count;
}

int main() {
    int n;
    std::cout << "请输入一个整数 n：";
    std::cin >> n;

    int ones = countOnesInBinary(n);

    std::cout << n << " 转换为二进制后包含 " << ones << " 个1。" << std::endl;

    return 0;
}
