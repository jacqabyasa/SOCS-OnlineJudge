#include <stdio.h>

int main () {
	
	int x, percent, max, cb, t, i, j;
	
	scanf("%d", &t);
	
	for (i=0; i<t; i++) {
		scanf("%d %d %d", &x, &percent, &max);
		
		cb = (x/100)*percent;
		
		printf("Case #%d: ", i+1);
		
		if (cb<=max) printf("%d\n", cb);
		else printf("%d\n", max);
	
	
	}
	
	
	return 0;
}
