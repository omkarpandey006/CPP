#include<iostream>
using namespace std;

bool  palindrom( int n){
        int remain,rev = 0;
        int original = n;
        while( n != 0){
            remain = n % 10;
            n = n/10;
            rev = rev*10+remain;
           if( original == rev) return 1;
           else  return 0;
            
        }
      
}
int main(){
    int n;
    cin>>n;
   if (palindrom(n)) cout<<"yes"<<endl;
   else cout <<"No"<<endl;

   return 0;
}