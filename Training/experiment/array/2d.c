#include<stdio.h>
#include<stdlib.h>
#define row 3
#define col 4
#if 0
int main()
{
	int i,j,r=3,c=4,cnt=0;
	
	int *arr = (int *) malloc ( r * c * sizeof(int));

	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			*(arr + i*c + j) = ++cnt;

	for(i=0;i<r;i++,printf("\n"))
		for(j=0;j<c;j++)
			printf("%d	",*(arr+i*c +j));	
	
	
	return 0;
}
#endif

#if 0
int main()
{
	int i,j,cnt=0;
	int *arr[row];
	for(i = 0 ; i < row ; i++)
		arr[i] = (int *) malloc (col * sizeof(int));
	
	for(i = 0 ; i < row ; i++)
		for( j = 0 ; j < col ; j++)
			arr[i][j] = ++cnt;
	
	for(i = 0 ; i < row ; i++, printf("\n"))
		for( j = 0 ; j < col ; j++)
			printf("%d	",arr[i][j] );

			return 0;
}
#endif

int main(void)
{
	int i , j , cnt = 0 ;

	int **arr = (int **) malloc (row * sizeof(int*));
	for( i = 0 ; i < row ;i++)
		arr[i] = (int *) malloc (col *sizeof(int));

	for(i = 0 ; i < row ; i++)
		for( j = 0 ; j < col ; j++)
			arr[i][j] = ++cnt;
	
	for(i = 0 ; i < row ; i++, printf("\n"))
		for( j = 0 ; j < col ; j++)
			printf("%d	",arr[i][j] );
	
	return 0;

}


