#include <stdio.h>

int main() {
    char* name = malloc(sizeof(char)*1000);
    int age;
    char* hobby = malloc(sizeof(char)*1000);
    scanf("%s",name);
    scanf("%i",age);
    scanf("%s",hobby);
    printf("Name: %s\nAge: %i\nHobby: %c",name,age,hobby);
    return 0;
}