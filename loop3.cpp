#include<iostream>
using namespace std;

int main()
{
  int size; 
  int term=1;
  
  cout<<"Kati ota number cha? ";
  cin>>size;
  int num[size];
  int sum = 0;
  cout<<"---------------Series---------------"<<endl;
  cout<<term;
  for (int i = 1; i < size; i++)
  {
    if (i < size) cout<<" + ";
    term = term*10 + 1;
    cout<<term;
    sum = sum + term;
  }
  cout<<endl;
  cout<<"---------------Sum---------------"<<endl;
  cout<<"The sum of the series is: "<<sum<<endl;

}