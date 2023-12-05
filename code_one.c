#include <stdio.h>
#define MAX_SIZE 100
typedef struct
{
int x;
int y;
} Point;
void print_point(Point *p)
{
printf("(%d, %d)\n", p->x, p->y);
}
int main()
{
Point point;
point.x = 5;
point.y = 10;
print_point(&point);
return 0;
}
