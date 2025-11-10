#include"employee.h"
int employee::employeeCount = 0;
employee::employee(string n,int i,double s):name(n), id(i), salaray(s) {
	employeeCount++;
}
employee::employee(employee& obj) {
	name = obj.name;
	id = obj.id;
	salaray = obj.salaray;
	employeeCount++;
}
int employee::getEmployeeCount() {
	return employeeCount;
}
employee return_Object(string n,int i,double s){
	employee newEmployee(n,i,s);
	return newEmployee;
}
void employee::setdata(string name, int id, double salaray) {
	this->name = name;
	this->id = id;
	this->salaray = salaray;
}
void employee::showDetails() const {
	cout << "\033[31m-----Data of Employee: "<<employee::employeeCount<<"-----\033[0m"<<endl;
	cout << "Company Name: " << companyName << endl;
	cout << "ID: " << id << endl;
	cout << "Name: " << name << endl;
	cout << "Salaray: " << salaray << endl;
}
