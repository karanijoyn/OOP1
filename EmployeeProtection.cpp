//JOY KARANI
//BCS-05-0072/2025

#include <iostream>
#include <string>

class Employee {
private:

    std::string employeeName;
    int employeeID;
    double basicSalary;

public:
    
    void setEmployeeDetails() {
        std::cout << "Enter Employee Name: ";
        std::getline(std::cin >> std::ws, employeeName); 
        
        std::cout << "Enter Employee ID: ";
        std::cin >> employeeID;
        
        std::cout << "Enter Basic Salary: ";
        std::cin >> basicSalary;
    }


    double calculateSalary() {
        double netSalary = basicSalary + (0.10 * basicSalary);
        return netSalary;
    }

    
    void displayEmployeeDetails() {
        std::cout << "\n--- Employee Details ---" << std::endl;
        std::cout << "Name: " << employeeName << std::endl;
        std::cout << "ID: " << employeeID << std::endl;
        std::cout << "Basic Salary: $" << basicSalary << std::endl;
        std::cout << "Net Salary (with 10% allowance): $" << calculateSalary() << std::endl;
    }
};

int main() {
    
    Employee emp;

    
    std::cout << "--- Input Employee Information ---" << std::endl;
    emp.setEmployeeDetails();

   
    emp.displayEmployeeDetails();

    return 0;
}
