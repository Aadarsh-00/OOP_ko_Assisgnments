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
  int max3 = arr[2];

  for (int i = 3; i < size; i++)
  {
    if (arr[i]>max1)
    {
      max3 = max2;
      max2 = max1;
      max1 = arr[i];
    }
    else if (arr[i]> max2)
    {
      max3 = max2;
      max2 = arr[i];
    }

    else if (arr[i]>max3)
    {
      max3 = arr[i];
    }
    
   
  }
  
  cout<<"------------------------3 largets Elements------------------------"<<endl;
  cout<<max1<<endl;
  cout<<max2<<endl;
  cout<<max3<<endl;
  
  
}