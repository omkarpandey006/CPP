#include<iostream>
using namespace std;
int main(){


int n = 1330;
int note = 100;

switch(note){
 case 100: 
 cout<< "100 Note:" << n / 100 <<endl;
 n = n % 100;

 case 20 :
 cout << "20 Note:" << n / 20 <<endl;
 n = n % 20;

 case 10 :
 cout << " 10 Notes: " << n / 10 << endl;
 n = n % 10;
  break;

}
cout << "Remaining amount ="<< n <<endl;



return 0;






}




