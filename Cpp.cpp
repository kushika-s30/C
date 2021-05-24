#include <iostream>

using namespace std;

class UserEmployee{//abstract class
    virtual void AskForPromotion()=0; //pure virtual function
};
class Employee{
  private:
  int id;
  string name;
  int age;
  
  public:
  
  void setID(int ID){
    id=ID;  
  }
  int getID(){
    return id;  
  }
  void setName(string Name){
    name=Name;  
  }
  string getName(){
    return name;  
  }
  void setAge(int Age){
    age=Age;  
  }
  int getAge(){
    return age;  
  }
  Employee(int Id,string Name,int Age){
    id=Id;
    name=Name;
    age=Age;
  }
  
  void IntroduceYourself(){
      cout<<endl<<"Name: "<<name<<endl;
      cout<<"ID: "<<id<<endl;
      cout<<"Age: "<<age;
  }
  
  void AskForPromotion(){
      if(age>=20)
          cout<<"Promoted"<<endl;
      
      else
          cout<<"Not promoted";
  }
};

int main()
{
    
    Employee employee1=Employee(1,"Kiran",25);
    Employee employee2=Employee(2,"Sheila",13);
    employee1.AskForPromotion();
    employee2.AskForPromotion();
    return 0;
}
