#include <stdio.h>
#include <string.h>
 

void palindrome(char str[1001]){
   
    int left = 0;
    int right = strlen(str) - 1;
 
    
    while (right > left)
    {
        if (str[left++] != str[right--])
        {
            printf("Nah, it's not a palindrome\n", str);
            return;
            
        }
    }
    printf("Yay, it's a palindrome\n", str);
    return 0;
}
 
int main()
{
	int i, n;
	char word[1001];
	scanf("%i", &n);
	for (i=0; i<n; i++){
		scanf ("%s", &word);
		printf("Case #%i: ", i+1);
    palindrome(word);}
    return 0;
}
