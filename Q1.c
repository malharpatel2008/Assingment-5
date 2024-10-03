#include<stdio.h>
int main(){
	
	int size,i;
	printf("enter the array size :");
	scanf("%d",&size);
	
	
	int array[size];
	printf("enter the elemnts : \n");
	
	for(i=0;i<size;i++){
	
	printf("enter array [%d]elemnts : ",i);
	scanf("%d",&array[i]);
	  	
	  }
	 
			for(i=0;i<size;i++){
	
	
	if(array[i]<0){
			printf("nagetiv array elemnts is: %d\n",array[i]);
			
		
			}
		}
	}
	 
