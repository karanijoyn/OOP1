//JOY KARANI
//BCS-05-0072/2025


#include <iostream>
#include <string>

class Student {
private:
    std::string studentName;
    std::string admissionNumber;
    double feeBalance;

public:
    void inputStudentData() {
        std::cout << "Enter Student Name: ";
        std::getline(std::cin >> std::ws, studentName);
        std::cout << "Enter Admission Number: ";
        std::cin >> admissionNumber;
        std::cout << "Enter Fee Balance: ";
        std::cin >> feeBalance;
    }

    void makePayment(double amount) {
        if (amount > 0) {
            feeBalance -= amount;
        }
    }

    void displayStatus() const {
        std::cout << "\n--- Student Status ---\n";
        std::cout << "Name: " << studentName << "\n";
        std::cout << "Admission Number: " << admissionNumber << "\n";
        std::cout << "Remaining Fee Balance: " << feeBalance << "\n";
    }
};

int main() {
    Student studentObj;
    
    studentObj.inputStudentData();

    double payment;
    std::cout << "\nEnter payment amount: ";
    std::cin >> payment;
    
    studentObj.makePayment(payment);
    studentObj.displayStatus();

    return 0;
}
