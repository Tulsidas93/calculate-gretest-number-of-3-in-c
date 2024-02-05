#include<stdio.h>                            // header file decleration
int main()
{
    int num1,num2,num3;                      // veriabes decleration
    printf("Enter three numbers:\n");        // print statement
    scanf("%d %d %d", &num1 , &num2 ,& num3); //read numbers for user
    
    if (num1>num2)                              // check cindition 1
    {
        if (num1>num3){                          // check cindition 2
            printf("Max of three number is %d\n",num1);
        
        }
        else{
              printf("Max of three number is %d\n",num3);
        }
    }
    else if(num2>num3){                                      // check cindition 3
          printf("Max of three number is %d\n",num2);
    }
    else{
          printf("Max of three number is %d\n",num3);
}
}
