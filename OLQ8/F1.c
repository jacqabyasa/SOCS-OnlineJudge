#include <stdio.h>

int main () {
	
	int t, tc, i, j, y, j1, y1, k, k1;
	
	scanf("%d", &t);
	
	for (i=0; i<t; i++) {
		
		scanf("%d", &tc);
		
		int number[tc][tc];
		for (j=0; j<tc; j++) {
			for (y=0; y<tc; y++) {
			scanf("%d", &number[j][y]);
			}
			
		}
		
	printf("Case #%d:", (i+1));
	
	for (k=0; k<tc; k++) {
		int sum = 0;
		for (k1=0; k1<tc; k1++) {
		sum = sum + number[k1][k];
	}
	printf(" %d", sum);
	}
	
	printf("\n");
}
	return 0;
}
