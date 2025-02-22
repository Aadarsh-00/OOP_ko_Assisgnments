#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
  string text;
  cout<<"Dui sabda bhandinus: ";
  getline(cin, text);

  stringstream temp(text);
  string word;
  string largestWord;
  int length = 0;

  while (temp >> word)
  {
    if (word.length() > length)
    {
      length = word.length();
      largestWord = word;
    }
    
  }
  cout<<"-------------------------Largest Word-------------------------"<<endl;
  cout<<largestWord;
}