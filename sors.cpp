#include <iostream>
#include "dodawanie.h"
#include "odejmowanie.h"


using namespace std;

int main(){
	int a, b, z;
	cin >> a >> b;
	cout << "Co chcesz zrobic?" << endl;
	cout << "1. Dodac" << endl;
	cout << "2. Odejmowanie" << endl;
	cin >> z;
	switch(z)
	{
		case 1:
		cout << dodawanie(a, b);
		case 2:
		cout << odejmowanie(a, b);
		break;
	}
	
}
