//
//  main.c
//  pattern_345
//
//  Created by apple on 14/03/23.
//

#include <stdio.h>

int main()
{
    int i,j,n,c=65;
    
    printf("\n ENTER NUM : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %c ",c);
            c++;
        }
        printf("\n");
    }
}
