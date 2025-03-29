#include <iostream>
using namespace std;

int main (){
    double salary, bonus, net_bonus;
    int YearofService;
cout<<"Enter your salary";
cin>>salary;
cout<<"Enter your YearofService";
cin>>YearofService;

     if(YearofService>10){
         bonus= salary*0.12;
     }
     else if(YearofService >=6 && YearofService<=10){
         bonus=salary*0.10;
     }
     else{
         bonus=salary*0.8;
     }
  net_bonus=bonus;
cout<<"Your net_bonus amount is:"<<bonus<<endl;
return 0;
}
