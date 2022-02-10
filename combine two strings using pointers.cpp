#include<string>
#include<iostream>
using namespace std;
int main(){
    string s1,s2,*ptr;
    cout<<"enter the string 1 ";
    getline(cin,s1);
    cout<<"enter the second string ";
    getline(cin,s2);
    ptr=s1+s2;
    cout<<"after combining two strings "<<*ptr;
    return 0; 
}