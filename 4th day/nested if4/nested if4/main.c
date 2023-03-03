//
//  main.c
//  nested if4
//
//  Created by apple on 01/03/23.
//

#include <stdio.h>

int main()
{
    int age;
    char gender;
    
    printf("\n ENTER YOUR GENDER : ");
    scanf("%c",&gender);
    
    printf("\n ENTER YOUR AGE : ");
    scanf("%d",&age);
    
    if(age>18)
    {
        if(gender=='f')
        {
            printf("\n ELIGIBLE");
        }
        else
        {
            printf("\n NOT ELIGIBLE  ");
        }
    }
    else
    {
        printf("\n NOT A VALID AGE ");
    }
    printf("\n BYE BYE");
}
