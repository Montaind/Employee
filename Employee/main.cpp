#include "Employee.h"
#include "Worker.h"
#include "Manager.h"
#include <vector>

int main() {
	Employee** a = new Employee*[3];
	Worker A("Grigoriy", 5, "woman", 0, 24, 1);
	Worker B("Ilya", 14, "man", 8, 10, 12);
	Manager C("Bogdan", 14, "man", SupremeManager);
	a[0] = &A;
	a[1] = &B;
	a[2] = &C;
	for (int i = 0; i < 3; i++) {
		a[i]->output();
		std::cout << "\n\n\n";
	}
}