#include <stdio.h>

struct PRECIPITATION
{
    int    month;
    int     milli;
};

void main( void )
{
    struct PRECIPITATION aPrec[4];
    int    i;

    for( i = 0 ; i < 4 ; i++ )
    {
        printf( "何月ですか？\n" );
        scanf( "%d", &aPrec[i].month );
        printf( "降水量は？\n" );
        scanf( "%d", &aPrec[i].milli );
    }

    for( i = 0 ; i < 4 ; i++ )
        printf( " %d月 %4dmm\n", aPrec[i].month, aPrec[i].milli );
}