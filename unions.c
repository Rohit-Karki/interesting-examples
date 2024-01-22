#include <stdio.h>

typedef struct my_struct
{
    int x;
    int f;
    char names[20];
};
typedef union my_union
{
  int x;
  float f;
  char names[20];
};

int main()
{
    union my_union unions;
    struct my_struct my_structs;
    strcpy(&unions.names, "Rohit raj");
    printf("Size of union is %d\n", sizeof(unions));
    printf("Size of struct is %d\n", sizeof(my_structs));
}
