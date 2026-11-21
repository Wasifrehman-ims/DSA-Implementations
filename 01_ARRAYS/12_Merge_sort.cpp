#include <iostream>
using namespace std;
void merge(int arr[],int l, int mid,int r) {
	int temp[100];
	int i = l;
	int j = mid+1;
	int k = 0;
	while (i<=mid && j<=r) {
		if (arr[i]<=arr[j]) {
			temp[k]=arr[i];
			i++;
			k++;
		} else {
			temp[k]=arr[j];
			j++;
			k++;
		}
	}
	while (i<=mid) {
		temp[k]=arr[i];
		k++;
		i++;
	}
	while(j<=r) {
		temp[k]=arr[j];
		k++,j++;
	}
	for(i=l,k=0; i<=r; i++,k++) {
		arr[i]=temp[k];
	}
}
void mergeSort(int arr[],int l,int r){
	if(l<r){
		int mid=l+(r-l)/2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,r);
		merge(arr,l,mid,r);
	}
}
int main(){
	int arr[5]={24,565,123,98,1};
	mergeSort(arr,0,4);
	for(int i=0;i<5 ; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
