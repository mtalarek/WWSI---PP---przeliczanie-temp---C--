#include <iostream>
#include <iomanip>
using namespace std;

void przeliczFnaC() {
	float c, f; //c - t. w stopniach C, f - t. w stopniach F
	cout << "podaj temperature w stopniach Fahrenheita: ";
	cin >> f;
	if (f >= -459.6667) {
		c = (f - 32) / 1.8;
		cout << fixed << setprecision(2);
		cout << f << " F = " << c << " C";
	}
	else {
		cout << "blad: podana temp. jest mniejsza od zera bezwgl.";
	}
}

void przeliczCnaF() {
	float c, f; //c - t. w stopniach C, f - t. w stopniach F
	cout << "podaj temperature w stopniach Celsiusza: ";
	cin >> c;
	if (c >= -273.13) {
		f = c * 1.8 + 32;
		cout << fixed << setprecision(2);
		cout << c << " C = " << f << " F";
	}
	else {
		cout << "blad: podana temp. jest mniejsza od zera bezwgl.";
	}
}

void przeliczKnaC() {
	float c, k; //c - t. w stopniach C, k - t. w stopniach K
	cout << "podaj temperature w stopniach Kelwina: ";
	cin >> k;
	if (k >= 0) {
		c = k - 273.15;
		cout << fixed << setprecision(2);
		cout << k << " K = " << c << " C";
	}
	else {
		cout << "blad: podana temp. jest mniejsza od zera bezwgl.";
	}
}

void przeliczCnaK() {
	float c, k; //c - t. w stopniach C, k - t. w stopniach K
	cout << "podaj temperature w stopniach Celsiusza: ";
	cin >> c;
	if (c >= -273.15) {
		k = c + 273.15;
		cout << fixed << setprecision(2);
		cout << c << " C = " << k << " K";
	}
	else {
		cout << "blad: podana temp. jest mniejsza od zera bezwgl.";
	}
}

int main() {
	cout << "Przeliczanie temperatury";
	cout << "F->C <1>; C->F <2>; K->C <3>; C->K <4>; ";
	int wybor;
	cin >> wybor;
	switch (wybor){
	case 1:przeliczFnaC(); break;
	case 2:przeliczCnaF(); break;
	case 3:przeliczKnaC(); break;
	case 4:przeliczCnaK(); break;
	default:cout << "Niepoprawny wybor";
		break;
	}
}

// Sprawdzenie

// F->C
// F=(-500)
// wynik z programu: b³êdne dane
// wynik z kalc. www: b³êdne dane

// F=5
// wynik z programu: -15C
// wynik z kalc. www: -15C


// C->F
// C=(-280)
// wynik z programu: b³êdne dane
// wynik z kalc. www: b³êdne dane

// C=45
// wynik z programu: 113F
// wynik z kalc. www: 113F


// K->C
// K=(-10)
// wynik z programu: b³êdne dane
// wynik z kalc. www: b³êdne dane

// K=15
// wynik z programu: -258.15C
// wynik z kalc. www: -258.15C


// C->K
// C=(-280)
// wynik z programu: b³êdne dane
// wynik z kalc. www: b³êdne dane

// C=45
// wynik z programu: 318.15K
// wynik z kalc. www: 318.15K
