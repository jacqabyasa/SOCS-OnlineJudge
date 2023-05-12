#include <stdio.h>

#define ull unsigned long long

ull binary(ull left, ull right, ull n) {

    while(left <= right) {

        ull mid = left + (right - left)/2;

        if((mid*(mid + 1)*(2*mid + 1)/6) == n) {
            return mid;
        }

        if(((mid*(mid + 1)*(2 * mid + 1))/6) > n) {
            return binary(left, mid-1, n);
        }

        if((mid*(mid + 1)*(2*mid+1)/6) < n) {
            return binary(mid+1, right, n);
        }
    }
    return right+1;
}

int main() {
    int tc, i;
    scanf("%d", &tc);
    for(i = 0; i < tc; i++){
        ull x;
        scanf("%llu", &x);
        ull result = binary(1, 1500000, x);
        printf("Case #%d: %llu\n", i+1, result);
    }
    return 0;
}
