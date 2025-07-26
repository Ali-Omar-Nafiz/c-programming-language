# include <stdio.h>
# include <string.h>
# include <stdlib.h>

char str [ 100 ] , sub [ 100 ] ;
int count = 0 , count1 = 0 ;
void main()
{
    int i , j , l , l1 , l2 ;
    printf ( " \n enter a string : " ) ;
    gets(str) ;
    l1 = strlen ( str ) ;
    printf ( " \n enter a substring : " ) ;
    gets(sub) ;
    l2 = strlen (sub) ;
    for ( i = 0 ; i < l1 ; )
    {
        j = 0 ;
        count = 0 ;
        while ( ( str[i] == sub[j] ) )
        {
            count++ ;
            i++ ;
            j++ ;

        if ( count == l2 )
        {
            count1 ++ ;
            count = 0 ;
            i++;
            j=0;
        }  }

            i++ ;
    }
    printf ( " %s occurs %d times in %s" , sub , count1 , str ) ;
}
