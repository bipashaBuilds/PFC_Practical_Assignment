#include <stdio.h>
int main(){
 int a = 10;
 float b= 3.14f;
 char c = 'A';
 double d =98.7654321;
printf("value of a: %d\n",a);
 printf("Value of b:%f\n",b);
 printf("Value of c:%c\n",c);
 printf("Value of d:%lf\n",d);
 printf("\nsize of a:%zu bytes\n",sizeof(a));
 printf("\nSize of b:%zu bytes\n",sizeof(b));
 printf("\nSize of c:%zu bytes\n",sizeof(c));
 printf("\nSize of d:%zu bytes\n",sizeof(d));
return 0;
}
/*
OUTPUT
value of a: 10
Value of b:3.140000
Value of c:A
Value of d:98.765432

size of a:4 bytes

Size of b:4 bytes

Size of c:1 bytes

Size of d:8 bytes
*/