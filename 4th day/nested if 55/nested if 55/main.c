//
//  main.c
//  nested if 55
//
//  Created by apple on 01/03/23.
//

#include <stdio.h>

int main()
{
    int a,b,c;
    
    printf("ENTER VALUE OF A : ");
    scanf("%d",&a);
    
    printf("ENTER VALUE OF B : ");
    scanf("%d",&b);
    
    printf("ENTER VALUE OF C :");
    scanf("%d",&c);
    
    if(a>b)
    {
        if(a>c)
        {
            printf("A IS BIGGEST");
        }
        else
        {
            printf("B IS BIGGEST");
        }
    }
    else
    {
        printf("C IS BIGGEST");
    }
}
