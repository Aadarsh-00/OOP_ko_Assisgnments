#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int size;
  cout<<"Array ko size: ";
  cin>>size;

  vector<int> arr(size);
  for (int i = 0; i < size; i++)
  {
    cout<<"Array ko "<<i+1<<"th element: ";
    cin>>arr[i];
  }

  vector<int> result;

  for (int i = 1; i < size - 1; i++) {
    if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {
        result.push_back(arr[i]);
    }
}

cout<<"------------------------original Number Series------------------------"<<endl;
for (int i = 0; i < size; i++)
{
  cout<<arr[i]<<" ";

}
cout<<endl;
cout<<"------------------------Vector elements smaller than adjacent elements-----------------------"<<endl;
for(int i = 0; i < result.size(); i++)
{
  cout<<result[i]<<" ";
}
cout<<endl;
}
