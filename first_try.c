#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int top =-1;
int size = 3;

// ------------Current_element function----------//
int current_ele(int arr[], int size)
{
       printf(">>> Current elements in stack\n");
    for(int i=size-1; i>=0; i--)
    {
        printf("\t%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

// -------------Push function-----------------//
int push(int arr[] ,int top ,int size)
{
    if(top <size-1)
    {
        int e;
        printf(">>> Enter the element you want to add:\n->> ");
        scanf("%d",&e);

        top ++;
        arr[top] =e;
        printf(">>> %d is added..!\n",e);
        current_ele(arr,size);
    return top;

    }
    else
    {
        printf("\n!..Stack is over flo.!\n\n");
        current_ele(arr,size);
        return top;
    }
}

// -------------Pop function-----------------//
int pop(int arr[], int top)
{
    if(!(top == -1))
    {
        printf(">>> %d is poped\n",arr[top]);
        arr[top]=0;
        top--;
        return top;
    }
    else
    {
        printf("\n!..Stack is Empty..!\n");
        return top;
    }
}

// -------------Peep function-----------------//
int peep(int arr[],int top)
{
    int i;
    printf(">>> Which Element is you want to see?\n->> ");
    scanf("%d",&i);
    if((top-i)+1 > -1)
    {
        printf(">>> Here is your Element -> %d\n",arr[(top-i)+1]);
    }
    else
    {
        printf("\n!..Invalid Index number..!\n");
    }
    return 0;
}

// -------------Change_element function-----------------//
int change_ele(int arr[],int top)
{
    int i;
    printf(">>> Which Element is you want to change?\n->> ");
    scanf("%d",&i);
    if((top-i)+1 > 0 && i < size)
    {
        int new,old_temp;
        char c;
        printf(">>> Enter the new value.\n");
        scanf("%d", &new);
        
        old_temp = arr[top-i+1];
        arr[top-i+1] = new;
        printf(">>> Here your Element value is changed.\n");
        printf(">>> Old value :: %d | New value :: %d \n",old_temp ,new);

/*
        printf(">>> Are you wanna to the last change? (y/n)\n");
        c = getchar();
        if(c == 'y' || c == 'Y')
        {
            printf(">>> Old value :: %d | New value :: %d \n",old_temp ,new);
        }
        else
        {return 0;} */
    }
    else
    {
        printf("\n!..Invalid Index number..!\n");
    }
    return 0;
}
// --------------Wish List----------------//
void wish_list()
{
printf("\n-------------------------------------------\n");
printf("You have following wishes ('~')\n");
printf("1. for Push(Insert) the element\n");
printf("2. for Pop(Delete) the element\n");
printf("3. for Peep the element\n");
printf("4. for See the Current element present in Stack\n");
printf("5. for Change the element.\n");
printf("0. for Exit.\n");
printf("-------------------------------------------\n");
}

// -------------Main function-----------------//
int main()
{
    int wish=10;
    int stack[3]={};
wish_list();
while(wish <= 10)
{
    printf("\n>>> Enter your wish.\n->> ");
    scanf("%d",&wish);

    switch(wish)
    {
        case 1:
        top = push(stack, top, size);
        break;

        case 2:
        top = pop(stack, top);
        break;

        case 3:
        peep(stack,top);
        break;

        case 4:
        current_ele(stack,size);
        break;

        case 5:
        change_ele(stack,top);
        break;

        case 0:
        printf("\n----------\nUse Again.\n----------\n");
        exit(0);

        default:
        printf("!..You wish is INVALID..!\n");
        wish_list();
        
    }
} 
 
    getch();
    return 0;
}
