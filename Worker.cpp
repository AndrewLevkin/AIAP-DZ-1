#include "Worker.h"
Worker::Worker(const string& FirstNameC, const string& SecondNameC, int PayC, const string& RoleC) {
	FirstName = FirstNameC;
	SecondName = SecondNameC;
	Pay = PayC;
	Role = RoleC;
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
bool Worker::operator==(const Worker &input) const {
	return ((input.FirstName == this->FirstName) &&
		(input.SecondName == this->SecondName) &&
		(input.Pay == this->Pay) &&
		(input.Role == this->Role));
}
ostream& operator<<(ostream& os, const Worker& st) {
	os << "FirstName - " << st.FirstName << " SecondName - " << st.SecondName << " Pay "
		<< st.Pay << " Role " << "type " << st.Role<<endl;
	return os;
}
Worker& Worker::operator=(const Worker& input) {
	if (this != &input) {
		this->FirstName = input.FirstName;
		this->SecondName = input.SecondName;
		this->Pay = input.Pay;
		this->Role = input.Role;
	}
	return *this;
}