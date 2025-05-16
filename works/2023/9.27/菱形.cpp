//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
//int main(){
//	int n,m,i,j;
//	char a;
//	cin>>n;
//	for(i=1;i<=n;i++){
//		if(fabs(i-n)<10e-6){
//			cout<<a;
//		}else{
//			cout<<1;
//		}
//	}
//	return 0;
//}
#include <iostream>

using namespace std;

int main() {  
    int n;   
    cin >> n;  
    for (int i = 1; i <= n; i++) {  
        for (int j = 1; j <= n - i; j++) {  
            cout << " ";  
        }  
        for (int k = 1; k <= 2 * i - 1; k++) {  
            cout << "*";  
        }  
        cout << endl;  
    }
    for(int i=n;i>0;i--){
    	for(int j=n-i;j>0;j--){
    		cout<<"*";
		}
		for(int k=2*i-1;k>0;k--){
			cout<<" ";
		}
		cout << endl;
	}
	return 0;  
}
