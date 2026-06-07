#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter number of activities: ");
    scanf("%d", &n);

    int s[n], f[n];

    // Input start times
    printf("Enter start times:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
    }

    // Input finish times
    printf("Enter finish times:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &f[i]);
    }

    printf("\nSelected Activities without overlapping are:\n");

    // First activity is selected
    printf("Activity 1 -> (%d , %d)\n", s[0], f[0]);

    j = 0;

    // Select remaining compatible activities
    for(i = 1; i < n; i++)
    {
        if(s[i] >= f[j])
        {
            printf("Activity %d -> (%d , %d)\n",
                   i + 1, s[i], f[i]);

            j = i;
        }
    }

    return 0;
}