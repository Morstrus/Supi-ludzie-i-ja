int potegi(int a, int b) {
	if (b == 0) return 1;
	if (b == 1) return a;
	int temp = a;
	for (int k = 1; k < b; k++) {
		temp *= a;
	} return temp;
}