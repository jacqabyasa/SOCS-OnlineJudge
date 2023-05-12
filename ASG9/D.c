#include <stdio.h>

long long int fibo(long long int a0, long long int a1, long long int order) {
	long long int value, i;
	
	if (order == 0) return a0;
	if (order == 1) return a1;
	for(i=2; i<=order; i++) {
		value = a1 - a0;
		a0 = a1;
		a1 = value;
	}
	
	return value;
}

int main(){
	long long int a0, a1, order, t, i;
	scanf("%lld", &t);
	for(i=0; i<t; i++){
	scanf("%lld %lld %lld", &order, &a0, &a1);
	printf("Case #%lld: %lld\n", i+1, fibo(a0, a1, order));
}
return 0;
}
