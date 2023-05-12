#include <stdio.h>

int main () {
	
	int t, i, j, q, k, length, status;
	

	scanf("%i", &t);
	char string[1001];
	
	for (q=0; q<t; q++){
	length = 0;
		scanf("%s", &string);

		length = strlen(string);
		
		

		printf("Case #%i : ", (q+1));
		
		for (j=(length-1); j >= 0; j--) {
		printf("%c", string[j]);}
		printf("\n");

	
	}



return 0;}
