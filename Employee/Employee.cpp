#include "Employee.h"

Employee::Employee()
{
	name = "None";
	age = 0;
	sex = "None";
}

Employee::Employee(std::string name, int age, std::string sex)
{
	this->name = name;
	this->age = age;
	this->sex = sex;
}

Employee::Employee(Employee& m)
{
	name = m.name;
	age = m.age;
	sex = m.sex;
}

Employee::~Employee()
{
}

std::string Employee::getName()
{
	return name;
}

std::string Employee::getSex()
{
	return sex;
}

int Employee::getAge()
{
	return age;
}

void Employee::setName(std::string name)
{
	this->name = name;
}

void Employee::setAge(int age)
{
	this->age = age;
}

void Employee::setSex(std::string sex)
{
	this->sex = sex;
}

