#include<stdio.h>
int main() {
    int arr[51], n, temp,arr2[51],sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
	{
	scanf("%d", &arr[i]);
	}
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
	        if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
    	scanf("%d",&arr2[i]);
	}
	for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
	        if(arr2[i] < arr2[j]) {
                temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }
	
    for(int i=0; i<n; i++){
	sum+=arr[i]*arr2[i];
	}
	printf("%d",sum);
}