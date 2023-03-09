//
//  main.c
//  while_fact
//
//  Created by apple on 06/03/23.
//

#include <stdio.h>

int main()
{
    int a,fact=1;
    
    printf("\n ENTER VALUE :");
    scanf("%d",&a);
    
    while(a>=1)
    {
        fact=fact*a;
        a=a-1;
    }
    printf("\n%d",fact);
}
