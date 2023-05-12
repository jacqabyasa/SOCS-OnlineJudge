#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data {
	char shrt[51], og[51];
	
};

// Function to replace a string with another
// string
char* replaceWord(const char* s, const char* oldW,
                  const char* newW)
{
    char* result;
    int i, cnt = 0;
    int newWlen = strlen(newW);
    int oldWlen = strlen(oldW);
  
    // Counting the number of times old word
    // occur in the string
    for (i = 0; s[i] != '\0'; i++) {
        if (strstr(&s[i], oldW) == &s[i]) {
            cnt++;
  
            // Jumping to index after the old word.
            i += oldWlen - 1;
        }
    }
  
    // Making new string of enough length
    result = (char*)malloc(i + cnt * (newWlen - oldWlen) + 1);
  
    i = 0;
    while (*s) {
        // compare the substring with the result
        if (strstr(s, oldW) == s) {
            strcpy(&result[i], newW);
            i += newWlen;
            s += oldWlen;
        }
        else
            result[i++] = *s++;
    }
  
    result[i] = '\0';
    return result;
}
  

int main(){
	
	int t, tc, i, j, k1, k;
	
	FILE *fp = fopen("testdata.txt", "r");
	fscanf(fp, "%d\n", &t);
	
	struct data d[t];
	
	for(i=0; i<t; i++){
		fscanf(fp, "%[^#]#%[^\n]\n", &d[i].shrt, &d[i].og);
	}
	
	fscanf(fp, "%d\n", &tc);
	char sent[tc][101];
	
	for(j=0; j<tc; j++){
		fscanf(fp, "%[^\n]\n", &sent[j]);
	}
	
	char* result = NULL;
	for(k=0; k<tc; k++){

		for(k1=0; k1<t; k1++){
		result = replaceWord(sent[k], d[k1].shrt, d[k1].og);
		}
		printf("Case #%d: %s\n", k+1, result);
		char* result = NULL;
	}
	
	return 0;
}
