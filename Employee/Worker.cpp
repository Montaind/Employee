#include "Worker.h"

Worker::Worker() : Employee("Null", 0, "Null"), enter(0), exit(0), productivity(0)
{
}

Worker::Worker(std::string name, int age, std::string sex, int enter, int exit, int productivity) : Employee(name, age, sex)
{
	this->enter = enter;
	this->exit = exit;
	this->productivity = productivity;
}

Worker::Worker(Worker& m)
{
	enter = m.enter;
	exit = m.exit;
	productivity = m.productivity;
	name = m.name;
	age = m.age;
	sex = m.sex;
}

Worker::~Worker() {}

int Worker::getSalary()
{
	return (exit - enter) * productivity;
}

void Worker::output()
{
	std::cout << "Its Worker" << "\n";
	std::cout << "name: " << name << "\n";
	std::cout << "age: " << age << "\n";
	std::cout << "sex: " << sex << "\n";
	std::cout << "enter: " << enter << "\n";
	std::cout << "exit: " << exit << "\n" ;
	std::cout << "productivity: " << productivity << "\n";
}
