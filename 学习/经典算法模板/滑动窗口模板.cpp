/*
算法原理：
滑动窗口也叫做同向双指针；
使用条件就是：当right指针不回退的时候；
使用方式：初始化双指针，进窗口,判断条件是否成立，出窗口，更新结果；
*/
#include <bits/stdc++.h>

using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int size = nums.size(), sum = 0, len = INT_MAX;
    for (int left = 0, right = 0; right < size; right++) {
        sum += nums[right];   // 进窗口
        while (sum >= target) // 判断(条件不满足进行删除)
        {
            len = min(len, right - left + 1); // 更新结果
            sum -= nums[left++];              // 出窗口
        }
    }
    if (len == INT_MAX)
        return 0;
    return len;
}
