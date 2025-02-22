#include<iostream>
using namespace std;

int main()
{
  int size;
  cout<<"Array ko size: ";
  cin>>size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cout<<"Array ko "<<i+1<<"th element: ";
    cin>>arr[i];
  }

  int max1 = arr[0];
  int max2 = arr[1];

  for (int i = 2; i < size; i++)
  {
    if (arr[i]>max1)
    {
      max2 = max1;
      max1 = arr[i];
    }
    
  }
  cout<<"------------------------2nd larget Elements------------------------"<<endl;
  cout<<max2<<endl;
}