#include <stdio.h>
#define ull unsigned long long
unsigned long long binary(ull left, ull right, ull n) {

	while(left <= right) {
	ull mid = left + (left - right)/2;
	if(((mid*(mid + 1)*(2 * mid + 1))/6) == n) {
	return mid;
	}
	
	if(((mid)*(mid+1)*(2*(mid) + 1)/6) > n) {
	return binary(left, mid - 1, n);
	}
	
	if((mid*(mid + 1)*(2*mid+1)/6)< n) {
	return binary(mid + 1, right, n);
	}
	}
	return right + 1;
}

int main(){
	ull t, m, i, x, j;
	scanf("%llu", &t);
	for(i=0; i<t; i++){
		scanf("%llu", &x);
		ull y = binary(1, 1000000, x);
		printf("Case #%llu: %llu\n", i+1, y);
	}
return 0;	
}


