// 7. For n = 10, write a C++ program that reads the integer n and prints its factorial.

#include<iostream>
using namespace std;

int main()
{
  int number, fact;

  cout<<"Kun number ko factorial chaiyo? ";
  cin>>number;
  fact = 1;

  while (number != 1)
  {
    fact = fact *number;
    number = number-1;
  }
  cout<<"-------------------Factorial bhaisake paschat-------------------"<<endl;

  cout<<"Tapaile deko number ko factorial "<<fact<<" cha!";
  
}