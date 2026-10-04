#include<iostream>
using namespace std;

int reversenum(int num){
    int remain,rev = 0;
    do{
        remain = num % 10;
        num = num / 10;
        rev = rev*10+remain;
    }while (num != 0);
    
    
    return rev;
}



int main(){
    int num;
    cin>>num;
    int reverse = reversenum(num);

    cout<<reverse<< endl;
}