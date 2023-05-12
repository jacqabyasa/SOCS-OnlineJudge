#include <stdio.h>


int main () {
	
	int i, j, T, N;
	
	scanf("%d", &T);
	
	for(i=0; i<T; i++) {
		
		scanf("%d", &N);
		
		printf("Case #%d:\n", i+1);
		
		for (j=1; j<N+1; j++){
			printf("%d ", j);
			if ((j%3 == 0 || j%5 == 0) && (j%15 != 0)) printf("Jojo\n");
			else printf("Lili\n");
				
		}
		}
	
	
		
	return 0;
}

