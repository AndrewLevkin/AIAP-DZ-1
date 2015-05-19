#include <locale.h>
#include <vector>
#include "./Department.h"
using ::std::vector;
int main() {
	cout << "Insert department name, amount of people working there, budget" << endl;
	string NameK;
	int AmountPplK,BudgetK;
	cin >> NameK;
	cin >> AmountPplK;
	cin >> BudgetK;
	Department n(NameK, AmountPplK, BudgetK);

	string tempFN, tempSN, tempR;
	int tempP;
	vector<Worker> Workers;
	for (int i = 0; i < AmountPplK; i++) {
		cout << "Insert worker's First Name, Second Name, Pay, Role" << endl;
		cin >> tempFN;
		cin >> tempSN;
		cin >> tempP;
		cin >> tempR;
		Workers.push_back(Worker(tempFN, tempSN, tempP, tempR));
		n.Add(Workers[i]);
	}
	try {
		n.Add(Workers[0]);
	}
	catch (std::exception& e) {
		cout << "Error: " << e.what() << endl;
	}
	n.PrintWorkers();
	cout << "\n";
	cout << "Deleting worker 1" << endl;
	n.Dell(Workers[0]);
	n.PrintWorkers();
	try {
		n.Dell(100);
	}
	catch (std::exception& e) {
		cout << "Error: " << e.what() << endl;
	}
	try {
		n.Dell(Workers[0]);
	}
	catch (std::exception& e) {
		cout << "Error: " << e.what() << endl;
	}
	system("pause");
	return 0;
}