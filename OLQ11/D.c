#include <stdio.h>
#include <string.h>


int main(){
	
	int t, tc, i, j, k, k1, q, y, y1, c, xy;
	
	FILE *fp;
	fp = fopen("testdata.in", "r");
	fscanf(fp, "%d\n", &t);
	
	for(i=0; i<t; i++){
	char str[105] = {0};
	
	fscanf(fp, "%s\n", &str);
	
	int x = strlen(str);
	int counter[26] = {0};
	int checker[26] = {0};
	fscanf(fp, "%d\n", &tc);
	char a[tc], b[tc];
	for(j=0; j<tc; j++){
		fscanf(fp, "%c %c\n", &a[j], &b[j]);
		if(checker[a[j] - 'A'] == 0){
			for(k=0; k<x; k++){
			if(str[k] == a[j]){
			str[k] = b[j];
			}
			}
			checker[a[j] - 'A']++;
	}
}
		

	
	for(c=0; c<x; c++){
      if (str[c] >= 'A' && str[c] <= 'Z') {
         xy = str[c] - 'A';
         counter[xy]++;
      }
  	}

	for(q=0; q<26; q++){ 
		if(counter[q] != 0) printf("%c %d\n", q + 'A', counter[q]);
	}

}
	fclose(fp);
	
	return 0;
	
}
	
	
	
	
	
	
