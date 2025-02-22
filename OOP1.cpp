#include<iostream>
using namespace std;

// Declare the Employee class outside the main function
class Employee {
    private:
        string name;
        int EmployeeID;
        int salary;
        char performance;
    public:
        Employee(string name, int EmployeeID, char performance) : name(name), EmployeeID(EmployeeID), performance(performance) {
            if (performance == 'A') {
                salary = 50000;
            } else if (performance == 'B') {
                salary = 40000;
            } else if (performance == 'C') {
                salary = 30000;
            } else {
                salary = 0;
            }
        }

        void display() {
            cout << "Name: " << name << endl;
            cout << "Employee ID: " << EmployeeID << endl;
            cout << "Salary: " << salary << endl;
        }
};

int main() {
  string name;
  int EmployeeID;
  int salary;
  char performance;

  int n;

  while(n != 1){
  cout<<"Press 1 to exit and 0 to enter Employee Information"<<endl;
  cin>>n;
  if(n == 1){
    break;
  }
  else{
  cout<<"Employee ko information halnuhos"<<endl;
  cout<<"Employee ko name: ";
  cin>>name;
  cout<<"Employee ko ID: ";
  cin>>EmployeeID;
  cout<<"Employee ko performance(A, B, C): ";
  cin>>performance;
  }
  }

  Employee employee(name, EmployeeID, performance);
  employee.display();
  cout<<"----------------------------------"<<endl;
  
}
   
