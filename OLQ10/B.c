#include <stdio.h>
#include <string.h>


struct info {
	char name[60];
	int number;
};

int main(){

		
		FILE *fp;
		fp = fopen("testdata.in", "r");
		
		int t, i, j, j1, n, k, q, q1, k1;
		fscanf(fp, "%d", &n);
		struct info data[n], temp, temp1;

		for(j=0; j<n; j++){
		fscanf(fp, "%d#%[^\n]\n", &data[j].number, &data[j].name);
		
		}
	
	
	for (q = 0; q < n; q++){
        for (k = 0; k < n; k++){
        	
			if(strcmp(data[k].name,data[k+1].name) > 0){
	            temp = data[k]; 
				data[k] = data[k+1]; 
				data[k+1] = temp;
			}	
				
			}
		}
		
		
		for(j1=0; j1<n; j1++){
			printf("%d %s\n", data[j1].number, data[j1].name);
		}
		fclose(fp);


return 0;
}
