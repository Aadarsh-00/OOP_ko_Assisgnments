#include<iostream>
using namespace std;

class Student {
    private:
        string name;
        int roll;
        int marks;
    public:
        Student(string name, int roll, int marks) : name(name), roll(roll), marks(marks) {
            if (marks >= 80) {
                cout << "Grade: A" << endl;
            } else if (marks >= 60) {
                cout << "Grade: B" << endl;
            } else if (marks >= 40) {
                cout << "Grade: C" << endl;
            } else {
                cout << "Grade: F" << endl;
            }
        }

        void display() {
            cout << "Name: " << name << endl;
            cout << "Roll: " << roll << endl;
            cout << "Marks: " << marks << endl;
        }
};

int main()
{
  string name;
  int roll;
  int marks;

  int n;


  cout<<"Student ko information halnuhos"<<endl;
  cout<<"Student ko name: ";
  cin>>name;
  cout<<"Student ko roll: ";
  cin>>roll;
  cout<<"Student ko marks: ";
  cin>>marks;
  
  
  cout<<"----------------Student Information------------------"<<endl;

  Student student(name, roll, marks);
  student.display();
  cout<<"----------------------------------"<<endl;
}