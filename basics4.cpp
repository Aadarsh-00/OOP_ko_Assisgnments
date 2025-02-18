// Write a C++ program to add up all the digits between two given integers. Add all the 
// digits between 11 and 16 and it should be inclusive of the two numbers.
// Example: Add up all the digits between 39 and 41 is: 21
// Sample Data
// (5, 9) -> 35
// (12, 18) -> 42
// (39, 41) -> 21

#include<iostream>
using namespace std;

int main()
{
  int num1,num2;

  cout<<"Pahilo number lekhnuhosh: ";
  cin>>num1;
  cout<<"Dosro number lekhnuhosh: ";
  cin>>num2;
  int sum=0;
  for (int i = num1; i <= num2; i++)
  {
      int currentNumber = i;
      while (currentNumber != 0)
      {
          sum += currentNumber % 10;  
          currentNumber /= 10;        
      }
  }

  cout<<"-------------------Sum bhaisake paschat-------------------"<<endl;
  cout<<num1<<" dekhi "<<num2<<" samma ko sum: "<<sum;
  
}