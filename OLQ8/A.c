#include <stdio.h>

int main () {
	
	int t, i, a, b, c;
	
	scanf("%d", &t);
	
		for (i=0; i<t; i++) {
			
			scanf("%d %d %d", &a, &b, &c);
			
			printf("Case #%d: ", (i+1));
			
			if (((a+b) > c) && ((b+c) > a) && ((a+c) > b)) printf("Yes\n");
			else printf("No\n");
			
			
		}
	
	
	return 0;
}
