#include<iostream>
#include<string>
using namespace std;

class employee {
private:
	string name;
	int id;
	double salaray;
	const string companyName = "TechSolutions";
	static int employeeCount;
public:
	employee(string n, int i, double s);
	employee(employee &obj);
	static int getEmployeeCount();
	
	void setdata(string name, int id, double salaray);
	void showDetails() const;
};
employee return_Object(string n,int i ,double s);
