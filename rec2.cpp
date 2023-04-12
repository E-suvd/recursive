#include <stdio.h>

void myFunction(int n) {
	if(n == 0) return;
	else {
		printf("%d", n);
		myFunction(n-1);
	}
}

int main() {
	int a = 5;
	myFunction(a);
	return 0;
	
}
