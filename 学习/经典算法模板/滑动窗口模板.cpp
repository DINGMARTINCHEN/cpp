/*
�㷨ԭ��
��������Ҳ����ͬ��˫ָ�룻
ʹ���������ǣ���rightָ�벻���˵�ʱ��
ʹ�÷�ʽ����ʼ��˫ָ�룬������,�ж������Ƿ�����������ڣ����½����
*/
#include <bits/stdc++.h>

using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int size = nums.size(), sum = 0, len = INT_MAX;
    for (int left = 0, right = 0; right < size; right++) {
        sum += nums[right];   // ������
        while (sum >= target) // �ж�(�������������ɾ��)
        {
            len = min(len, right - left + 1); // ���½��
            sum -= nums[left++];              // ������
        }
    }
    if (len == INT_MAX)
        return 0;
    return len;
}
