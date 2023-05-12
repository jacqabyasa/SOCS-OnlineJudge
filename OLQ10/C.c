#include <stdio.h>
#include <string.h>
#define FILENAME "testdata.in"

struct info {
	char name[1010];
	double number;
	char metric;
	double universal;
};

int countlines() {
   FILE *fp;
   char ch;
   int linesCount=0;
   //open file in read more
   fp=fopen(FILENAME,"r");
   if(fp==NULL) {
      printf("File \"%s\" does not exist!!!\n",FILENAME);
      return -1;
   }
   //read character by character and check for new line
   while((ch=fgetc(fp))!=EOF) {
      if(ch=='\n')
         linesCount++;
   }
   //close the file
   fclose(fp);
  
   return linesCount;
}

int main(){
	int t, i, j, j1, n, k, q, q1, k1, w;
	char c;
	
		n = countlines("testdata.in");
				
		FILE *fp;

		fp = fopen("testdata.in", "r");
		
		struct info data[n], temp, temp1;
	
		for(j=0; j<n; j++){
		fscanf(fp, "%[^#]s", &data[j].name);
		fscanf(fp, "#%lf", &data[j].number);
		fscanf(fp, "#%c",  &data[j].metric);
		fscanf(fp, "\n");
		}
		
		fclose(fp);
		
	for (w = 0; w < n; w++){
       if(data[w].metric == 'C') data[w].universal = data[w].number;
       else if(data[w].metric == 'F') data[w].universal = (data[w].number - 32)*5/9;
		}
	
	
	for (q = 0; q < n - 1; q++){
        for (k = 0; k < (n - 1-q); k++){
			if (data[k].universal > data[k+1].universal){
				temp = data[k]; 
				data[k] = data[k+1]; 
				data[k+1] = temp;
			}	
		}
	}
	
	for (q1 = 0; q1 < n-1; q1++){
        for (k1 = 0; k1 < n-q1-1; k1++){
        	
        	if (data[k1].universal == data[k1+1].universal){
			if(strcmp(data[k1].name, data[k1+1].name) > 0){
	            temp1 = data[k1]; 
				data[k1] = data[k1+1]; 
				data[k1+1] = temp1;
			}	
				
			}
		}
	}	
		
		for(j1=0; j1<n; j1++){
			printf("%s is %.2lf%c\n", data[j1].name, data[j1].number, data[j1].metric);
			
		}
		
		

return 0;
}
