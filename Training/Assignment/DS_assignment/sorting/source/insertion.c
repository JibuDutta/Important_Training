#include"header.h"                                                                            
void insertion ( int arr[], int n)                                              
{                                                                               
    int temp=0;                                                                 
    int i=0;                                                  
    int j=0;                                                                    
                                                                                
    for(i=1 ; i<n ;i++)  ///insertion sorting                                   
    {                                                                           
        temp = arr[i];                                                          
    
		j = i-1;                                                                
    
		while( j>=0 && arr[j] > temp)                                           
            {                                                                   
    
				arr[j+1] = arr[j];                                                  
     
				j = j-1;                                                            
    
			}                                                                   
    
		arr[j+1]=temp;                                                          
    }                                                                           
                                                                                
                                                                                
    printf("AFTER SORT THE ARRAY ELEMENTS ARE\n");                              
                                                                                
    for(i=0;i<n;i++)                                                            
        printf("%d  ",arr[i]);//////////////////////print the elements after sorting
    printf("\n");                                                               
                                                                                
}
