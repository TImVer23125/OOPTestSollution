#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	string name;
	int age;
	//double mark;
	char gender;
	bool alive;
	int* marks;
	int count;

	Student() {
		cout << "Student default constructor\n";
		name = "";
		age = 0;
		alive = false;
		//mark = 0;
		marks = NULL;
		count = 0;
		gender = '\0';
	}

	Student(string nm, int ag) {
		cout << "Student constructor with arguments\n";
		name = nm;
		age = ag;
		alive = false;
		//mark = 0;
		marks = NULL;
		count = 0;
		gender = '\0';
	}

	Student(string nm, int ag, char gndr,bool a,int* mrks, int cnt) {
		cout << "Student canonical constructor\n";
		name = nm;
		age = ag;
		alive = a;
		marks = mrks;
		count = cnt;
		gender = gndr;
	}

	Student(const Student* student) {
		cout << "Student copy-constructor\n";
		name = student->name;
		age = student->age;
		alive = student->alive;
		marks = student->marks;
		count = student->count;
		gender = student->gender;
	}

	~Student() {
		cout << "Student destructor\n";
		if (marks != nullptr) {
			delete[] marks;
			count = 0;
		}
	}

	string toString() {
		string s = "";

		string mrks = "";
		
		for (int i = 0; i < count; i++)
		{
			mrks += to_string(*(marks + i)) + " ";
		}

		s += "Student: " + name
			+ ", age " + to_string(age)
			+ ", gender " + gender
			+ ", marks " + mrks + ", alive "
			+ (alive ? "Yes" : "No");

		return s;
	}

};