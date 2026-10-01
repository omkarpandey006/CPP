#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"Enter First Number:" <<endl;
    cin>>a;
    cout<<"Enter Second Number:" <<endl;
    cin>>b;
    cout<<"Enter your operation:"<<endl;
    char op;
    cin>>op;
    switch(op){
     case '+':cout<< a+b <<endl;
     break;
     case '-':cout<< a-b <<endl;
     break;
     case '*':cout<< a*b <<endl;
     break;
     case '/':cout<< a/b <<endl;
     break;
     case '%':cout<< a%b <<endl;
     break;

     default:"this operation is not vailid ";

     
    }
}