#pragma once
#include <iostream>
#include <string>

//Класс сотрудников и класс структурных подразделений (отделов и др.) для отдела кадров организации.
//using namespace std;

using ::std::string;
using ::std::ostream;
using ::std::endl;
using ::std::cin;
using ::std::cout;
using ::std::exception;
using ::std::ostringstream;
using ::std::advance;

class Worker {
public:
	Worker();
	~Worker();
	Worker(const string& FirstNameC, const string& SecondNameC, int PayC, const string& RoleC);
	void SetFirstName(const string&);
	void SetSecondName(const string&);
	void SetPay(int);
	void SetRole(const string&);
	const string& GetFirstName() const;
	const string& GetSecondName() const;
	const string& GetRole() const;
	int GetPay();
	void Print();
	friend ostream& operator<<(ostream& os, const Worker& dt);
	bool operator==(const Worker &input)const;
	Worker& operator = (const Worker &);
private:
	string FirstName;
	string SecondName;
	int Pay;
	string Role;
};

