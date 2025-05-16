#include "iostream"
#include "cstring"
using namespace std;
int main(){
	FILE *fp;
	char ch;
	fp=fopen("mydata.txt","w+");
	if(fp==NULL){
		cout<<"file not exist!";
		exit(0);
	}
	while((ch=cin.get())!='\n'){
		fputc(ch,fp);
	}
	fclose(fp);
} 
