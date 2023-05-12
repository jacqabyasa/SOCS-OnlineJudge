#include <stdio.h>
#include <string.h>

struct data {
	char number[11], name[21];
	
};
int main(){
	
	int t, tc, i, j, j1, k;
	
	FILE *fp = fopen("testdata.in", "r");
	fscanf(fp, "%d\n", &t);
	
	struct data student[t];
	
	for(i=0; i<t; i++){
		fscanf(fp, "%s %s\n", &student[i].number, &student[i].name);
	}
	
	fscanf(fp, "%d\n", &tc);
	char find[50];
	
	for(j=0; j<tc; j++){
		fscanf(fp, "%[^\n]\n", &find);
	int status = 0;
	for(k=0; k<t; k++){
				if(strcmp(find, student[k].number) == 0){
					printf("Case #%d: %s\n", j+1, student[k].name);
					status = 1;
				}
		}
		if(status == 0) printf("Case #%d: N/A\n", j+1);
		status = 0;
	}
	fclose(fp);
	
	return 0;

}
