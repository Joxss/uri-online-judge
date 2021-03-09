#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1, xo, yo, x, y, i;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        	break;
        scanf("%d %d",&xo, &yo);
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&x,&y);
            if(x>xo)
            {
                if(y>yo)
                    printf("NE\n");
                else if(y<yo)
                    printf("SE\n");
                else
                    printf("divisa\n");        
            }
            else if(x<xo)
            {
                if(y>yo)
                    printf("NO\n");
                else if(y<yo)
                    printf("SO\n");
                else
                    printf("divisa\n");
            }
            else
            {
                printf("divisa\n");
            } 
        }
    }
}