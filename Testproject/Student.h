#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	string name;
	int age;
	double mark;
	char gender;
	bool alive;

	Student() {
		cout << "Student default constructor\n";
		name = "";
		age = 0;
		alive = false;
		mark = 0;
		gender = '\0';
	}

	Student(string nm, int ag) {
		cout << "Student constructor with arguments\n";
		name = nm;
		age = ag;
		alive = false;
		mark = 0;
		gender = '\0';
	}


	Student(string nm, int ag, char gndr, double mrk, bool a) {
		cout << "Student canonical constructor\n";
		name = nm;
		age = ag;
		alive = a;
		mark = mrk;
		gender = gndr;
	}

	Student(const Student* student) {
		cout << "Student copy-constructor\n";
		name = student->name;
		age = student->age;
		alive = student->alive;
		mark = student->mark;
		gender = student->gender;
	}

	~Student() {
		cout << "Student destructor\n";
	}

	string toString() {
		string s = "";

		s += "Student: " + name
			+ ", age " + to_string(age)
			+ ", gender " + gender
			+ ", mark " + to_string(mark) + ", alive "
			+ (alive ? "Yes" : "No");

		return s;
	}

};