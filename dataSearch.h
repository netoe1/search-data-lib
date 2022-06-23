#include <stdio.h>
#include <stdlib.h>


int tam = 0;


int sequentialSearch(int array[],int value_to_search){
    int comp = 0;
   // t1 = time(NULL);

    for(int i = 0;i < tam;i++){
        comp++;
        if(array[i] == value_to_search){
            return i; 
        }
    }   
    return -1; // default return
}
int binarySearch(int vector[],int value_to_search){

    int e, m, d; 
	e = 0; d = tam-1;
	int comp = 0; 

	while (e <= d) { 
        comp++;	
		m = (e + d)/2;  
		if (vector[m] == value_to_search){
			return m;
            break;
        }
		if (vector[m] < value_to_search) 
			e = m + 1; 
		else 
			d = m - 1;
	}	

	//t2 = time(NULL);
}