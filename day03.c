#include<stdio.h>
//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

int main(){
    int length, breadth;
    printf("Enter the length:\n");
    scanf("%d", &length);
    printf("Enter the breadth:\n");
    scanf("%d", &breadth);
    printf("Area of the reactangle is:%d\n", breadth*length);
    printf("Perimeter of the rectangle is:%d\n", breadth*2 + length*2);
    return 0;

}