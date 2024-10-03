#include<stdio.h>
int main(){
	
	int row,coloum,i,j,largest;
	
	printf("enter the number of row : ");
	scanf("%d",&row);
	printf("enter the number of coloum :");
	scanf("%d",&coloum);
	
	int array[row][coloum];
	printf("enter the array elemnts :\n");
	
	for(i=0;i<row;i++){
		for(j=0;j<coloum;j++){
			printf("enter array [%d][%d]elemnts :  ",i,j);
			scanf("%d",&array[i][j]);
}
	}
	for(i=0;i<row;i++){
	for(j=0;j<coloum;j++){
       if(array[i][j]>largest){
 	        
		largest =array[i][j];
}
}
}
printf("largest elements is: %d\n",largest);
}

