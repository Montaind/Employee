#include "Maintenance.h"

Maintenance::Maintenance() : Employee("Null", 0, "Null"), schedule("Null")
{
}

Maintenance::Maintenance(std::string name, int age, std::string sex, std::string schedule) : Employee(name, age, sex), schedule(schedule)
{
}

Maintenance::Maintenance(Maintenance& m)
{
	name = m.name;
	age = m.age;
	sex = m.sex;
	schedule = m.schedule;
}

Maintenance::~Maintenance()
{
}

int Maintenance::getSalary()
{
	if (schedule == "00:00 - 00:00") {
		return 70000;
	}
	if (schedule == "7:00 - 22:00") {
		return 40000;
	}
	if (schedule == "14:00 - 20:00") {
		return 20000;
	}
}

void Maintenance::output()
{
	std::cout << "its Maintenance!" << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Schedule: " << schedule << std::endl;
}
