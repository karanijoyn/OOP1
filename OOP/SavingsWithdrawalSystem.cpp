//JOY KARANI
//BCS-05-0072/2025

#include <iostream>
using namespace std;

int main() {
    double balance, withdrawal;

    cout << "Enter account balance: ";
    cin >> balance;

    while (balance > 0) {
        cout << "\nEnter withdrawal amount: ";
        cin >> withdrawal;

        if (withdrawal > balance) {
            cout << "Withdrawal amount exceeds balance." << endl;
            break;
        }

        balance = balance - withdrawal;

        cout << "Withdrawal successful." << endl;
        cout << "Remaining balance: " << balance << endl;

        if (balance == 0) {
            cout << "Account balance is zero." << endl;
            break;
        }
    }

    return 0;
}