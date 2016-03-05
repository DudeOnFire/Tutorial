#include <iostream>
#include <fstream>

using namespace std;

void ManageIO() {

	float fValue = 1.2576f;

	printf("%s", "Just a normal text!!^^\n");

	printf("%f\n", fValue);

	printf("%.3f\n", fValue);

	printf("%s %.5f\n", "Value of this is: ", fValue);

	char buffer[60];
	char name[30];
	int points = 2548;

	cout << "Name?: ";
	cin.get (name, 29);

	sprintf_s(buffer, "Player %s has won with %i points\n", name, points);

	cout << buffer;
}

void ManageFileIO() {
	
	int CurrentHighscore = 0;
	cout << "Highscore?: ";
	cin >> CurrentHighscore;

	ofstream Output("Highscore.hsc", ios::binary);
	Output.write((char*)&CurrentHighscore, sizeof(CurrentHighscore));
	Output.close();

	CurrentHighscore = 0;

	ifstream Input("Highscore.hsc", ios::binary);
	Input.read((char*) &CurrentHighscore, sizeof(CurrentHighscore));
	Input.close();

	cout << "Highscore from file: " << CurrentHighscore;
	cout << endl;
}

