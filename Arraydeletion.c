#include<stdio.h>
int main(){
	int arr[]={1,2,10,3,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int pos,i;
	pos=3;
	for(i=pos-1;i<n;i++){
		arr[i]=arr[i+1];
	}
	n--;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
