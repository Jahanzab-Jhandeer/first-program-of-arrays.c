#include<stdio.h>

int main () {

    int marks[3];

    printf("enter the physics :");
    scanf("%d" , &marks[0]);

    printf("enter the mathematics :");
    scanf("%d" , &marks[1]);

    printf("enter the chemistry :");
    scanf("%d" , &marks[2]);

    printf("physics = %d, Mathematics = %d, Chemistry = %d\n" , marks[0], marks[1], marks[2]);

return 0;
}