#include <stdio.h>
#include <conio.h>
int main()
{
    int top, x, arr[5];
    for (top = 0; top <= 5; top++)
        if (top == 5)
        {
            printf("Stack is full.\n");
        }

        else
        {
            printf("Enter an element: ");
            scanf("%d", &x);
            arr[top] = x;
        }

    for (top = 4; top >= -1; top--)
        if (top == -1)
        {
            printf("Stack is empty.");
        }

        else
        {
            printf("Elements in the stack are %d\n", arr[top]);
        }

    return 0;
}