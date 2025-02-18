// rite a C++ program to compute the number of days in a month for a given year and 
// month.
// Input Year: 2019
// Input Month: 04
// Number of days of the year 2019 and month 4 is: 30

#include<iostream>
using namespace std;

int main()
{
  int year, month;

  cout<<"Kun year? ";
  cin>>year;

  cout<<"Kun month? ";
  cin>>month;

  bool isLeap = (year % 400 ==0);
  int days;
  switch (month)
  {
  case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    days = 31;

    case 4: case 6: case 9: case 11:
    days = 30;
    break; 
  
  case 2:
    if (isLeap)
    {
        days = 29;
    }
    else
    {
        days = 28;
    }
    break;
   
  
  default:
    break;
  }

  cout<<"-------------------Days-------------------"<<endl;


  cout<<"Tapile deko year ko month ma "<<days<<" days raicha";

}