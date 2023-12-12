#include <stdio.h>
#define MAX_SIZE 100
/**
* print_point - Prints the coordinates (x, y) of a point
* @x: The x-coordinate of the point
* @y: The y-coordinate of the point
*/
void print_point(int x, int y)
{
printf("(%d, %d)\n", x, y);
}
/**
* main - Entry point of the program
* Return: 0 for successfull excution
*/
int main(void)
{
int x = 5;
int y = 10;
/*Print the coordinates of the point*/
print_point (x, y);
return (0);
}
