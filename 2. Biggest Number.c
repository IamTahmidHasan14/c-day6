#include<stdio.h>
int main()
{
    int n,i;
    float x,big=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter %d numbers :\n", n);
    printf("Element 1: ");

    scanf("%f", &big);

    for(i=2; i<=n; i++)
    {
        printf("Element %d: ", i);
        scanf("%f", &x);

        if(big < x)
            big = x;
    }
    printf("\nThe largest of the %d numbers is  %.2f ", n, big);
    return 0;
}
