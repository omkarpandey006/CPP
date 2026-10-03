#include<iostream>
using namespace std;
bool isprime(int n){

    for(int i = 2; i < n; i++ ){
        if( n % 2 == 0) return 0;
        else return 1;
    }
}



int main(){
    int n;
    cin>>n;
    isprime(n);
    if(isprime(n)) cout<<"Prime:"<<endl;
    else cout << "Not Prime:"<<endl;
}