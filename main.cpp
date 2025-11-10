#include"employee.h"
int main() {

	cout << "\n\033[33m========TechSolutions========\033[0m" << endl;

	cout << "Creating Employee through Consructor Initializer List" << endl;
	employee e1("Muhammad Abdullah Mirza", 0001, 5000000);
	e1.showDetails();

	employee e2("Basit Ali", 0002, 4000000);
	e2.showDetails();

	cout << "\n\033[34mTotal Employees: " << employee::getEmployeeCount() <<"\033[0m" << endl;

	cout << "\nCreating Employee through Copy Constructor AND Passing object as a parameter " << endl;
	employee e3(e1);
	e3.showDetails();
	cout << "\n\033[35mAnalyzing Deep Copy by Modifying Original Object Data\033[0m" << endl;
	cout << "\n\033[036mOriginal Object Data Before Modification:\033[0m" << endl;
	e1.showDetails();
	cout << "\n\033[036mCopied Data Before Modification\033[0m" << endl;
	e3.showDetails();
	e1.setdata("Muhammad Abdullah Mirza - Modified", 1010, 7000000);
	cout << "\n\033[036mOriginal Object Data After Modification:\033[0m" << endl;
	e1.showDetails();
	cout << "\n\033[036mCopied Data After Original Object Modification\033[0m" << endl;
	e3.showDetails();
	cout << "\033[036mThere is no change occured in copied data after modification, SO proved it is Deep Copy\033[0m" << endl;

	cout << "\n\033[34mTotal Employees: " << employee::getEmployeeCount() << "\033[0m" << endl;

	cout << "\nCreating Object using Dynamic Memory Allocation" << endl;
	employee* e4 = new employee("Zohaib ", 0004, 6000000);
	e4->showDetails();

	cout << "\033[34mTotal Employees: " << employee::getEmployeeCount() << "\033[0m" << endl;
	delete e4;
	cout << "\nReturning an object from fucntion" << endl;
	return_Object("M@_Mirz@",0005,999999).showDetails();
	cout << "\033[34mTotal Employees: " << employee::getEmployeeCount() << "\033[0m" << endl;
}
