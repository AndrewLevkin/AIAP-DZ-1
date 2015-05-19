#include "./Department.h"
#include <vector>
#include <iterator>

Department::Department() {
	Name = "NO NAME"; AmountPpl = 0; Budget = 0;
}
Department::Department(const string& NameC, int AmountPplC, int BudgetC, const list<Worker>& WorkerList) {
	Name = NameC; AmountPpl = AmountPplC; Budget = BudgetC;
	Workers = WorkerList;
}
Department::Department(const string& NameC, int AmountPplC, int BudgetC) {
	Name = NameC; AmountPpl = AmountPplC; Budget = BudgetC;
}
Department::~Department() {
}
const string& Department::GetName() const {
	return Name;
}
int Department::GetAmountPpl() const {
	return AmountPpl;
}
int Department::GetBudget() const {
	return Budget;
}

const list<Worker>&  Department::GetWorkers() const {
	return Workers;
}
void Department::SetName(const string& x) {
	Name = x;
}
void Department::SetAmountPpl(int x) {
	AmountPpl = x;
}
void Department::SetBudget(int x) {
	Budget = x;
}
void Department::PrintWorkers() {
	for (const auto& Worker : Workers)
		if (!Workers.empty()) {
		cout << Worker;
		}
}
void Department::PrintDepartmentInfo() {
	cout << "Department name : " << Name << endl;
	cout << "Amount of people: " << AmountPpl << endl;
	cout << "Budget: " << Budget << endl;
}
int Department::Add(const Worker& p) {
	if (this->has(p))
		throw WorkerAlreadyExists(p);
	Workers.push_back(p);
	return Workers.size();
}
void Department::Dell(const Worker& p) {
	list<Worker>::iterator pos = find(Workers.begin(), Workers.end(), p);
	if (pos != Workers.end()) {
		Workers.erase(pos);
		AmountPpl--;//??
	}
	else {
		throw WorkerNotFound(p);
	}
}
void Department::Dell(int idx) {
	list<Worker>::iterator pos;
	if (idx < this->Workers.size()) {
		advance(pos, idx);
		Workers.erase(pos);
		AmountPpl--;
	}
	else {
		throw WorkerNotFound(idx);
	}
}
bool Department::has(const Worker& p) {
	return (find(Workers.begin(), Workers.end(), p) != Workers.end());
}
void Department::SetWorkers(const list<Worker>& tmpList) {
	Workers = tmpList;
}
const Department& Department::operator+(const Department& input) const {
	list<Worker> newList = this->GetWorkers();
	newList.insert(newList.end(), input.GetWorkers().begin(),
		input.GetWorkers().end());
	Department temp(this->GetName() + " and " + input.GetName(),
		this->GetAmountPpl() + input.GetAmountPpl(), 
		this->GetBudget() + input.GetBudget(), newList);
	return temp;
}
Department& Department::operator=(const Department& input) {
	if (this != &input) {
		this->Name = input.Name;
		this->AmountPpl == input.AmountPpl;
		this->Budget == input.Budget;
		this->Workers == input.Workers;
	}
	return *this;
}
bool Department::operator==(const Department& input) {
	return ((this->Name == input.Name) &&
		(this->AmountPpl == input.AmountPpl) &&
		(this->Budget==input.Budget) &&
		(this->Workers == input.Workers));
}
Worker& Department::operator[](int idx) {
	list<Worker>::iterator itr = Workers.begin();
	if (idx < Workers.size()) {
		advance(itr, idx);
		return *itr;
	}
	else {
		throw WorkerNotFound(idx);
	}
}