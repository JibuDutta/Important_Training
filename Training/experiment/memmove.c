#include<stdio.h>
#include<string.h>
#if 0
void myMemCpy(void *dest, void *src, size_t n)
{
	// Typecast src and dest addresses to (char *)
	char *csrc = (char *)src;
	char *cdest = (char *)dest;
	int i=0;

	// Copy contents of src[] to dest[]
	for (i=0; i<n; i++)
		cdest[i] = csrc[i];
}

// Driver program
int main()
{
	char csrc[] = "GeeksforGeeks";
	char cdest[100];
	myMemCpy(cdest, csrc, strlen(csrc)+1);
	printf("Copied string is %s", cdest);

	int isrc[] = {10, 20, 30, 40, 50};
	int n = sizeof(isrc)/sizeof(isrc[0]);
	int idest[n], i;
	myMemCpy(idest, isrc,  sizeof(isrc));
	printf("\nCopied array is ");
	for (i=0; i<n; i++)
		printf("%d ", idest[i]);
	return 0;
}
#endif

#include <stdio.h>
#include <string.h>
int main()
{
	char csrc[100] = "globaledge";
//	memcpy(csrc+5, csrc, strlen(csrc)+1);
	//memmove(csrc+6, csrc, 8);
	memcpy(csrc, csrc, 8);
	printf("%s", csrc);
	return 0;
}
