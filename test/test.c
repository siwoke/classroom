#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int a[n];
    int i, j;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (a[i] > a[j])
            {
                char t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    double average = 1.0 * sum / n;
    double max = a[n - 1];
    double min = a[0];

    printf("average = %.2lf\nmax = %.2lf\nmin = %.2lf", average, max, min);

    return 0;
}