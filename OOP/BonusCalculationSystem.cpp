//JOY KARANI
//BCS-05-0072/2025



#include <iostream>
using namespace std;

int main() {
    string name;
    double basicSalary, bonus, totalSalary;

    for (int i = 1; i <= 5; i++) {
        cout << "\nEmployee " << i << endl;

        cout << "Enter employee name: ";
        cin >> name;

        cout << "Enter basic salary: ";
        cin >> basicSalary;

        bonus = 0.05 * basicSalary;
        totalSalary = basicSalary + bonus;

        cout << "\n--- Salary Report ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }

    return 0;
}