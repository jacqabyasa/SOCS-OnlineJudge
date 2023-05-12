#include <stdio.h>
#include <string.h>

int main () {
	int i, j, n, m, x;
	char str[201];
	
	
	scanf("%d %d", &n, &m);
	getchar();
	scanf("%s", &str);
	
	for (i=0; i<m; i++) {
	
	scanf("%d", &x);
	getchar();
	if (str[x] >= 'a' && str[x] <= 'z') {
		str[x] = str[x] - 32;
	}
	else if (str[x] >= 'A' && str[x] <= 'Z') {
		str[x] = str[x] + 32;
	}

}

	printf("%s\n", str);

	return 0;
}

