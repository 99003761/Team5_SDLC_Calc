#include <stdio.h>

int check_binary(int copy) {
    int temp = 0;
    while (copy != 0) {
        temp = copy % 10;

        if ((temp == 0) || (temp == 1)) {
            copy = copy / 10;
            if (copy == 0)
            {
                printf("valid binary number.\n");
                return 1;
                break;
            }
        }
        else {
            printf("Invalid Bin\n");
            return 0;
            break;
        }
    }
}
int check_octal(long n) 
{ 
    while (n) 
    { 
        if ((n % 10) >= 8) 
            return 0; 
        else
            n = n / 10; 
    } 
    return 1; 
}
void convert_to_x_base(int num, int base)
{    
    int rem;

    // base condition
    if (num == 0)
    {
        return;
    }

    else
    {
        rem = num % base; // get the rightmost digit        
        convert_to_x_base(num/base, base);  // recursive call        
        if(base == 16 && rem >= 10)
        {
            printf("%c", rem+55);
        }

        else
        {
            printf("%d", rem);
        }
    }

}
float temp_C_F(float c)
{
    float f;
    f = c * 9/5 + 32;
    return f;
}
float temp_F_C(float f)
{
    float c;
    c = (f - 32) * 5/9;
    return c;
}

float Len_M_F(float m)
{
    float f;
    f = 3.2808399 * m;
    return f;
}
float Len_F_M(float f)
{
    float m;
    m = f / 3.2808399;
    return m;
}
float current_DC_AC(float dc)
{
    float ac;
    ac=dc/0.636;
    return ac;
}
float current_AC_DC(float ac)
{
    float dc;
    dc=ac*0.636;
    return dc;
}

int main() 
{
    int num1,val=0,ch1=0; 
    int num, choice=0, base,choice2=0;
    float f,c,m,ft,dc,ac;

    while(1)
    {
        
        printf("Select conversion Type: \n");
        printf("1. BASE Conversion\n");
        printf("2. Units Conversion\n\n");
        scanf("%d",&ch1);
                  
        switch(ch1)
        {
            case 1:
                    printf("1. Decimal to Binary. \n");
                    printf("2. Decimal to Octal. \n");
                    printf("3. Decimal to Hexadecimal. \n");
                   // printf("4. Binary to Decimal. \n");
                   // printf("5. Hexadecimal to Decimal. \n");
                   // printf("6. Octal to Decimal. \n"); 
                    printf("7. Exit. \n");
                    printf("\nEnter your choice: ");
                    scanf("%d", &choice);
                    break;
            case 2:
                    printf("1.Convert Celsius to Fahrenheit  \n");
                    printf("2.Convert Farenheit to Celcius  \n");
                    printf("3.Convert Meter to Feet  \n");
                    printf("4.Convert Feet to Meter  \n");
                    printf("5.Convert AC to DC  \n");
                    printf("6.Convert DC to AC   \n");
                    printf("7. Exit. \nselect Choice : ");
                    scanf("%d", &choice2);
                    goto sw;
                   break;                              
            default:
                printf("Invalid choice.\n");
                continue;
        }
        switch(choice)
        {
            case 1:
                base = 2;
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Result = ");
                convert_to_x_base(num, base);
                printf("\n");
                break;
            case 2:
                base = 8;
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Result = ");
                convert_to_x_base(num, base);
                printf("\n");
                break;
                
                break;              
            case 3:
                base = 16;
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Result = ");
                convert_to_x_base(num, base);
                printf("\n");
                break;
                
                break;
            case 4:
                
                break;
            case 5:
                
                break;
            case 6:
                
                break;    
            case 7:
                printf("Exiting ...");
                exit(1);
            default:
                //printf("Invalid choice.\n");
                continue;
        }
    sw:    switch(choice2)
        {
            case 1:
                printf("Enter Temp in C\n");
                scanf("%f",&c);
                f=temp_C_F(c);
                printf("Temp in Fer=%f\n",f);
                break;
            case 2:
                printf("Enter Temp in F\n");
                scanf("%f",&f);
                c=temp_F_C(f);
                printf("Temp in Cel=%f\n",c);
                break;              
            case 3:
                printf("Enter Length in meter\n");
                scanf("%f",&m);
                ft=Len_M_F(m);
                printf("Length in Feet=%f\n",ft);
                break;
            case 4:
                printf("Enter Length in Feet\n");
                scanf("%f",&ft);
                m=Len_F_M(ft);
                printf("Length in meter=%f\n",m);
                
                break;
            case 5:
                printf("Enter Current in DC\n");
                scanf("%f",&dc);
                ac=current_DC_AC(dc);
                printf("Current in AC=%f\n",ac);
                break;
            case 6:
                printf("Enter Current in AC\n");
                scanf("%f",&ac);
                dc=current_AC_DC(ac);
                printf("Current in DC=%f\n",dc);
                break;    
            case 7:
                printf("Exiting ...");
                exit(1);
            default:
                printf("Invalid choice.\n");
                continue;
        }
       
    }        
  
}