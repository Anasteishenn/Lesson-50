#include "main.h"

class Student {
public:
	string name;
	string surname;
	int age;
	float avg_mark;

};

int main() {
	Student student1;
	Student student2;

	student1.name = "Ivan";
	student1.surname = "Ivanov";
	student1.age = 15;
	student1.avg_mark = 10;

	student2.name = "Petr";
	student2.surname = "Petrov";
	student2.age = 14;
	student2.avg_mark = 14;

	if (student1.avg_mark > student2.avg_mark) {
		cout << student1.name << " " << student1.surname << "is thr best student " << endl;
	}
	else {
		cout << student2.name << " " << student2.surname << "is thr best student " << endl;
	}
	return 0;
}