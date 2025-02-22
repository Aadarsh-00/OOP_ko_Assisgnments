#include<iostream>
#include<string>

using namespace std;

int main()
{
  string text;
  cout<<"Mahoday, kehi lekhdinus: ";
  getline(cin, text);

  bool capital = true;

  for(char &ch : text)
  {
    if (capital && isalpha(ch))
    {
      ch = toupper(ch);
      capital =false;
    }
    else if (ch == ' ')
    {
      capital = true;
    }

    
  }
  cout<<"-------------------------Title Case------------------------"<<endl;
  cout<<text;

}