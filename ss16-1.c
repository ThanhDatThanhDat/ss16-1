#include<stdio.h>

int main(){
	int a = 10;      
    int* ptr = &a; 

    printf("Gia tri cua a: %d\n", a);       
    printf("Dia chi cua a: %d\n", &a);  
    printf("Gia tri cua a thong qua con tro ptr: %d\n", *ptr);
    printf("Dia chi cua ptr: %d\n", ptr);

	return 0; 
} 
