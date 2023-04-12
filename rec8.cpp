#include <stdio.h>

void myFunction(int n) {
	if(n == 0) return;
	else {
		printf("%d", n);
		myFunction(n-1);
		printf("%d", n);
		myFunction(n-1);
		printf("%d", n);
	}
}

int main() {
	int a = 3;
	myFunction(a);
	return 0;
	
}
