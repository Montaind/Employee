#include "Employee.h"
#include "Worker.h"
#include "Manager.h"
#include <vector>

int main() {
	std::vector<Employee*> employee;
	Worker A("Grigoriy", 5, "woman", 0, 24, 1);
	Worker B("Ilya", 14, "man", 8, 10, 12);
	Manager C("Bogdan", 14, "man", SupremeManager);

	employee.push_back(&A);
	employee.push_back(&B);
	employee.push_back(&C);

	for (int i = 0; i < employee.size(); i++) {
		employee[i]->output();
		std::cout << "\n\n\n";
	}
}