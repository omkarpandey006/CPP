#include<iostream>
using namespace std;
  
int sumDigits(int num){
    int remain, sum = 0;
    do{
    remain = num % 10;
    num = num / 10;
    sum = sum + remain;
    }while(num != 0);

    return sum;
}



int main(){
    int num;
    cin>>num;
   int sum = sumDigits(num);
   cout<< sum <<endl;
}