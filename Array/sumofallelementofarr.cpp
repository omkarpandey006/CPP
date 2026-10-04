#include<iostream>
using namespace std;

// int main(){
//     int size;
//     size = 5;
//     int arr[10] = { 1 , 2 , 3 , 4 , 5 };
//    int  sum = 0;
//     for(int i = 0; i < size ; i++){
//         sum = sum + arr[i];
//     }
//   cout<< "sum of number : "<<sum <<endl;
//    return 0;

// }

// dynamic 

int main(){
    int size;
    cin>>size;
    int arr[20];
    int sum = 0;
    for(int i = 0 ;i < size;i++){
        cin>>arr[i];
        sum = sum + arr[i];

    }
    cout<<"SUM OF NUMBER :" << sum << endl;

}