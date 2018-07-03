#include"header.h"
#include<dlfcn.h>
int main()
{
	int x = 0;
   	int	y = 0;
	int z = 0;
	
	void *handle;
	
	int (*ptr)(int ,int);

	printf("ENTER THE NUMBER\n");
	scanf("%d %d",&x,&y);

	printf("1:SUM 2:MUL\n");
	scanf("%d",&z);
	
	if( z == 1)
	{
		handle = dlopen ("libjiban.so",RTLD_LAZY);

		if(handle == NULL)
		{
			printf("dlopen:%s\n",dlerror());
			return ;
		}
		 
		 ptr = dlsym(handle, "sum");

		 printf("%d\n",(*ptr)(x,y));

		 dlclose(handle);
	}	 
	if( z == 2)
	{
		handle = dlopen ("libjiban.so",RTLD_LAZY);
		if(handle == NULL)
		{
			printf("ERROR\n");
			return ;
		}
		 ptr = dlsym(handle, "MUL");

		 printf("%d\n",(*ptr)(x,y));

		 dlclose(handle);
	}	 

	return 0;
}
