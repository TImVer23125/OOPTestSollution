#include "Employee.h"

Employee::Employee() {
	cout << "Employee default constructor...\n";

}

Employee::Employee(string name, int age, char gender, bool alive
	, double salary) : Human(name,age,gender,alive) {
	cout << "Employee canonical constructor...\n";

	this->salary = salary;
}

Employee::Employee(const Employee* employee) : Human(employee) {
	cout << "Employee copy-constructor...\n";
	this->slary = employee-> salary;
}

Employee::~Employee() {
	cout << "Employee destructor...\n";
}


double Employee::getSalary(double salary) {
	return salary;

}
void Employee::setSalary() {
	if (salary <= 0) {
		this->salary = salary;
	}

}
 



