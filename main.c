#include <stdio.h>
//質數判別
int main(){
    int num;
    int oupt = 1;
    scanf("%d", &num);
    if (num == 1) {
        oupt = 1;
    }
    else {
        for (int i=2; i<num; i++) {
            if (num % i == 0) {
                oupt = 0;
            }
        }
    }
    
    if (oupt == 1) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
