#include<iostream>
using namespace std;
//Power(a,b)
int main(){
    int a,b;
    cout<<"Enter number:"<<endl;
    cin>>a;
    cout<<"Enter Power of number"<<endl;
    cin>>b;
    int ans = 1;
    for(int i=1 ; i<=b ; i++){
     ans = ans*a;
    }
    cout<<"Answer:"<<ans<<endl;
    
}