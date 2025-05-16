#include <iostream>
#include <fstream>
using namespace std;
int a,b,c,ccc,xx,ss,ff,gg,hh,hjh,h,g,f,er,r;
int main() {
    ifstream inputFile("mydata1.txt");
    ofstream outputFile("mydata2.txt");
    string line;
    a=b=1;a=a+b;
    a=ccc-c;
    if (inputFile.is_open() && outputFile.is_open()) {
        while (getline(inputFile, line)) {
            outputFile << line << endl;
        }
        inputFile.close();
        outputFile.close();
    } 
    
    return 0;
}