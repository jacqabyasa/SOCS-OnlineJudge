#include <stdio.h>

int collatz(int a, int b) {
	

	while (a != 1){
		if (a == b) break;
		if (a%2 == 0) a = a/2;
			else a = a*3 +1;
		}
	
	if (a == b) return 1;
	if (a == 1 && b != 1) return 0;
}


int main(){
	int t, a, b, i;
	scanf("%d", &t);
	for (i=1; i<=t; i++){
	scanf("%d %d", &a, &b);
	printf("Case #%d: ", i);
		if (collatz(a, b) == 1) printf("YES\n");
		if (collatz(a, b) == 0) printf("NO\n");
}
return 0;
}
