#include<iostream>
using namespace std;
int main(){
    string s="programming";
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        count++;
    }
    cout<<"the length is "<<count<<endl;
    return 0;
}