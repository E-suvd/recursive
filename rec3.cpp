#include <stdio.h>

void myFunction(int n) {
	if(n == 0) return;
	else {
		myFunction(n-1);
		printf("%d", n);
	}
}

int main() {
	int a = 5;
	myFunction(a);
	return 0;
	
}
