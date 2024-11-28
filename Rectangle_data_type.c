// Create an user defined data type of Rectangle using struct and then dynamically allocate heap memory to use it using pointers 
#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle *p=(struct Rectangle*)malloc(sizeof(struct Rectangle));
    double area,perimeter;
    printf("Enter the length of the Rectangle \n ");
    scanf("%d",&(p->length));
    printf("\n Enter breadth of the Rectangle \n ");
    scanf("%d",&(p->breadth));
    area=((p->length)*(p->breadth));
    perimeter=2*((p->length)+(p->breadth));
    printf("\n The area of the rectangle is given by : %lf ",area);
    printf("\n The perimeter of the rectangle is given by : %lf ",perimeter);
    free(p);
    return 0;
}
