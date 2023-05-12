#include <stdio.h>
#include <string.h>


struct data {
	int shift;
	char str[1005];
};

int main(){
	
	int t, i, j, q, p, k, j1, q1;

	FILE *fp = fopen("testdata.in", "r");
	fscanf(fp, "%d", &t);
	
	struct data string[t];
	
	for (i=0; i<t; i++){
		fscanf(fp, "%d\n%[^\n]\n", &string[i].shift, &string[i].str);
	}
	
	for(j=0; j<t; j++){
		int x = strlen(string[j].str);
		for(k=0; k<x; k++){
			if(string[j].str[k] == '0') string[j].str[k] = 'O';
			if(string[j].str[k] == '1') string[j].str[k] = 'I';
			if(string[j].str[k] == '3') string[j].str[k] = 'E';
			if(string[j].str[k] == '4') string[j].str[k] = 'A';
			if(string[j].str[k] == '5') string[j].str[k] = 'S';
			if(string[j].str[k] == '6') string[j].str[k] = 'G';
			if(string[j].str[k] == '7') string[j].str[k] = 'T';
			if(string[j].str[k] == '8') string[j].str[k] = 'B';
		}
		int y = string[j].shift;
		
		for(q=0; q<x; q++){
			for(q1=0; q1<y; q1++){
			if(string[j].str[q] == 'A') string[j].str[q] = string[j].str[q] + 25;
			else if(string[j].str[q] != ' ') string[j].str[q] = string[j].str[q] - 1;
		}
	}
		
	}
	
	for(j1=0; j1<t; j1++){
		printf("Case #%d: %s\n", j1+1, string[j1].str);
	}
	
	fclose(fp);
	
	return 0;
}
