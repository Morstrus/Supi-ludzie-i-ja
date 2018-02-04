#include <iostream>
#include "dodawanie.h"
#include "odejmowanie.h"
#include "dzielenie.h"


using namespace std;

int main(){
	int a, b, z;
	cin >> a >> b;
	cout << "Co chcesz zrobic?" << endl;
	cout << "1. Dodac" << endl;
	cout << "2. Odejmowanie" << endl;
	cout << "3. Dzielenie" << endl;
	cin >> z;
	switch(z)
	{
		case 1:
		cout << dodawanie(a, b);
		case 2:
		cout << odejmowanie(a, b);
		break;
		case 3:
		cout << dzielenie(a,b);
		break;
	}
	
}
