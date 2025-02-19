#include<iostream>

using namespace std;

int main()
{
  int num;

  cout<<"Kati ota number samma ko cube chaiyo? ";
  cin>>num;
  cout<<"--------------------------------Cube--------------------------------"<<endl;
  for (int i = 1; i <= num; i++)
  {
    int cube;
    cube = i*i*i;
    cout<<"Cube of "<<i<<" : ";
    cout<<cube<<endl;
  }
  
}