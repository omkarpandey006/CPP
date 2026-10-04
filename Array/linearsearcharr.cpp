#include<iostream>
using namespace std;

bool search(int arr[],int n , int key){
    for(int i = 0; i < n; i++){

        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
    
}
int main(){
    int arr[10] = { 10 ,20 ,30 ,70, 80 , 90 ,100 ,101 , 105 , 5 };
    int key;
    cin>>key;
    int found = search(arr, 10 , key);
    if(found == 1 ) cout<<"key is present in array"<<endl;
    else cout<<"key do not present in array"<<endl;
} 