#include "Employee.h"
#include "Worker.h"
#include <vector>

int main() {
	std::vector<Employee> employee;
	Employee A("Grigoriy", 10, "woman");
	Worker B("Ilya", 14, "man", 8, 10, 12);
	employee.push_back(A);
	employee.push_back(B);
	for (int i = 0; i < employee.size(); i++) {
		employee[i].output();
		std::cout << "\n\n\n";
	}
}