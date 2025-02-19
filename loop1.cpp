#include<iostream>
using namespace std;
int main()
{
 int num;
 
 cout<<"Kun Number check garnu cha lekha ta: ";
 cin>>num;
 int sum = 0;

 for (int i = 1; i < num; i++)
 {
  if (num%i == 0)
  {
    sum = sum + i;

  } 
 }
 cout<<"------------------Final_Answer------------------"<<endl;
 if (sum == num)
 {
  cout<<"Perfect Number"<<endl;
 }
 
 else
 {
  cout<<"Not a perfect number"<<endl;
 }

}