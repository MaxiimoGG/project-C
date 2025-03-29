#include <iostream>
using namespace std;

int main() {
    int age;
    double annual_income;
    
 cout<<"Enter your age";
 cin>>age;
 cout<<"Enter your annual_income";
 cin>>annual_income;
 
   if(age>=21 && annual_income>=21000){
       cout<<"Congratulations you qualify for a loan:";
   }
   else{
       cout<<"Unfortunately, we are unable to offer you a loan at this time";
   }
return 0;
}
