#include <stdio.h>
#include <string.h>

struct data{
    char name[51];
    int amount;
};

int search(char find[], int n, struct data stock[]) {
    int res = -1, i;
    for(i = 0; i < n; i++){
        if(strcmp(find, stock[i].name) == 0){
            res = i;
            return res;
        }
    }
    return res;
}

int main(){
	
    FILE *fp = fopen("testdata.in", "r");
    
    int t,tc, i, j;
    
    fscanf(fp, "%d\n", &t);
    for(i = 0; i < t; i++){
        fscanf(fp, "%d\n", &tc);
        struct data temp_stock, stock[tc];
        int totalBarang = 0;
        char doing[100];
        
        for(j = 0; j < tc; j++){
            fscanf(fp, "%[^#]#%[^#]#%d\n", doing, temp_stock.name, &temp_stock.amount);
            
			int result = search(temp_stock.name, totalBarang, stock);
            
			if(result == -1){ 
                strcpy(stock[totalBarang].name, temp_stock.name);
                if(strcmp(doing, "sell") == 0){
                    stock[totalBarang].amount = -temp_stock.amount;
                }
				else if(strcmp(doing, "buy") == 0){
                    stock[totalBarang].amount = temp_stock.amount;
                }
                totalBarang++;
            }
			
			else if(result != -1){ 
                if(strcmp(doing, "sell") == 0){
                    stock[result].amount -= temp_stock.amount;
                }
				else if(strcmp(doing, "buy") == 0){
                    stock[result].amount += temp_stock.amount;
                }
            }
        }

        printf("Case #%d:\n", i+1);

        int status = 0;
        for(j = 0; j < totalBarang; j++){
            if(stock[j].amount < 0){
                printf("stock is not enough for product %s\n", stock[j].name);
                status = 1;
            }
        }
        if(status == 0){
            for(j = 0; j < totalBarang; j++){
                printf("%s - %d\n", stock[j].name, stock[j].amount);
            }
        }


    }
    return 0;
}
