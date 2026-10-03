// #include<iostream>
// using namespace std;
// void Maximum(int num1 ,int num2){
//     if(num1>num2) cout<<"maximum:"<<num1<<endl;
//     else cout<<"minimum"<<num2<<endl;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     Maximum(a,b);
// }


#include <iostream>
using namespace std;

int Maximum(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;

    // if(num1>num2) return num1;
    // else return num2;
}

int main() {
    int a, b;
    cin >> a >> b;
    int ans = Maximum(a, b);
    cout << "maximum: " << ans << endl;
    return 0;
}