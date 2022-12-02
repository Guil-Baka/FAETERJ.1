#include <stdio.h>
#include <windows.h>

int main(int argc, char const *argv[])
{
  for (int m = 0; m < 60; m++)
  {
    printf("%d", m);
    for (int s = 0; s < 60; s++)
    {
      printf("%d ", s);
    }
  }
  
  return 0;
}
