#include <stdio.h>

int fibo(int a0, int a1, int order) {
	int value, i;
	
	if (order == 0) return a0;
	if (order == 1) return a1;
	for(i=2; i<=order; i++) {
		value = a0 + a1;
		a0 = a1;
		a1 = value;
	}
	
	return value;
}

int main(){
	int a0, a1, order;
	scanf("%d %d", &a0, &a1);
	scanf("%d", &order);
	printf("%d\n", fibo(a0, a1, order));
	
return 0;
}
