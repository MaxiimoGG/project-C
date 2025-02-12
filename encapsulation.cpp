#include<iostream>
#include<string>
using namespace std;

//Class definition for Bankaccount
class Bankaccount{
   private:
    string accountholder; //Variable to store accountholder's name
    double balance; //Variable to store account balance
    
    public:
         //Setter function to assign account holder's name
     void setAccountholder(string a) {
      accountholder = a;
      }
      
     //Getter function  to retrieve accountholder's name
     string getAccountholder(){
       return accountholder;
       }
       
       //Setter function to assign balance amount
       void setBalance(double b){
            balance =b;
       }
         
        //Getter function to retrieve balance amount    
       double getBalance(){
        return balance;
        }
  };
        
        int main(){
            //Creating an object of Bankaccount class
            Bankaccount ba;
            //Setting account holder's name
            ba.setAccountholder("Max");
            //Displaying accountholder's name
            cout<<"Accountholder is:"<<ba.getAccountholder()<<endl;
            //Setting balance amount
            ba.setBalance("5000.0");
            //Displaying balance
            cout<<"Balance is:"<<ba.getBalance()<<endl;
    return 0;
  }
