#include<iostream>
#include<cmath>
using namespace std;


bool isPrime(int num)
{
  for (int i = 2; i <= sqrt(num); i++)
  {
    if (num % i == 0) return true;
    
  }
  return false;
}
int main()
{
  int num;

  cout<<"Non-prime numbers ko upperbound kati ho? ";
  cin>>num;


  cout<<"Non-Prime numbers: ";
 
  for (int i = 1; i < num; i++)
  {
    if (isPrime(i))
    {
      cout<<i<<" "; 
    }

    
  }
  
}