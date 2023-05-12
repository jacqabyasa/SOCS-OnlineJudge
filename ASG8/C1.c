#include <stdio.h>
#include <string.h>

struct dataset {
	char code[10];
	char day[10];
	int time;
};

int main () {
	
	int x, t, i, j, j1, k, q, query;
	
	scanf("%d", &t);
	
	struct dataset data[t];
	
	for (i=0; i<t; i++) {
		
		scanf("%s", &data[i].code);
		scanf("%s", &data[i].day);
		scanf("%d", &data[i].time);	
		
}
	
	scanf("%d", &q);
		
		for (k=0; k<q; k++) {
			scanf("%d", &query);
			printf("Query #%d:\n", k+1);
		
		printf("Code: %s\n", data[query-1].code);
		printf("Day: %s\n", data[query-1].day);
		printf("Time: %02d:00\n", data[query-1].time);
}

	
	return 0;
}
