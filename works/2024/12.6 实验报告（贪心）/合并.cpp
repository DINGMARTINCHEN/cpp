
#include <bits/stdc++.h>  
using namespace std;  

// 计算最大比较次数的函数  
int findMax(int a[], int k) {  
    // 使用最大堆（优先队列）来存储序列的长度  
    priority_queue<int> q;  
    
    // 将所有序列的长度放入最大堆中  
    for (int i = 0; i < k; i++)  
        q.push(a[i]);  
    
    int sum = 0; // 用于存储总比较次数  

    // 当堆中至少有两个元素时，进行合并操作  
    while (q.size() >= 2) {  
        int x = q.top(); // 取出最大的长度  
        q.pop();         // 从堆中移除  
        int y = q.top(); // 取出第二大的长度  
        q.pop();         // 从堆中移除  
        
        // 计算合并这两个序列的比较次数并累加  
        sum += x + y - 1;   
        
        // 将合并后的新序列长度放回堆中  
        q.push(x + y);   
    }  
    
    return sum;  
}  

// 计算最小比较次数的函数  
int findMin(int a[], int k) {  
    // 使用最小堆（优先队列）来存储序列的长度  
    priority_queue<int, vector<int>, greater<int>> q; // 使用自定义比较器构建最小堆  
    
    // 将所有序列的长度放入最小堆中  
    for (int i = 0; i < k; i++)  
        q.push(a[i]);  
    
    int sum = 0; // 用于存储总比较次数  

    // 当堆中至少有两个元素时，进行合并操作  
    while (q.size() >= 2) {  
        int x = q.top(); // 取出最小的长度  
        q.pop();         // 从堆中移除  
        int y = q.top(); // 取出第二小的长度  
        q.pop();         // 从堆中移除  
        
        // 计算合并这两个序列的比较次数并累加  
        sum += x + y - 1;   
        
        // 将合并后的新序列长度放回堆中  
        q.push(x + y);  
    }  
    
    // 返回总比较次数  
    return sum;  
}  

int main() {  
    int k; // 存储序列数量  
    int a[1009]; // 数组用来存储每个序列的长度  
   
    // 读取序列数量  
    cin >> k;  
    
    // 读取每个序列的长度  
    for (int i = 0; i < k; i++)  
        cin >> a[i];  

    // 计算最大比较次数  
    int maxx = findMax(a, k);  
    // 计算最小比较次数  
    int minn = findMin(a, k);  
    
    cout << maxx << " " << minn << endl;  
    
    return 0;
}
