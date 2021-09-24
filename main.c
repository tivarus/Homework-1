#include <stdio.h>
#include <string.h>
#define N 10
#define err "incorrect number"

int main() {
    char number[N] = {0}, copy[N] = {0};
    scanf("%s", number); //вводим число
    int i = 0, k = 0;
        if((number[i] != '.') & (number[i] != ',') & (strlen(number) < N)) { 
            //задаем оператор if, if выдает ошибку если число слишком большое или в его начале стоит .(,)
            while((number[i] != '.') & (number[i] != ',')) { 
                // последовательно перебираем все числа до точки и записываем их в массив copy
                if(number[i] != '\0') {
                    copy[k] = number[i];
                    i = i+1;
                    k = i;
                    number[i] = number[i];
                }
                else {   
                    //если число задано без точки то выдает ошибку
                    break;
                }
            }
            if((number[i+1] != '\0') &&((number[i+1] != '.') & (number[i+1] != ',')))  { 
                //если в числе две и более точки то выдаст ошибку
                copy[k] = '|';
                i = i+1;
                k = i;
                while(number[i] != '\0') { 
                    //перебираем оставшееся число до \0 и записываем значения в copy
                    copy[k] = number[i];
                    i = i+1;
                    k = i;
                    number[i] = number[i];
                }
                puts(copy); 
                //выводим получившуюся строку

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
