#include<iostream>
using namespace std;

int main()
{
  int row;
  cout<<"Kati ota rows chaiyo? ";
  cin>>row;
  int z = 1;
  for (int i = 1; i <= row; i++)
  {
    for (int j = i; j  < row; j++)
    {
      cout<<" ";
    }
    
    for (int k = 1; k <= i ; k++)
    {
      cout<<z<<" ";
    }
    cout<<endl;
    z++;
  }
  
}