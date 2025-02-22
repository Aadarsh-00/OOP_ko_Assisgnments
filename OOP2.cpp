#include<iostream>
using namespace std;

class Date {
    private:
        int day;
        int month;
        int year;
    public:
       void setDate(int day, int month, int year) {
           this->day = day;
           this->month = month;
           this->year = year;
       }
       bool Validate() {
           if (day < 1 || day > 31) {
               cout << "Invalid day" << endl;
               return false;
           }
           if (month < 1 || month > 12) {
               cout << "Invalid month" << endl;
               return false;
           }
           if (year < 1900 || year > 2021) {
               cout << "Invalid year" << endl;
               return false;
           }
           return true;
       }
       void display() {
           cout << "Date: " << day << "/" << month << "/" << year << endl;
       }
};

int main() {
    int day, month, year;
    Date date;

    cout << "Date ko information halnuhos" << endl;
    cout << "Day: ";
    cin >> day;
    cout << "Month: ";
    cin >> month;
    cout << "Year: ";
    cin >> year;

    date.setDate(day, month, year);

    if (date.Validate()) {
        date.display();
    }

    cout << "----------------------------------" << endl;

    return 0;
}
