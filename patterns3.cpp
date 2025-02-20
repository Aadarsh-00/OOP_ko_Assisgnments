#include<iostream>
using namespace std;
int main()
{
  int rows;
  cout<<"Write the number of rows: ";
  cin>>rows;
  int k = 1;
  for (int i = 1; i <= rows; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      
      cout<<k<<" ";
      k=k+1;
    }
    cout<<endl;
    
  }
  
}