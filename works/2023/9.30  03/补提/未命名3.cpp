#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main(){
	char a[10000];
	gets(a);
	for(int i=0;a[i]!='\0';i++){
		if(a[i]>='A'&&a[i]<='Z')
		a[i]=(a[i]-'A'+4)%26+'A';
		else a[i]=(a[i]-'a'+4)%26+'a';
	}
	puts(a);
}
