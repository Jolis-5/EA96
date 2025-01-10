//
// Created by usuario on 09/01/2025.
//

#include <stdio.h>
#include <string.h>

void getInput(char* phrase) {
    printf("Introduce una cadena: ");
    scanf("%s",phrase);
}



void reserveString(char*original, char*reserved) {

    int lon= strlen(original);

    for (int i=0 ; i <= lon ; i ++){
        reserved[i] = original[lon -1 -i];


    }
}






int main() {
    char phrase[30];
    char reserved[30];
    getInput(phrase);
    reserveString(phrase, reserved);
    printf("La cadena invertida es: %s", reserved);


    return 0;
}