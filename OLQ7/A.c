#include <stdio.h>
#include <string.h>

int main () {
	int i, x, N;
	char str[101];
	
	for (i=0; i<3; i++) {
	
	scanf("%d %[^\n]", &N, &str);
	getchar();
	printf ("%c%c\n", str[N-1], str[0]);
}
	
		
	return 0;
}



