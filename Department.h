#pragma once
#include "Worker.h"
#include "./Exeptions.h"
#include <list>
#include <memory>
using ::std::list;
using ::std::shared_ptr;
using ::std::string;
//����� ����������� � ����� ����������� ������������� (������� � ��.) ��� ������ ������ �����������.
class Department {
private:
	string Name;
	int AmountPpl;
	int Budget;
	list<Worker> Workers;
public:
	Department();
	Department(const Department& Department);
	Department(const string& NameC, int AmountPplC,int BudgetC);
	Department(const string& NameC, int AmountPplC, int BudgetC, const list<Worker>& WorkerList);
	~Department();
	const string& GetName() const;
	int GetAmountPpl() const;
	int GetBudget()const;
	const list<Worker>& GetWorkers() const;
	void SetName(const string& Name);
	void SetAmountPpl(int x);
	void SetBudget(int x);
	void SetWorkers(const list<Worker>& Workers);
	void PrintWorkers();
	void PrintDepartmentInfo();
	int Add(const Worker &p);
	void Dell(const Worker &p);
	void Dell(int idx);
	bool operator==(const Department& Department);
	const Department& operator+(const Department & Department) const;
	Department& operator=(const Department& Department);
	Worker& operator[](int idx);
	bool has(const Worker& Worker);
};