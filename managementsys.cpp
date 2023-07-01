#include <iostream>
#include <bits/stdc++.h>

#define max 40
using namespace std;

struct ST
{
    string name;
	long int code;
	string dg;//designation
	int age;
};

int num;
void showMenu();

// Array of Employees to store the
// data in the form of the Structure
// of the Array
ST emp[max], tempemp[max],
	sortemp[max], sortemp1[max];


void build()
{
	cout << "Build The Table\n";
	cout << "Maximum Entries can be "
		<< max << "\n";

	cout << "Enter the number of "
		<< "Entries required";
	cin >> num;

	if (num > 40) {
		cout << "Maximum number of "
			<< "Entries are 20\n";
		num = 40;
	}
	cout << "Enter the following data:\n";

	for (int i = 0; i < num; i++) {
		cout << "Name ";
		cin >> emp[i].name;

		cout << "Employee ID ";
		cin >> emp[i].code;

		cout << "Designation ";
		cin >> emp[i].dg;

		cout << "Age ";
		cin >> emp[i].age;
	}

	showMenu();
}

// given data type
void insert()
{
	if (num < max) {
		int i = num;
		num++;

		cout << "Enter the information "
			<< "of the Employee\n";
		cout << "Name ";
		cin >> emp[i].name;

		cout << "Employee ID ";
		cin >> emp[i].code;

		cout << "Designation ";
		cin >> emp[i].dg;

		cout << "Age ";
		cin >> emp[i].age;
	}
	else {
		cout << "Employee Table Full\n";
	}

	showMenu();
}

void deleteIndex(int i)
{
	for (int j = i; j < num - 1; j++) {
		emp[j].name = emp[j + 1].name;
		emp[j].code = emp[j + 1].code;
		emp[j].dg
			= emp[j + 1].dg;
		emp[j].age = emp[j + 1].age;
	}
	return;
}

void deleteRecord()
{
	cout << "Enter the Employee ID "
		<< "to Delete Record";

	int code;

	cin >> code;
	for (int i = 0; i < num; i++) {
		if (emp[i].code == code) {
			deleteIndex(i);
			num--;
			break;
		}
	}
	showMenu();
}
void searchRecordbyC()
{
	cout << "Enter the Employee"
		<< " ID to Search Record";

	int code;
	cin >> code;

	for (int i = 0; i < num; i++) {

		// If the data is found
		if (emp[i].code == code) {
			cout << "Name "
				<< emp[i].name << "\n";

			cout << "Employee ID "
				<< emp[i].code << "\n";

			cout << "Designation "
				<< emp[i].dg << "\n";

			cout << "Age "
				<< emp[i].age << "\n";
			break;
		}
	}

	showMenu();
}


void searchRecordbyN()
{
	cout << "Enter the Employee"
		<< " name to Search Record";

	string n;
	cin >> n;

	for (int i = 0; i < num; i++) {

		// If the data is found
		if (emp[i].name == n) {
			cout << "Name "
				<< emp[i].name << "\n";

			cout << "Employee ID "
				<< emp[i].code << "\n";

			cout << "Designation "
				<< emp[i].dg << "\n";

			cout << "Age "
				<< emp[i].age << "\n";
			break;
		}
	}

	showMenu();
}

void displayR()
{
    for (int i =0;i<num;i++){
        cout << "Name "
				<< emp[i].name << "\n";

			cout << "Employee ID "
				<< emp[i].code << "\n";

			cout << "Designation "
				<< emp[i].dg << "\n";

			cout << "Age "
				<< emp[i].age << "\n";
    }
    showMenu();
}

void showMenu()
{

	cout << "######################################################"
		 << "#              staff Management System               #"
		<< " ######################################################\n";
    cout << "######################################################\n";
	cout << "#            Available Options:                      #\n\n";
	cout << "# 1) Add a staff member information                  #\n";
	cout << "# 2) Update staff member information                 #\n";
	cout << "# 3) Delete a staff member information               #\n";
	cout << "# 4) Search a staff member information by ID         #\n";
	cout << "# 5) Search a staff member information by name       #\n";
	cout << "# 6) Display the List                                #\n";
	cout << "# 7) Exit                                            #\n";
	cout << "######################################################\n";

	int option;
    cout<<"      Enter a Option    \n";
	// Input Options
	cin >> option;

	// Call function on the basis of the
	// above option
	if (option == 1) {
		build();
	}
	else if (option == 2) {
		insert();
	}
	else if (option == 3) {
		deleteRecord();
	}
	else if (option == 4) {
		searchRecordbyC();
	}
	else if (option == 5) {
		searchRecordbyN();
	}
	else if (option == 6) {
		displayR();
	}
	else if (option == 7) {
		return;
	}
	else {
		cout << "Expected Options"
			<< " are 1/2/3/4/5/6/7";
		showMenu();
	}
}
int main()
{
    showMenu();
    return 0;
}
