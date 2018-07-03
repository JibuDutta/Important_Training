
#include <stdio.h> 
#if 0
int main() 
{ 
	printf("herllod\n"); 
#include <stdio.h> 
	printf("herllod\n"); 
}
#endif
#if 1

int ptr(void); 
int main() 
{ 
	int *p = ptr(); 
	printf("%d\n", *p); 
} 

int ptr() 
{ 
	int i = 10; 
	return &i; 
}
#endif
