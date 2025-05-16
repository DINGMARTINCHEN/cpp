
#include <bits/stdc++.h>  
using namespace std;  

// �������Ƚϴ����ĺ���  
int findMax(int a[], int k) {  
    // ʹ�����ѣ����ȶ��У����洢���еĳ���  
    priority_queue<int> q;  
    
    // ���������еĳ��ȷ���������  
    for (int i = 0; i < k; i++)  
        q.push(a[i]);  
    
    int sum = 0; // ���ڴ洢�ܱȽϴ���  

    // ����������������Ԫ��ʱ�����кϲ�����  
    while (q.size() >= 2) {  
        int x = q.top(); // ȡ�����ĳ���  
        q.pop();         // �Ӷ����Ƴ�  
        int y = q.top(); // ȡ���ڶ���ĳ���  
        q.pop();         // �Ӷ����Ƴ�  
        
        // ����ϲ����������еıȽϴ������ۼ�  
        sum += x + y - 1;   
        
        // ���ϲ���������г��ȷŻض���  
        q.push(x + y);   
    }  
    
    return sum;  
}  

// ������С�Ƚϴ����ĺ���  
int findMin(int a[], int k) {  
    // ʹ����С�ѣ����ȶ��У����洢���еĳ���  
    priority_queue<int, vector<int>, greater<int>> q; // ʹ���Զ���Ƚ���������С��  
    
    // ���������еĳ��ȷ�����С����  
    for (int i = 0; i < k; i++)  
        q.push(a[i]);  
    
    int sum = 0; // ���ڴ洢�ܱȽϴ���  

    // ����������������Ԫ��ʱ�����кϲ�����  
    while (q.size() >= 2) {  
        int x = q.top(); // ȡ����С�ĳ���  
        q.pop();         // �Ӷ����Ƴ�  
        int y = q.top(); // ȡ���ڶ�С�ĳ���  
        q.pop();         // �Ӷ����Ƴ�  
        
        // ����ϲ����������еıȽϴ������ۼ�  
        sum += x + y - 1;   
        
        // ���ϲ���������г��ȷŻض���  
        q.push(x + y);  
    }  
    
    // �����ܱȽϴ���  
    return sum;  
}  

int main() {  
    int k; // �洢��������  
    int a[1009]; // ���������洢ÿ�����еĳ���  
   
    // ��ȡ��������  
    cin >> k;  
    
    // ��ȡÿ�����еĳ���  
    for (int i = 0; i < k; i++)  
        cin >> a[i];  

    // �������Ƚϴ���  
    int maxx = findMax(a, k);  
    // ������С�Ƚϴ���  
    int minn = findMin(a, k);  
    
    cout << maxx << " " << minn << endl;  
    
    return 0;
}
