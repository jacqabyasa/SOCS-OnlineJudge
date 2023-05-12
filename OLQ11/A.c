#include <stdio.h>
#include <string.h>

struct data {
	char name[50], plant[50];
	
};
int main(){
	
	int t, tc, i, j, j1, k;
	
	FILE *fp = fopen("testdata.in", "r");
	fscanf(fp, "%d\n", &t);
	
	struct data tree[t];
	
	for(i=0; i<t; i++){
		fscanf(fp, "%[^#]#%[^\n]\n", &tree[i].name, &tree[i].plant);
	}
	
	fscanf(fp, "%d\n", &tc);
	char planter[tc][50];
	
	for(j=0; j<tc; j++){
		fscanf(fp, "%[^\n]\n", &planter[j]);
	}
	int status = 0;
	for(k=0; k<tc; k++){
		for(j1=0; j1<t; j1++){
				if(strcmp(planter[k], tree[j1].name) == 0){
					printf("Case #%d: %s\n", k+1, tree[j1].plant);
					status = 1;
				}
		}
		if(status == 0) printf("Case #%d: N/A\n", k+1);
		status = 0;
	}
	fclose(fp);
	
	return 0;

}
