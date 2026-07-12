//JOY KARANI
//BCS-05-0072/2025

#include <iostream>
using namespace std;

int main() {
    string correctUsername = "admin";
    string correctPassword = "12345";

    string username, password;

    do {
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        if (username == correctUsername &&
            password == correctPassword) {

            cout << "Access Granted" << endl;
            break;
        }
        else {
            cout << "Incorrect credentials, try again" << endl;
        }

    } while (true);

    return 0;
} 