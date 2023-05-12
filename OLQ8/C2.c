#include <stdio.h>
#include <math.h>
#include <string.h>

	
int main() {
	
	int t, i, j, k, distinct, x;
	char string[100001];
	
	scanf("%d", &t);
	
	for (i=0; i<t; i++) {
		
		scanf("%s", &string);
		getchar();
		
		x = strlen(string);
		
		int counter[26];
		memset(counter, 0, sizeof(counter));
		
		for (j=0; j<x; j++) {
			counter[string[j] - 97]++;
			
		}
		
		distinct = 0;
		for (k=0; k<26; k++) {
			if (counter[k]>0)
			distinct = distinct + 1;
		}
		
		printf("Case #%d: ", (i+1));
		if (distinct%2 == 1) printf("Unbreakable\n");
		if (distinct%2 == 0) printf("Breakable\n");
	}
	return 0;
}
