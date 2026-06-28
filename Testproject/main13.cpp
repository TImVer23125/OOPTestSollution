#include "Employee.h"

int main() {
	Employee* employee = new Employee();

	cout << employee->getName() << endl;	

	delete employee;

	return 0;
}