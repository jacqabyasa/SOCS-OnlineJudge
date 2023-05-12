#include <stdio.h>

int main () {
	
	int t, i, j, q, length;
	
	scanf("%i", &t);
	char string[1001];
	
	for (q=0; q<t; q++){
	length = 0;
		
		scanf("%s", &string);

		length = strlen(string);
		for (i=0; i<length; i++) {
			
			if (string[i] >= 'a' && string[i] <= 'z') {
			string[i] = string[i] - 32;
			}
			else if (string[i] >= 'A' && string[i] <= 'Z') {
				string[i] = string[i] + 32;
			}
			
		}
		

		printf("Case #%i: ", (q+1));
		
		for (j=(length-1); j >= 0; j--) {
		printf("%c", string[j]);}
		printf("\n");

	
	}



return 0;}
