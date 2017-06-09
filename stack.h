#define SIZE 5

int a[SIZE];
top = -1;

void push (int x)
{
    if (top >= SIZE - 1)
        printf("Stack Overflow!\n");
    else
    {
        top++;
        a[top] = x;
    }
}

int pop ()
{
    if (top == -1)
        printf("Stack Underflow!\n");
    else
    {
        top--;
        return a[top];
    }
}

void display()
{
    int i;
    if (top == -1)
        printf("Stack is Empty!\n");
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("%d ", a[i]);
        }
    }
}
