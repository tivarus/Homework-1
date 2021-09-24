#include <stdio.h>
#include <string.h>
#define N 10
#define err "incorrect number"

int main() {
    char number[N] = {0}, copy[N] = {0};
    scanf("%s", number);
    int i = 0, k = 0;
        if((number[i] != '.') & (number[i] != ',') & (strlen(number) < N)) {
            while((number[i] != '.') & (number[i] != ',')) {
                if(number[i] != '\0') {
                    copy[k] = number[i];
                    i = i+1;
                    k = i;
                    number[i] = number[i];
                }
                else {
                    break;
                }
            }
            if((number[i+1] != '\0'))  {
                copy[k] = '|';
                i = i+1;
                k = i;
                while(number[i] != '\0') {
                    copy[k] = number[i];
                    i = i+1;
                    k = i;
                    number[i] = number[i];
                }
                puts(copy);

            }
            else {
            puts(err);
            }
        }
        else {
            puts(err);
        }
    return 0;
}
