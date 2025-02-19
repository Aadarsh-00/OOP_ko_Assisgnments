#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num)
{
  if(num <=1) return false;
  for (int i = 2; i < sqrt(num); i++)
  {
    if (num % i == 0) return false;
  }
  return true;
}

int main()
{
  int num;

  cout<<"Number lekha ta: ";
  cin>>num;

  for (int i = num-1; i > 1; i--)
  {
    if (isPrime(i))
    {
      cout<<i<<" Yo last prime number ho "<<num<<" Bhanda pahila"<<endl;
      return 0;
    }

    
  }
  
  cout<<"Yesko agadi kunai prime number chaina"<<endl;
  
}