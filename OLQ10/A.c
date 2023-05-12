#include <stdio.h>
#include <string.h>


struct info {
	char name[60];
	int number;
};

int main(){
	int t, i, j, j1, n, k, q, q1, k1;
	
	scanf("%d", &t);
	for(i=0; i<t; i++){
		scanf("%d", &n);
		struct info data[n], temp, temp1;

		for(j=0; j<n; j++){
		scanf("%[^#]s", &data[j].name);
		getchar();
		scanf("%d", &data[j].number);
		}
		
	for (q = 0; q < n - 1; q++)
    {
        for (k = 0; k < (n - 1-q); k++)
        {
			if (data[k].number < data[k+1].number){
				temp = data[k]; 
				data[k] = data[k+1]; 
				data[k+1] = temp;
			}	
		}
	}
	
	for (q1 = 0; q1 <= n; q1++){
        for (k1 = 0; k1 <= n; k1++){
        	
        	if (data[k1].number == data[k1+1].number){
			if(strcmp(data[k1].name,data[k1+1].name) > 0){
	            temp1 = data[k1]; 
				data[k1] = data[k1+1]; 
				data[k1+1] = temp1;
			}	
				
			}
		}
	}	
		printf("Case #%d:", i+1);
		for(j1=0; j1<n; j1++){
			printf("%s - %d", data[j1].name, data[j1].number);
		}
		printf("\n");
	}

return 0;
}
