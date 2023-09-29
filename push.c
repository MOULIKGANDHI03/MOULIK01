#include <stdio.h>
#include <conio.h>
int main()
{
    int top, x, arr[5];
    for (top = 0; top <= 5; top++)
        if (top == 5)
        {
            printf("Stack is full now.You cannot push anymore elements.\n");
        }

        else
        {
            printf("Enter an element: ");
            scanf("%d", &x);
            arr[top] = x;
        }

        return 0;
}