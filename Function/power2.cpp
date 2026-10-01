#include<iostream>
using namespace std;

// int power(int num1,int num2){
//     int ans = 1;
//     for(int i = 1; i<= num2; i++){
//         ans = ans*num1;
//     }
//     return ans;
// }





// int main(){
//     int a,b,c,d;
//     cin>>a>>b;
//     cin>>c>>d;

//     int ans = power(a,b);
//     int answ = power(c,d);
//     cout<<"answer1:"<<ans<<" "<<"answer2:"<<answ<<endl;
    
// }



int number(int num){
    if(num % 2 == 0) return 0;
    else return 1;

}


int main(){
    int n;
    cin>>n;
    int ans = number(n);
    if(ans == 0) cout<<"even"<<endl;
    else cout<<"odd"<<endl;


}