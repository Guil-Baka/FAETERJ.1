#include <stdio.h>

void main ()
{
int A, B, C=0;
float D;
A = 0;
B = 1;
while (A <= 10)
{
if ((B - A) % 2 == 0)
{
A++;
}
else
{
A = A + 2;
}
B *= 2;
C += B-1;
printf ("A = %d\n", A);
printf ("B = %d\n", B);
printf ("C = %d\n\n", C);
}
D = C/A;
printf ("D = %.2f\n", D);
}