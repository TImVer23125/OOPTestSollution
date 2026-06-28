#include "Human.h"


class Employee : public Human
{
private:
	double salary;

public:

	Employee();

	Employee(string name, int age);


	Employee(string name, int age, char gender, bool alive, double salary);

	Employee(const Employee* employee);

	~Employee();


	double getSalary(double salary);
	void setSalary();

};

