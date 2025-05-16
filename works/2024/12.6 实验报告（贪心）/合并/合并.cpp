#include <bits/stdc++.h>  
#define int long long
using namespace std;  

int findMax(int a[], int k) {  
    priority_queue<int> q;
    for (int i = 0; i < k; i++)  
        q.push(a[i]);  
    
    int sum = 0;
    while (q.size() >= 2) {  
        int x = q.top();
        q.pop();
        int y = q.top();  
        q.pop();
        sum += x + y - 1;
        q.push(x + y);   
    }  
    
    return sum;  
}  

int findMin(int a[], int k) {  
    priority_queue<int, vector<int>, greater<int>> q;
    for (int i = 0; i < k; i++)  
        q.push(a[i]);  
    
    int sum = 0;
    while (q.size() >= 2) {  
        int x = q.top(); 
        q.pop();
        int y = q.top();
        q.pop();
        sum += x + y - 1;   
        q.push(x + y);  
    }   
    return sum;  
}  

int process(int t) {  
    int k;
    string test_in_name ;
    if(t<=9)
    {
        test_in_name= "_testdatastdin_0" + std::to_string(t) + ".in";
    }
    else
    {
        test_in_name= "_testdatastdin_" + std::to_string(t) + ".in";
    }

    ifstream infile(test_in_name, ios::in);
    
    int a[1009];
    infile >> k;  
    for (int i = 0; i < k; i++)  
    {
        infile>>a[i];
    }
    int maxn=findMax(a, k);  
    int minn=findMin(a, k);  
    
    string ans_name="ans_"+std::to_string(t)+".out";
    ofstream back_outfile(ans_name, ios::out);
    back_outfile<<maxn<<" "<<minn<<endl;
    
    cout<<"test "<<t<<" answer : "<<maxn<<" "<<minn<<endl;
    string test_out_name ;
    if(t<=9)
    {
        test_out_name= "_testdatastdout_0" + std::to_string(t) + ".out";
    }
    else
    {
        test_out_name= "_testdatastdout_" + std::to_string(t) + ".out";
    }
    ifstream filein(test_out_name, ios::in);
    int key1,key2;
    filein >> key1>>key2;
    cout<<"           key: "<<key1<<" "<<key2;
    if(key1==maxn&&key2==minn)
    {
        cout<<"  AC";
    }
    else
    {
        cout<<"  WA";
    }
    cout<<endl; 
    
    return 0;
}

signed main()
{
    for(int i=1;i<=11;i++)
    {
        process(i);
    }
}