#include <stdio.h>
#include <string.h>


struct info {
	char name[60];
	char number[11];
};

int main(){

		FILE *fp;
		fp = fopen("testdata.in", "r");
		
		int t, i, j, j1, n, k, q, q1, k1;
		fscanf(fp, "%d\n", &n);
		struct info data[n], temp, temp1;

		for(j=0; j<n; j++){
		fscanf(fp, "%s %s\n", &data[j].number, &data[j].name);
		
		}
	
	for (q = 0; q < n; q++){
        for (k = 0; k < n-1; k++){
        	
			if(strcmp(data[k].number,data[k+1].number) > 0){
	            temp = data[k]; 
				data[k] = data[k+1]; 
				data[k+1] = temp;
			}	
			}
		}
		
		for(j1=0; j1<n; j1++){
			printf("%s %s\n", data[j1].number, data[j1].name);
		}
		fclose(fp);


return 0;
}


