#include <iostream>
#include "dodawanie.h"
#include "odejmowanie.h"


using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	cout << endl << dodawanie(a, b);
	cout << endl << odejmowanie(a, b);
	system("pause");
	return 0;
}
