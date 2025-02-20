#include<iostream>
using namespace std;

int main()
{
  int row;
  cout<<"Kati ota row chaiyo? ";
  cin>>row;

  for (int i = 1; i <= row; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      if ((j + i) % 2 == 0)
      {
        cout<<"1";
      }
      else{
        cout<<"0";
      }
    }
    
    cout<<endl;
  }
  
}