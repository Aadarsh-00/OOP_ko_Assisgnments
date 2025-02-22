#include<iostream>
using namespace std;

int sum(int arr[], int n) {
  
  if (n == 0) {
    return 0;
}

return arr[n - 1] + sum(arr, n - 1);
}

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
  cout<<"------------------------Sum of Array------------------------"<<endl;
  cout<<"Array ko Sum: "<<sum(arr, size);
}