#include <stdio.h>
#include <string.h>

int main () {
	int i, j, x, y, N;
	char str[1001];
	
	
	scanf("%d", &N);
	getchar();
	for (i=0; i<N; i++) {
	
	scanf("%[^\n]", &str);
		x = strlen(str);
	getchar();
	printf("Case %i: ", i+1);
	for (j=x-1; j>=0; j--) {
		y = str[j]%2;
	printf("%d", y);
}
		printf("\n");
}
	return 0;
}


