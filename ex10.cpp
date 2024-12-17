#include <stdio.h>
#include <stdlib.h>
int addElement(int *arr,int index, int *n);

//arr = realloc(arr,(*n+1)*sizeof(int));
int main(){
	int *arr;
	int n;
	
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	
	arr = (int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",arr+i);
	}
	addElement(arr,3,&n);
	
	
	
	for(int i=0;i<n;i++){
		printf("%d \t",*(arr+i));
	}
	free(arr);
	return 0;
}


  addElement(int *arr,int index, int *n){
  	if(index<0||index>*n){
  		printf("Vi tri them khong hop le");
  		
  		return 0;
  		
	  }
  	for(int i=index;i<*n;i++){
  		*(arr+i)=*(arr+i+1);
	  }

        (*n)--;
        arr = realloc(arr,(*n -1)*sizeof(int));

  }


