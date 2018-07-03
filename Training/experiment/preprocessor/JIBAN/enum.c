#include <stdio.h>

enum week { sunday, monday, tuesday, wednesday, thursday, friday, saturday };

int main(void)
{
    enum week today;
    today = wednesday;
    printf("Day %d\n",today+1);
    printf("SIZE OF Enum %d\n",sizeof(today));
    return 0;
}
