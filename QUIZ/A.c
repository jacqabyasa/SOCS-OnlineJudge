#include <stdio.h>


int main () {
	
	int i, T;
	int A, B;
	
	scanf("%d", &T);
	
	for(i=0; i<T; i++) {
		
		scanf("%d %d", &A, &B);
		
		int total = 0;
		int multiplier = 1;
		int eachdigit = 0;
		
		while (A > 0|| B > 0) {
			
			eachdigit = (A%10) + (B%10);
			
			eachdigit = eachdigit%10;
			
			total = total + eachdigit*multiplier;
			A = A/10; B = B/10;
			
			multiplier = multiplier*10;
		}
		
		printf("Case #%d: %d\n", i+1, total);
	}	
	
	
		
	return 0;
}



