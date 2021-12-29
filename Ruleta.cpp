#include <iostream>
using namespace std;

float bet,suma;
int n,x;
char f;

void joc() {
	
	
	x = rand() % 36;

	cout << "Alegeti: 1-numar sau 2-culoare :"; cin >> n;
	if (n == 1) {
		cout << "Introduceti numarul : "; cin >> n;
		if (n == x) {
			cout << "Ati castigat !" << endl;
			bet *= 4;
			cout << "Numar : " << x << endl;
		}
		else {
			cout << "Ati pierdut !" << endl;
			bet = 0;
			cout << "Numar : " << x << endl;
		}


	}
	else if (n == 2) {
		cout << "Introduceti culoarea(r/n/v) : "; cin >> f;
		if (f == 'r' && x % 2 == 1) {
			cout << "Ai castigat !" << endl;
			bet *= 2;
			cout << "Numar : " << x << endl;
		}
		else if (f == 'n' && x % 2 == 0) {
			cout << "Ai castigat !" << endl;
			bet *= 2;
			cout << "Numar : " << x << endl;
		}
		else if (f == 'v' && x == 0) {
			cout << "Ai castigat !" << endl;
			cout << "Numar : " << x << endl;
			bet *= 10;
		}
		else {
			cout << "Ai pierdut !";
			cout << "Numar : " << x << endl;
			bet = 0;
			
		}
	}
	else {
		cout << "Nu ati ales un numar valid !";
	}


}

int main()
{
	cout << "Numere de la 1 la 36"<<endl;
	cout << "Rosu : 1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 "<<endl;
	cout << "Negru : 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 " << endl;
	cout << "verde : 0" << endl<<endl;

	cout << "Introduceti suma :"; cin >> suma;
	while (suma !=0) {
	 cout << "Cat doriti sa pariati :"; cin >> bet;
	 cout << endl;
		suma -= bet;
     joc();
        suma += bet;
     cout << "Mai aveti " << suma << " lei !"<<endl;
     cout << endl;
	}

}


