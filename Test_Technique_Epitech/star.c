#include <stdio.h>
#include <stdlib.h>

int topStar(int n)
{
    int m, j, k;
    m = n * 2;
    int i;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m - 1; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == 2 * i - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        m--;
        printf("\n");
    }
    return 0;
}
int leftUpStar(int n)
{
    int m, i, j, k;
    m = n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= m; k++)
        {
            if (i == 1 || k == 1)
                printf("*");
            else
                printf(" ");
        }
        m--;

        printf("\n");
    }
    return 0;
}
int bottomStar(int n)
{
    int m, i, j, k;
    m = n;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j < m; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }
        m++;

        printf("\n");
    }
    return 0;
}

int leftBottomStar(int n)
{
    int m, i, j, k;
    m = 1;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= m; k++)
        {
            if (k == 1 || m == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        m++;
    }
    return 0;
}
int rightUpStar(int n)
{
    int m, i, j;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == i || i == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
int rightBottomStar(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == j || i == n)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

int rightside_star(int n)
{
    rightUpStar(n);
    rightBottomStar(n);
    return 0;
}

int leftside_star(int n)
{
    leftUpStar(n);
    leftBottomStar(n);
    return 0;
}
int star(int n)
{
    topStar(n);
    leftside_star(n);
    rightside_star(n);
    bottomStar(n);
    return 0;
}

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
    if (n <= 0)
    {
        return 0;
    }
    star(n);
    return 0;
}
