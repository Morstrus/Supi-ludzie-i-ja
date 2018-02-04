#include <iostream>
#include "dodawanie.h"
#include "odejmowanie.h"
#include "header.h"
#include "dzielenie.h"
#include <conio.h>
#include "potegi.h"


using namespace std;

int main(){
	int a, b;
	char z;
	cin >> a >> z >> b;
	do {
		switch (z)
		{
		case 43:
			cout << dodawanie(a, b);
			break;
		case 35:
			cout << odejmowanie(a, b);
			break;
		case 42:
			cout << mnozenie(a, b);
			break;
		case 47:
			cout << dzielenie(a, b);
			break;
		case 94:
			cout << potegi(a, b);
			break;
		}
	} while (_getch() != 32);
	
	
	cout << "Kruczi a co to za outdated branch bez petli i w ogole..." << endl
		 << "Trza tu zrobic rebase mi sie wydaje! :D" << endl;
	
}
