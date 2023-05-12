#include <stdio.h>
#include <string.h>

struct data {
	char shrt[51], og[51];
	
};


int main(){
	
	int t, tc, i, j, j1, k, q, k1;
	
	FILE *fp = fopen("testdata.in", "r");
	fscanf(fp, "%d\n", &t);
	
	struct data d[t];
	
	for(i=0; i<t; i++){
		fscanf(fp, "%[^#]#%[^\n]\n", &d[i].shrt, &d[i].og);
	}
	
	fscanf(fp, "%d\n", &tc);
	char kalimat[101];
	char newKalimat[101][101];
	for(j=0; j<tc; j++){
		fscanf(fp, "%[^\n]\n", &kalimat);
		
		  int counterWord = 0;
        int counter = 0;
        for(q = 0; q <= strlen(kalimat); q++){
            if(kalimat[q] == ' '|| kalimat[q] == '\0') {
                newKalimat[counterWord][counter] = '\0';
                counterWord++;
                counter = 0;
            } else {
                newKalimat[counterWord][counter] = kalimat[q];
                counter++;
            }
        }
        
        printf("Case #%d:\n", j+1);
        for(k=0; k<counterWord; k++){
        	for(k1=0; k1<t; k1++){
        		if(k == counterWord - 1) {
				if(strcmp(d[k1].shrt, newKalimat[k]) == 0) {printf("%s", d[k1].og); break;}
				else if(k1 == t-1 )printf("%s", newKalimat[k]);
			 }
				else {if(strcmp(d[k1].shrt, newKalimat[k]) == 0) {printf("%s ", d[k1].og); break;}
				else if(k1 == t-1 ) printf("%s ", newKalimat[k]);}
		}
		}
		printf("\n");
		
		
	}
	
	return 0;
		
	}
