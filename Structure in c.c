#include<stdio.h>
struct Employee
{
    int id;
  float marks;

};
int main()
{
    struct Employee e1;
    e1.id =12;
    e1.marks=43.4;

    printf("%d\n",e1.id);
    printf("%f\n", e1.marks);
     return 0;
}
