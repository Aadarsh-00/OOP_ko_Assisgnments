#include <iostream>
#include<cmath>
using namespace std;

int main()
{
  int number;

  cout<<"Number lekhnuhosh: ";
  cin>>number;

  int lastDigit = number % 10;
  int firstDigit = number;
  while (firstDigit >=10 )
  {
    firstDigit /= 10;
  }

  int digit = log10(number);
  int divide = pow(10,digit);
  int middlePart = (number % divide) / 10;

  int newNumber =  (lastDigit * divide) + (middlePart*10) + (firstDigit);

  cout<<"-------------------Swap bhaisake paschat-------------------"<<endl;

  cout<<newNumber;
}  