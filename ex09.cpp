#include <stdio.h>
#include <stdlib.h>
int addElement(int *arr,int value,int index, int *n);

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
	addElement(arr,30,3,&n);
	
	
	
	for(int i=0;i<n;i++){
		printf("%d \t",*(arr+i));
	}
	return 0;
}


//trien khai ham
  int addElement(int *arr,int value,int index, int *n){
  	//truoc khi them phai kiem tra xem vi tri muon them co thoa man hay khong.
  	if(index<0||index>*n){
  		printf("Vi tri them khong hop le");
  		
  		return 0;
  		
	  }
  	//vi tri them thoa man
  	//cap phat them o nho cho mang
  	arr = realloc(arr,(*n +1)*sizeof(int));
  	//tien hanh dich chuyen phan tu
  	for(int i=*n;i>index;i--){
  		*(arr+i)=*(arr+i-1);
	  }
	  *(arr+index)=value;
	    *(arr+index)=value;
        (*n)++;
  }



