#include<iostream>
using namespace std;

int main()
{
  int num, a = 0, b = 1, temp;

  cout<<"Kati samma ko Fibonacci series ko number chaiyo? ";
  cin>>num;
  int series;
  cout<<"--------------- Fibonacci Series -----------------"<<endl;
  for (int i = 0; i < num; i++)
  {
    cout<< a << " ";
    temp = a + b;
    a = b;
    b = temp;
  }
  
}