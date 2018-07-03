#include <stdio.h>

// Global definations

int a;     //comm
int b = 10; //data
static int c; //bss
static int d = 15;  //data
const static int e;  //bss  
const static int f = 20; //rodata
const volatile static int p; //bss
const static volatile qi=30; // data
volatile int r; //bss
volatile int s = 35; //data
extern int y;  //NO SS
extern int z = 40; //data
const extern int why = 70; //rodata r data
const extern int uo; // NO SS
const int v; //bss r comm
const volatile int m = 17; //rodata

int main (void)
{
    // Local declaration and definations

    int a; //stack
    int bigb = 10; //stack
    static int ji; //bss
    static int d = 15; //data
    const static int e; // bss
    const static int fiiii = 20; //rodata 
    const volatile static int p; //stack r bss r data
    const static volatile q=30; // radata r data 
    volatile int r; //stack  
    volatile int s = 35; //statck

    return 0;
}

