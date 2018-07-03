#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>

int main( void )
{
	int num1 = 0;
	int num2 = 0;
	char ch = 0;
	int sum = 0; 
	int pid  = getpid();
	char str[30] = { 0 };

	DIR *dr = opendir( "/proc" );
	if( dr == NULL )	{
		perror( "opendir" );
		return;
	}
	
	struct dirent *dptr = NULL;
	while( ( dptr = readdir( dr ) ) != NULL )	{
		if( dptr == NULL )	{
			perror( "readdir" );
			return;
		}
		if( atoi( dptr-> d_name ) != 0 )	{
			sprintf( str, "/proc/%s/maps", dptr-> d_name);
	
			FILE *fp = NULL;
			fp = fopen( str, "r" );
			if( fp )	{
				while( fscanf( fp, "%s", str ) != EOF )		{
					sscanf( str, "%x%c%x", &num1, &ch, &num2 );
					sum = sum + ( num2 - num1 );
					printf("num2 = %x\tnum1 = %x\nsum = %x\n", num2, num1, sum);
						while( fgetc(fp) != '\n' );
				}
			}
		}
	}
	printf("total number of adrresses used is : %u\n", sum );
	
	getchar();
	
	return 0;
}
