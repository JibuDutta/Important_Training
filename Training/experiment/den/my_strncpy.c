#include<stdio.h> 
#include<stdlib.h>
#define MAX 200                                                              
char* my_strncpy(char* dest,const char* src,int size);                                

int main()                                                                      
{                                                                               
        char *src = (char*) malloc (MAX);                                                          
        char *dest = (char*) malloc (MAX);                                                         
        int size=0;                                                               
                                                                                
        printf("Enter the Source String\n");                                    
        fgets(src,MAX,stdin);                                                   
                                                                                
        printf("ENTER THE NO OF CHARACTER TO COPY\n");                          
        scanf("%d",&size);                                                      
                                                                                
        my_strncpy(dest,src,size);                                              
                                                                                
        printf("TARGET:%s\n",dest);                                             
                                                                                
        return 0;                                                               
}                                                                               

char* my_strncpy(char* dest,const char* src,int size)                                 
{                                                                               
                                                                                
        int i=0;                                                                  
                                                                                
        for( i=0 ; i<size && *(src+i) ; i++)                                           
        {                                                                       
        	*(dest+i) = *(src+i);                                                 
        }                                                                       
        for(;i<size;i++)                                                        
        {                                                                       
         	*(dest+i) ='\0';                                                   
        }                                                                       
        *(dest+i) ='\0';                                                                              
        return dest; 
}                                                                                                                              


