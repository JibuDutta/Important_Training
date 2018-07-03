#include<stdio.h>
#pragma pack(1)

#if 0

struct node {
		int a;
		char c;
		int b;
};

struct link {
		char a;
		short i;
};
struct pan {
		char ch;
		int a;
		char p;
};

struct can {
		char m;
		char c;
		int n;
};



struct mms {
		char ch;
		short s;
		int n;
};

struct nm {
		char c;
};

struct art {
		short s;
		short n;
		char ch;
};

struct quier {
		short s;
		short n;
		int m;
};
struct covet {
		short s;
		int n;
		short m;
};

int main()
{

		struct node v;

		printf("ADDRESS:%u\n",&v);
		printf("ADDRESS of A:%u\n",&(v.a));
		printf("ADDRESS of C:%u\n",&(v.c));
		printf("ADDRESS of B:%u\n",&(v.b));


		printf("SIZE OF STRUCTURE IS %d\n\n",sizeof(struct node));
		printf("SIZE OF STRUCTURE IS %d\n\n",sizeof(struct link));
		printf("SIZE OF STRUCTURE IS %d\n\n",sizeof(struct pan));
		printf("SIZE OF STRUCTURE IS %d\n\n",sizeof(struct can));
		printf("SIZE OF STRUCTURE IS %d\n\n",sizeof(struct mms));
		printf("SIZE OF STRUCTURE IS %d\n\n",sizeof(struct nm));
		printf("SIZE OF STRUCTURE IS %d\n\n",sizeof(struct art));
		printf("SIZE OF STRUCTURE IS %d\n\n",sizeof(struct quier));
		printf("SIZE OF STRUCTURE IS %d\n\n",sizeof(struct covet));


		return 0;
}

#endif


#if 0

struct link
{
		char a;
		short int b;
}v;


int main()
{
		printf("Address of Structure:%u\n",&v);
		printf("Address of Structure:%u\n",&(v.a));
		printf("Address of Structure:%u\n",&(v.b));
		printf("SIZE OF LINK STRUCTURE:%d\n",sizeof(struct link));

		return 0;
}


#endif
#if 0

struct pan
{
		char ch;
		int a;
		char p;
}v;


int main()
{
		printf("Address of Structure:%u\n",&v);
		printf("Address of Structure ch:%u\n",&(v.ch));
		printf("Address of Structure a:%u\n",&(v.a));
		printf("Address of Structure p:%u\n",&(v.p));
		printf("SIZE OF LINK STRUCTURE:%d\n",sizeof(struct pan));

		return 0;
}


#endif
#if 1

/*struct can
{

		//short int x; 
		//char m;	
		int a:5;
//		int  b:10;
//		int  d:7;
		//char c;
		//int n;
}v;
*/

int main()
{
			int a,b;
			a=10;
			b=a;	
		
//			printf("Address of Structure:%u\n",&v);
//			printf("Address of Structure member m:%u\n",&(v.a));
			//printf("Address of Structure member c:%u\n",&(v.b));
			//printf("Address of Structure member n:%u\n",&(v.d));
//		printf("SIZE OF LINK STRUCTURE:%d\n",sizeof(struct can));

		return 0;
}


#endif
