/*
Name: Aaron Kimutai
Reg no;BSE-01-0082/2025
Description:BONUS SALARY
Date:22/05/2025
VERSION1
*/
#include <iostream>
using namespace std;

int main() {
    float salary, yearsOfService, bonus, totalSalary;

    cout << "Enter your salary"<<endl;
    cin >> salary;

    cout << "Enter years of service"<<endl;
    cin >> yearsOfService;

    if (yearsOfService > 10) {
        bonus = 0.1 * salary;
    } else if (yearsOfService >= 6 && yearsOfService <= 10) {
        bonus = 0.08 * salary;
    } else {
        bonus = 0.06 * salary;
    }

    totalSalary = salary + bonus;

    cout << "The net bonus: " << bonus << endl;
    cout << "The total salary: " << totalSalary << endl;

    return 0;
}