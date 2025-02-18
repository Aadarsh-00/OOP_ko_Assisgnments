// . Write a C++ program to compute the sum of the two given integers and count the 
// number of digits in the sum value

#include<iostream>
using namespace std;

int main()
{
  int num1, num2;

  cout<<"Pahilo number lekhnuhosh: "<<endl;
  cin>>num1;
  cout<<"Dosro number lekhnuhosh: "<<endl;
  cin>>num2;

  int sum = num1 + num2;
  cout<<"-------------------Sum bhaisake paschat-------------------"<<endl;

  cout<<"Tapai dwara deko number ko sum: "<<sum<<endl;
  int count = 0;
  while (sum!=0)
  {
    sum=sum/10;
    count++;
  }
  cout<<"-------------------Count bhaisake paschat-------------------"<<endl;

  cout<<"Sum bhayeko number ma "<<count<<" ota digit cha"<<endl;
}