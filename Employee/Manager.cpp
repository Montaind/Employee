#include "Manager.h"

Manager::Manager() : Employee("Null", 0, "Null"), post(None)
{
}

Manager::Manager(std::string name, int age, std::string sex, ManagerPosts post) : Employee(name, age, sex), post(post)
{
}

Manager::Manager(Manager& m)
{
	name = m.name;
	age = m.age;
	sex = m.age;
	post = m.post;
}

Manager::~Manager()
{
}

int Manager::getSalary()
{
	switch (post) {
	case SupremeManager:
		return 100000;
		break;
	case SalesManager:
		return 75000;
		break;
	case HRManager:
		return 50000;
		break;
	default:
		return 0;
		break;
	}
}

void Manager::output()
{
	std::cout << "Its Manager!" << "\n";
	std::cout << "name: " << name << "\n";
	std::cout << "age: " << age << "\n";
	std::cout << "sex: " << sex << "\n";
	std::string postt;
	switch (post) {
	case SupremeManager:
		postt = "SupremeManager";
		break;
	case HRManager:
		postt = "HRManager";
		break;
	case SalesManager:
		postt = "SalesManager";
		break;
	default:
		postt = "None";
		break;
	}
	std::cout << "post: " << postt << "\n";
}
