#include <stdio.h>

int main () {
	
	int t, i, j, q, k, length, status;
	

	scanf("%i", &t);
	char string[1001];
	
	for (q=0; q<t; q++){
	length = 0;
		scanf("%s", &string);

		length = strlen(string);
		

		printf("Case %i: ", (q+1));
		
		status = 1;
		for (j=0; j < length; j++) {
			if (status == 1) {printf("%i", string[j]);}
			else printf("-%i", string[j]);
			status = 0;
		
	
	}
		printf("\n");
}


return 0;}


