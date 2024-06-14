#include <stdio.h>
#include <ctype.h>

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if (top == -1)
        return '\0'; ,
    else
        return stack[top--];
}

int priority(char x)
{
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{
    char exp[100];
    char *e, x;
    printf("Enter the expression : ");
    scanf("%s", exp);
    printf("\n");
    e = exp;

    while (*e != '\0')
    {
        if (isalnum(*e))
            printf("%c ", *e);
        else if (*e == '(')
            push(*e);
        else if (*e == ')')
        {
            while ((x = pop()) != '(')
            {
                if (x != '\0') // Check for empty stack
                    printf("%c ", x);
                else
                {
                    printf("Error: Mismatched parentheses\n");
                    return 1;
                }
            }
        }
        else
        {
            while (priority(stack[top]) >= priority(*e))
            {
                if (stack[top] != '\0') // Check for empty stack
                    printf("%c ", pop());
                else
                {
                    printf("Error: Invalid expression\n");
                    return 1;
                }
            }
            push(*e);
        }
        e++;
    }

    while (top != -1)
    {
        if (stack[top] != '\0') // Check for empty stack
            printf("%c ", pop());
        else
        {
            printf("Error: Mismatched parentheses\n");
            return 1;
        }
    }
    return 0;
}
