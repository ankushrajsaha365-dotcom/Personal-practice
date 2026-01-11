#include <stdio.h>
int main()
{
 int i = 0;
  while (i < 2)
	{
    if (i == 1)
	break;			
    i++;
    if (i == 1)
    continue;
    printf("In while loop\n");
    }
printf("After loop\n");
return 0;
}
