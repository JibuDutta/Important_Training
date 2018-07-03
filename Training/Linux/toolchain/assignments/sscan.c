#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( void )
{
   int day, year;
   char weekday[20], month[20], dtm[100];

   strcpy( dtm, "26th November 2008" );
   sscanf( dtm, "%s %s %d ", weekday, month,  &year );

   printf("%s  %d = %s\n", month, year, weekday );
    
   return 0;
}
