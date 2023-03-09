//
//  main.c
//  do_while_fact
//
//  Created by apple on 06/03/23.
//

#include <stdio.h>

int main()
{
    int a,fact=1;
    
    printf("ENTER VALUE :");
    scanf("%d",&a);
    
    do
    {
        fact=fact*a;
        a--;
    }
    while(a>=1);
    
        
    printf("%d",fact);
}
