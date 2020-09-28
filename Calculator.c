// Author :- Vriti Shivang
// Program :- Calculator using sitch and break
#include<stdio.h> // include stdio.h library

int main(void)
{       
    int a, b, result;
    char op; // to store the operator
    printf("Author :- Vriti Shivang\nProgram :- Calculator using sitch and break");

    
    printf("\nEnter the value ");
    scanf("%d%c%d", &a, &op, &b);

    switch(op)
    {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;              
    }
    
    printf("Result = %d", result);
    
    return 0; // return 0 to operating system
}


