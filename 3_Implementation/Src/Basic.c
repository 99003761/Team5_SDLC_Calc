#include"Basic.h"

#define KEY "Enter the calculator Operation you want to do:"

//start main function
int main()
{
    char Calc_oprn;
    while(1)
    {
        printf("%s : ", KEY);
        //getting the key from the keyboard
        Calc_oprn=getchar();
 
        switch(Calc_oprn)
        {
            case '+': addition();
                      break;
 
            case '-': subtraction();
                      break;
 
            case '*': multiplication();
                      break;
 
            case '/': division();
                          break;
            case '^': square();
                      break;
        }
    }
    return 0;
}
//addition function
void addition(){
    //declaring the variables 
    int variable1,variable2,result;
    printf("enter number");
    //reading the variable
    scanf("%d",&variable1);
    printf("enter second number");
    //reading the variable
    scanf("%d",&variable2);
    //calculation 
    result=variable1+variable2;
    //printing the result
    printf("%d",result);
}
//subtraction function
 void subtraction()
{ 
    //declaring the variables 
    int variable1, variable2, result; 
    printf("\nPlease enter first number  : "); 
     //reading the variable
    scanf("%d", &variable1); 
    printf("Please enter second number : "); 
     //reading the variable
    scanf("%d", &variable2); 
    //calculation 
    result = variable1 - variable2; 
    //printing the result
    printf("\nsubtraction of entered numbers = %d\n", result); 
}
 
void multiplication()
{
    int variable1,variable2, result; 
    printf("\nPlease enter first numb   : "); 
     //reading the variable
    scanf("%d", &variable1); 
    printf("Please enter second number: "); 
     //reading the variable
    scanf("%d", &variable2);
    //calculation 
    result=variable1*variable2;
    //printing the result
    printf("\nMultiplication of entered numbers = %d\n",result);
}
 
void division()
{
    int variable1, variable2, result; 
    printf("\nPlease enter first number  : "); 
     //reading the variable
    scanf("%d", &variable1); 
    printf("Please enter second number : "); 
     //reading the variable
    scanf("%d", &variable2);
    //calculation 
    result=variable1/variable2;
    //printing the result
    printf("\nDivision of entered numbers=%d\n",result);
}
void square()
{
    int number,result;
    printf("\nPlease enter number  : "); 
     //reading the variable
    scanf("%d", &number);
    //calculation 
    result=number*number;
    //printing the result
    printf("\nsquar of given number=%d\n",result);
}
