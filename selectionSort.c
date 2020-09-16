#include<stdio.h>

void selectionSort(int a[], int n) {
    int min,temp;
    for(int i=0; i<n-1; i++) {
        min=i;
        for(int j=i+1; j<n; j++) {
            if(a[j]<a[min]) {
                min=j;
            }
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}

int main() {
    int n, a[100];
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    selectionSort(a,n);
    printf("array elements after sorting:\n");
    for(int i=0; i<n; i++) {
        printf("%d ",a[i]);
    }
}
