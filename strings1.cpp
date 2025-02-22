#include<iostream>
#include<string>

using namespace std;

int main()
{
  string word;

  cout<<"Kunai word lekhnuhosh: ";
  cin>>word;

  int size = word.length();

  for (int i = 0; i < size/2; i++)
  {
    std::swap(word[i], word[size-i-1]);
  }
  cout<<"-------------------------Swappped-------------------------"<<endl;
  cout<<word;
}