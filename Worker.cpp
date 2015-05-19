#include "Worker.h"
Worker::Worker(const string& FirstNameC, const string& SecondNameC, int PayC, const string& RoleC) {
	const string& FirstName = FirstNameC;
	const string& SecondName = SecondNameC;
	int Pay = PayC;
	const string& Role = RoleC;
}

Worker::Worker() {
	FirstName = "";
	SecondName = "";
	Pay = 0;
	Role = "";
}

Worker::~Worker() {
}
 
void Worker::SetFirstName(const string& x) {
	FirstName = x;
}
void Worker::SetSecondName(const string& x) {
	SecondName = x;
}
void Worker::SetPay(int x) {
	Pay = x;
}
void Worker::SetRole(const string& x) {
	Role = x;
}
const string& Worker::GetFirstName() const {
	return FirstName;
}
const string& Worker::GetSecondName() const {
	return SecondName;
}
const string& Worker::GetRole() const {
	return Role;
}
int Worker::GetPay() {
	return Pay;
}
void Worker::Print() {
	cout << Worker::FirstName << Worker::SecondName << Worker::Role << Worker::Pay << endl;
}