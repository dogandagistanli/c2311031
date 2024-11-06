#include <iostream>
#include <cstring> 

using namespace std;

typedef struct {
	char *name;
	int id;
} PERSON;

void readPerson(PERSON &per) {
	char name[1000];
	cout << "Enter Name: ";
	cin >> name;
	cout << "Enter id: ";
	int id;
	cin >> id; 
	per.name = (char*)malloc(strlen(name) + 1); 
	strcpy(per.name, name);
	per.id = id;

}

void printPerson(const PERSON &per) {
	cout << "Person: " << per.name << "\n" << "id: " << per.id << endl;
}

int main() {
	PERSON p1, p2;
	readPerson(p1);
	printPerson(p1);
	readPerson(p2);
	printPerson(p2);

	free(p1.name);
	free(p2.name);

return 0;
}
