#include <stdio.h>
#include <string.h>
#include<stdlib.h>


struct info {
	char name[1005];
	char artist[1005];
	int number;
};


int main(){
		
		FILE *fp;
		fp = fopen("testdata.in", "r");
		
		int t, i, j=0, j1, k, q, q1, k1, n = 0;
		struct info data[1001], temp, temp1;

		while(!feof(fp)){
		fscanf(fp, "%[^#]#%[^#]#%d\n", &data[j].name, &data[j].artist, &data[j].number);
		n++;
		j++;
		
		}
	
	
	for (q = 0; q < n-1; q++){
        for (k = 0; k < n-1-q; k++){
        	
			if(data[k].number < data[k+1].number){
	            temp = data[k]; 
				data[k] = data[k+1]; 
				data[k+1] = temp;
			}	
				
			}
		}
		
	for (q1 = 0; q1 < n-1; q1++){
        for (k1 = 0; k1 < n-1-q1; k1++){
        	
        	if (data[k1].number == data[k1+1].number){
			if(strcmp(data[k1].name,data[k1+1].name) > 0){
	            temp1 = data[k1]; 
				data[k1] = data[k1+1]; 
				data[k1+1] = temp1;
			}	
				
			}
		}
	}	
		
		for(j1=0; j1<n; j1++){
			printf("%s by %s - %d\n", data[j1].name, data[j1].artist, data[j1].number);
		}
		fclose(fp);

return 0;
}
