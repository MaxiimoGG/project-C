#include<iostream>
#include<string>
using namespace std;

     //Class definition for Employee
class Employee{
   private:
        string name;//variable storing employee name
        int salary;//Variable storing employee salary
        

  public:
         //Setter function to assign a name to the employee
     void setName(string n){
               name = n;
               }
         //Getter function to retrieve the employee's name 
     string getName(){
                 return name;
                 }
                 
          //Setter function to assign salary       
       void setSalary(int s){
                 salary = s;
                 }
                 
            //Getter function to retrieve the salary     
       int getSalary(){
                  return salary;
                  }
};
      
      int main(){
          Employee emp;//Creating employee name
          emp.setName("James");//Setting employee name
          cout<<"Name is:"<<emp.getName()<<endl;//Displaying employee's name
          emp.salary("5000");//Setting  salary
          cout<<"Salary is:"<<emp.getSalary()<<endl;//Displaying salary
          
      return 0;
      }                   
      
