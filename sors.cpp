#include <iostream>
#include "dodawanie.h"


using namespace std;

int main(){
	int a, b, z;
	cin >> a >> b;
	cout << "Co chcesz zrobic?" << endl;
	cout << "1. Dodac" << endl;
	cin >> z;
	switch(z)
	{
		case 1:
		cout << dodawanie(a, b);
		break;
	}
	
}
