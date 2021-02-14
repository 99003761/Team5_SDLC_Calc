#include "trigno.h"

#define PI 3.1423

float sine_fun(float var)
{
    return (sin(var));
}

float cosine_fun(float var)
{
    return (cos(var));
}
float tan_fun(float var)
{
    return (tan(var));
}
float cot_fun(float var)
{
    return (1/tan(var));
}
float sec_fun(float var)
{
    return (1/cos(var));
}
float cosec_fun(float var)
{
    return (1/sin(var));
}



int main(){
int choice;
float input,var,res;
 do{
printf("\nenter choice 1:sine\n 2:cos\n 3:tan\n 4:cosec\n  5:sec\n   6:cot\n    7:exit\n");
scanf("%d",&choice);
if(choice!=7)
{
    printf("enter input\n");
scanf("%f",&input);
var=(input)*(PI/180);
}
 switch (choice)
 {
 case 1:
        res=sine_fun(var);
        printf("res== %f",res);
        break;

 case 2:res=cosine_fun(var);
        printf("res== %f",res);
        break;

case 3:res=tan_fun(var);
       printf("res== %f",res);
        break;

case 4:res=(cosec_fun(var));
        printf("res== %f",res);
        break;
case 5:
        res=(sec_fun(var));
        printf("res== %f",res);
         break;
case 6:
        res=(cot_fun(var));
        printf("res== %f",res);
         break;
 }

 }while (choice!=7);
return 0;
}
