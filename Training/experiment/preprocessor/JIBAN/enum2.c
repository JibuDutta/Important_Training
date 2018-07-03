#include <stdio.h>

enum week {sunday, monday, tuesday, wednesday = 100, thursday, friday, saturday };

int main(void)
{
    	enum week today;
   
		today = tuesday;
		today = sunday + monday;
		//wednesday = 4;
	
    	printf("Day %d\n",today);
   		printf("Day %d\n",wednesday);
   		return 0;
}
