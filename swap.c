include <stdio.h>

int main(void)
{
    int a, b;

    clrscr();
    printf("\nEnter the values of a and b: ");
    scanf("%d %d", &a, &b);
    printf("\nBefore swapping a=%d\tb=%d", a, b);

    // logic begins
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping a=%d\tb=%d", a, b);
    return 0;
}
