//
//  main.c
//  while4
//
//  Created by apple on 03/03/23.
//

#include <stdio.h>

int main()
{
    int a=1,n;
    
    printf("\n ENTER YOUR VALUE : ");
    scanf("%d",&n);
    
    while(a<=n)
    {
        if(a%2==0)
        {
            printf("\n %d TOPS TECH ",a);
        }
                   a++;
    }
                   printf("\n BYE BYE");
}
