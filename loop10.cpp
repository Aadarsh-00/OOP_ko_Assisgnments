#include<iostream>
using namespace std;

int main()
{
  int a, d, n, series;
  
  cout<<"Series ko pahilo term: ";
  cin>>a;
  cout<<"Series ko common difference: ";
  cin>>d;
  cout<<"Series ma kati ota number cha? ";
  cin>>n;
  int sum = 0;
  cout<<"--------------- The A.P. Series -----------------"<<endl;
  for (int i = 1; i <= n; i++)
  {
    series = a + (i-1)*d;
    cout<<series;
    if (i < n) cout << " + ";
    sum = sum + series;
  }
  cout<<endl;
  cout<<"--------------- The Sum of Series -----------------"<<endl;

  cout<<"Sum: "<<sum;
}