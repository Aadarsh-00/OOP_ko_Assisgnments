// . Write a C++ program that prints the three highest numbers from a list of numbers in 
// descending order

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int size;

  cout<<"Kati ota number cha? ";
  cin>>size;
  int num[size];

  for (int i = 0; i < size; i++)
  {
    cout<<"Number "<<i+1<<" ke ho? ";
    cin>>num[i];
  }
  
  sort(num, num+size, greater<int>());

  cout<<"-------------------Sort bhaisake paschat-------------------"<<endl;
  cout<<"-------------------Tin ota thulo number-------------------"<<endl;


  for (int i = 0; i < 3; i++)
  {
    cout<<num[i]<<endl;
  }
  
  
  
}