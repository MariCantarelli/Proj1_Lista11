#include <stdio.h>

int mdc_recursiva(int num1, int num2){
    if(num2 == 0){
        return num1;
    } else {
        mdc_recursiva(num2, num1 % num2);
    }
}

int mdc_iterativa(int num1, int num2){
    while(num2 != 0){
        int resto =  num1 % num2; 
        num1 = num2;
        num2 = resto;
    }
    return num1;
}