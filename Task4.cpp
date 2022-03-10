#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#pragma pack(push, 1)
struct Emploee
{
	string name;
	int age;
	float salary;
};
#pragma pack(pop)

int main()
{
	Emploee* pEmploee = new Emploee;

	pEmploee->name = "Sergey";
	pEmploee->age = 21;
	pEmploee->salary = 1151.5;

	cout << "Emploee name: " << pEmploee->name << endl;
	cout << "Emploee age: " << pEmploee->age << endl;
	cout << "Emploee scalary: " << pEmploee->salary << endl;
	cout << "Information size: " << sizeof(pEmploee) << endl;

	ofstream fout("EmploeeData.txt");

	fout << "Emploee name: " << pEmploee->name << endl;
	fout << "Emploee age: " << pEmploee->age << endl;
	fout << "Emploee scalary: " << pEmploee->salary << endl;
	fout << "Information size: " << sizeof(pEmploee) << endl;

	fout.close();
	delete pEmploee;

	return 0;
}
