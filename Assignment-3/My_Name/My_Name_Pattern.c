#include <stdio.h>
int main(){
    int i,j,k,l,m,n,o,p,q,r,t,s,a=12,u,x;
    for( i=1 ; i<=7 ; i++)
    {
        for( j=1 ; j<=5 ; j++)   // S
        {
            if( i == 1  || i == 4 || (j == 1 && (i !=5 && i != 6 )) || i==7 || (j==5 && (i !=2 && i!=3)))
            printf("*");
            else
            printf(" ");
        }
        printf("\t");
        for( k=1 ; k<= 5 ; k++)  // H
        {
            if( i == 4 || k == 1 || k == 5)
            printf("*");
            else
            printf(" ");
        }
        printf("\t");
        for( l = 1 ; l <= 5 ; l++) // U
        {
            if( i == 7 || l == 1 || l == 5)
            printf("*");
            else
            printf(" ");
        } 
        printf("\t");
        for( m = 1 ; m <= 5 ; m++) // B 
        {
            if( m == 1 || (i == 1 && m < 5 ) || (i == 4 && m < 5) || (m == 5 && (i != 1 && i != 4 && i != 7)) || (i == 7 && m < 5))
            printf("*");
            else
            printf(" ");
        }
        printf("\t");
        for( n = 1 ; n <= 5 ; n++) // H
        {
             if( i == 4 || n == 1 || n == 5)
            printf("*");
            else
            printf(" ");
        }
          printf("\t");
        for( o = 6 ; o >= i ; o--)
        {
            printf(" ");
        }
            for ( p = 1 ; p <= (2*i-1) ; p++) // A
            {
                if(i == 4 || p == 1 || p == (2*i-1) )
                printf("*");
                else 
                printf(" ");
            }
            for( t = 6 ; t >= i ; t--)
        {
            printf(" ");
        }
        printf("\t");
        for( q = 1 ; q <= i ; q++ ) // M
        {
            if( q == 1 || q == i )
            printf("*");
            else
            printf(" ");
        }
        for ( s = a ; s >= i ; s-- )
        {
            printf(" ");
        }
        for(u = i ; u >= 1 ; u--)
        { 
            if( u == 1 || u == i )
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
        a--;
    }
    return 0;
}