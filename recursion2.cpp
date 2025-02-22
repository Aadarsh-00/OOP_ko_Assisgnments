#include<iostream>
using namespace std;

double factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int number;
    cout << "Kun number ko factorial chaiyo? ";
    cin >> number;
    cout << "-------------------Factorial bhaisake paschat-------------------" << endl;
    cout << "Tapaile deko number ko factorial " << factorial(number) << " cha!" << endl;
    
    return 0;
}
