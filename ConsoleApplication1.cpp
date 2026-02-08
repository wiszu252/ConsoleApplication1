#include <iostream>

using namespace std;

// Metody
static double Dodawanie(double a, double b) { return a + b; }
static double Odejmowanie(double a, double b) { return a - b; }
static double Mnożenie(double a, double b) { return a * b; }
static double Dzielenie(double a, double b)
{
   if (b == 0)
	  return 0;
   else
	  return a / b;
}

// MAIN
int main()
{
   // Zmienne
   double Pierwsza_liczba;
   double Druga_liczba;
   double Wynik;
   int Wybór_działania;
   bool Czy_kontynuacja = false;

   do
   {
	  cout << "KALKULATOR" << endl;
	  if (!Czy_kontynuacja)
	  {
		 cout << "Wprowadź pierwszą liczbę: ";
		 if (!(cin >> Pierwsza_liczba))
		 {
			cin.clear();
			cin.ignore(1000, '\n');
			continue;
		 }
	  }
	  cout << "Wprowadź drugą liczbę: ";
	  if (!(cin >> Druga_liczba))
	  {
		 cin.clear();
		 cin.ignore(1000, '\n');
		 continue;
	  }

	  cout << "Wybierz czynność" << endl;
	  cout << "1. Dodaj" << endl;
	  cout << "2. Odejmij" << endl;
	  cout << "3. Pomnóż" << endl;
	  cout << "4. Podziel" << endl;
	  if (!(cin >> Wybór_działania))
	  {
		 cin.clear();
		 cin.ignore(1000, '\n');
		 continue;
	  }
	  switch (Wybór_działania)
	  {
	  case 1:
		 Wynik = Dodawanie(Pierwsza_liczba, Druga_liczba);
		 break;
	  case 2:
		 Wynik = Odejmowanie(Pierwsza_liczba, Druga_liczba);
		 break;
	  case 3:
		 Wynik = Mnożenie(Pierwsza_liczba, Druga_liczba);
		 break;
	  default:
		 Wynik = Dzielenie(Pierwsza_liczba, Druga_liczba);
		 break;
	  }
	  cout << "Wynik: " << Wynik << endl;
	  cout << endl;
	  cout << "1. Kontynuuj z tym wynikiem" << endl;
	  cout << "2. Rozpocznij od nowa" << endl;
	  cout << "3. Wyjdź" << endl;
	  if (!(cin >> Wybór_działania))
	  {
		 cout << "Niepoprawna wartość, spróbuj jeszcze raz\n";
		 cin.clear();
		 cin.ignore(1000, '\n');
		 continue;
	  }
	  switch (Wybór_działania)
	  {
	  case 1:
		 Czy_kontynuacja = true;
		 Pierwsza_liczba = Wynik;
		 break;
	  case 2:
		 Czy_kontynuacja = false;
		 break;
	  default:
		 return 0;
	  }
   } while (true);
}