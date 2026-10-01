#include<iostream>
using namespace std;
int number(int a){
    if(a%2 == 0)cout<<"even :"<<a<<endl;
    else cout<<"odd :"<<a<<endl;
    // return a;
}

int main(){
    int n;
    cin>>n;
    number(n);
    // cout<<"answer:"<<ans<<endl;
}