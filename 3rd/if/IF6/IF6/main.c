//
//  main.c
//  IF6
//
//  Created by apple on 20/02/23.
//

#include <stdio.h>

int main()
{
    int age;
    
    printf("ENTER AGE : ");
    scanf("%d",&age);
    
    if (age>=18)
    {
        printf("ALLOW TO DRIVE");
    }
    else
    {
        printf("NOT ALLOW TO DRIVE");
    }
    
}
