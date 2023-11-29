#include "Employee.h"
#include "Worker.h"
#include "Manager.h"
#include "Maintenance.h"
#include "Clerk.h"
#include <vector>

int main() {
	std::vector<Employee*> employee;
	Worker A("Grigoriy", 5, "woman", 0, 24, 1);
	Worker B("Ilya", 14, "man", 8, 10, 12);
	Manager C("Bogdan", 14, "man", SupremeManager);
	Maintenance D("Miron", 13, "man", "00:00 - 00:00");
	Clerk E("Grigoriy", 30, "man", 167);
	employee.push_back(&A);
	employee.push_back(&B);
	employee.push_back(&C);
	employee.push_back(&D);
	employee.push_back(&E);
	for (int i = 0; i < employee.size(); i++) {
		employee[i]->output();
		std::cout << "\n\n\n";
		std::cout << "My Salary is: " << std::endl;
		std::cout << employee[i]->getSalary();
		std::cout << "\n\n\n";
	}
}