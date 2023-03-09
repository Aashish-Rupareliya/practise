//
//  main.c
//  do_while_table
//
//  Created by apple on 06/03/23.
//

#include <stdio.h>

int main()
{
    int a=1,n;
    
    printf("\n ENTER VALUE : ");
    scanf("%d",&n);
    
    do
    {
        printf("\n %d X %d = %d",n,a,n*a);
        a++;
    }
    while(a<=10);
}
