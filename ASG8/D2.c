#include <stdio.h>
#include <string.h>

struct dataset {
	char id[10];
	char name[20];
	long long int price;
};


int main () {
	
	int t, i, j;
	long long int median = 0;
	scanf("%d", &t);
	
	struct dataset data[t];
	
	for (i=0; i<t; i++) {
		
		scanf("%s", &data[i].id);
		getchar();
		scanf("%[^\n]", &data[i].name);
		getchar();
		scanf("%lld", &data[i].price);	
		
}

if (t%2 == 0) median = (data[((t)/2)-1].price + data[((t)/2)].price)/2;
if (t%2 == 1) median = data[((t+1)/2)-1].price;

	for (j=0; j<t; j++) {
		
		if (data[j].price >= median) {
		printf("%s %s\n", data[j].id, data[j].name);
		
	}
	}
	
return 0;
}

