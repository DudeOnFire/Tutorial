#include <iostream>
#include "OutsourcedMethods.h"
#include "TSingleton.h"
//
//
using namespace std;
//
class CLogfile : public TSingleton<CLogfile> {
public:
	CLogfile() {
		cout << "Constructor has been called." << endl;
	}

	~CLogfile() {
		cout << "Logfile destructor has been called. Logfile has been closed!" << endl;
	}

	void StatusReport() {
		cout << "Status has been written to logfile\n";
	}

};
//
void RandomFunction() {
	CLogfile::Get()->StatusReport();
}
//
int main() {

	
	int ReturnedSum = 0;

	ManageIO();
	ManageFileIO();
	ReturnedSum = Calculate(15, 30); 
	cout << "\nSum: " << ReturnedSum;
	cout << endl;
	RandomFunction();
	CLogfile::Del();

	system("pause");
	return 0;
}
