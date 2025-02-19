#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int num;
  cout<<"--------------- The Reverse Program -----------------"<<endl;

  cout<<"Number lekhnuhosh: ";
  cin>>num;

  while (num !=0)
  {
    int lastDigit = num%10;
    cout<<lastDigit;
    num = num/10;
  }
  
}