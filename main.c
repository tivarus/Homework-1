#include <stdio.h>
#include <string.h>
#define N 10
#define ERROR "incorrect number"

int main() {
    char number[N];
    gets(number);
    int i = 0, b;
    if(number[i] == '.' || number[i] == ',' || strlen(number) > N) {
        b = 1;
    }
    else if(number[i] == '-') {
        i = i+1;
    }
    while(number[i] != '.' && number[i] != ',' && b != 1) {
        switch (number[i]) {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                i = i+1;
                break;
            default:
                b = 1;
                break;
        }
    }
    number[i] = '|';
    i = i+1;
    if (number[i] == '\0') {
        b = 1;
    }
    while(number[i] != '\0' && b != 1) {
       switch (number[i]) {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                i = i+1;
                break;
            default:
                b = 1;
                break;
        }
    } 
    if (b !=1) {
        puts(number);
    } 
    else {
        puts(ERROR);
    }
    return 0;
}
