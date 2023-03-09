//
//  main.c
//  do while 1
//
//  Created by apple on 06/03/23.
//

#include <stdio.h>

int main()
{
    int n;
    
    printf("\n ENTER VALUE : ");
    scanf("%d",&n);
    
    do
    {
        printf("\n%d",n);
        n--;
    }
    while(n>=1);
}
