#include<iostream>
using namespace std;
int main(){
    int num1,num2; //int num1;//int num2;


    cout<<"Enter the value of Num1 ";
    cin>>num1;
    cout<<"enter the value of Num2  ";
    cin>>num2;
    char operatoor;
    cout<<"ENter the Operator + for addition and  - for subtraction and * for MUltiplication and / for division ";
    cin>>operatoor;

    if(operatoor=='+'){
        cout<<num1+num2;
    }
    else if(operatoor=='-'){
        if(num1>num2){
        cout<<num1-num2;}
        else{
            cout<<num2-num1;
        }

    }
    else if(operatoor=='*'){
        cout<<num1*num2;
    }
    else if(operatoor=='/'){
         if(num1>num2){
        cout<<num1/num2;}
        else{
            cout<<num2/num1;
        }
    }
   
    }
   
 
