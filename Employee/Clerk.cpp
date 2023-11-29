#include "Clerk.h"
#include <cmath>
Clerk::Clerk() : Employee("Null", 0, "Null"), rep(0)
{
}

Clerk::Clerk(std::string name, int age, std::string sex, int rep) : Employee(name, age, sex), rep(rep)
{
}

Clerk::Clerk(Clerk& m)
{
	name = m.name;
	age = m.age;
	sex = m.sex;
	rep = m.rep;
}

Clerk::~Clerk()
{
}

int Clerk::getSalary()
{
	return (pow(rep, 1.5) * 10);
}

void Clerk::output()
{
	std::cout << "h-h-h-hello Im Clerk!" << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Sex: " << sex << std::endl;
	std::cout << "Reputation: " << rep << std::endl;
}


