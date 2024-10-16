#include <iostream>
#include <vector>
#include <cstring> 

using namespace std;

typedef struct {
	int id;
	int age;
	char name[100];
	char surname[100];
} CLASS;

void addStudent(vector<CLASS>& newClass);
void printStudents(const vector<CLASS>& newClass);
void removeStudents(vector<CLASS>& newClass);

int main() {
	vector<CLASS> class1;
	char addMore;

	do {
		addStudent(class1);
		cout << "Do you want to add another student? (y/n): ";
		cin >> addMore;
	}while(addMore == 'y');

	removeStudents(class1);

	printStudents(class1);
return 0;
}

void addStudent(vector<CLASS>& newClass) {
	CLASS student;
	cout << "Enter the student's ID: ";
	cin >> student.id;
	cout << "Enter the student's age: ";
	cin >> student.age;
	cout << "Enter the student's name: ";
	cin >> student.name;
	cout << "Enter the student's surname: ";
	cin >> student.surname;

	newClass.push_back(student);
}

void printStudents(const vector<CLASS>& newClass) {
for (size_t i = 0; i < newClass.size(); i++) {
	cout << "Student " << i + 1 << " details:" << endl;
	cout << "ID: " << newClass[i].id << endl;
	cout << "Age: " << newClass[i].age << endl;
	cout << "Name: " << newClass[i].name << endl;
	cout << "Surname: " << newClass[i].surname << endl;
	cout << "-------------------------" << endl;
	}
}

void removeStudents(vector<CLASS>& newClass) {
	int idToRemove;
	cout << "Enter the ID of the student you want to remove: ";
	cin >> idToRemove;

	for (auto it = newClass.begin(); it != newClass.end(); ) {
		if (it->id == idToRemove) {
		it = newClass.erase(it); // Remove student and get next iterator
		cout << "Student with ID " << idToRemove << " removed." << endl;
		return; // Exit after removing one student
		}else{
			++it; // Move to the next student
			}
	}
cout << "No student found with ID " << idToRemove << "." << endl;
}
