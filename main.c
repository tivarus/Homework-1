#include <stdio.h>
#include <string.h>
#define N 10
#define err "incorrect number"

int main() {
    char number[N];
    scanf("%s", number); //вводим число в массив
    int i = 0;
        if((number[i] != '.') & (number[i] != ',') & (strlen(number) < N)) {
            //задаем оператор if, if выдает ошибку если число слишком большое или в его начале стоит .(,)
            while((number[i] != '.') & (number[i] != ',')) {
                // последовательно перебираем все числа до точки и записываем их в массив
                if(number[i] != '\0') {
                    i = i+1;
                    number[i] = number[i];
                }
                else {
                    //если число задано без точки то выдает ошибку
                    break;
                }
            }
            if((number[i+1] != '\0') &&((number[i+1] != '.') & (number[i+1] != ',')))  {
                    //если в числе две и более точки то выдаст ошибку
                number[i] = '|';
                i = i+1;
                while(number[i] != '\0') {
                    //перебираем оставшееся число до \0 и записываем значения в массив
                    i = i+1;
                    number[i] = number[i];
                }
                puts(number);
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
