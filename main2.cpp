#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main() {

	class Uczen {
	public:
		string imie, nazwisko, klasa;
		int rok_ur;
		void ustawImie(string a) {
			//				cout<<"\nPodaj imie:\t";		cin>>imie;
			imie = a;

		}
		void ustawNazwisko(string a) {
			nazwisko = a;
			
		}
		void ustawKlase(string a) {
			klasa = a;
			
		}
		void ustawRokUr(int a) {
			rok_ur = a;
			
		}
	};

	Uczen uczen_a;
	uczen_a.imie;
	uczen_a.nazwisko;
	uczen_a.klasa;
	uczen_a.rok_ur;
	uczen_a.ustawImie("Patryk");
	uczen_a.ustawNazwisko("Debiak");
	uczen_a.ustawKlase("3Cg1");
	uczen_a.ustawRokUr(2003);

	Uczen uczen_b;
	uczen_b.imie;
	uczen_b.nazwisko;
	uczen_b.klasa;
	uczen_b.rok_ur;
	uczen_b.ustawImie("Bogdan");
	uczen_b.ustawNazwisko("Boner");
	uczen_b.ustawKlase("4B");
	uczen_b.ustawRokUr(1999);
	
	if (uczen_a.rok_ur < uczen_b.rok_ur) {
		cout << "Starszy jest " << uczen_a.imie << " " << uczen_a.nazwisko << endl;

	}
	else if (uczen_a.rok_ur > uczen_b.rok_ur) {
		cout << "Starszy jest " << uczen_b.imie << " " << uczen_b.nazwisko << endl;

	}
	else {
		cout << "Obaj uczniowie sa tego samego wieku\n";
	}

	fstream plik("dane.txt", ios::app);
	plik.open("dane.txt", ios::app); {
		plik << uczen_a.imie; 
		plik >> uczen_a.nazwisko;
		plik >> uczen_a.klasa;
		plik >> uczen_a.rok_ur; }
		plik.close();

	return 0;
}