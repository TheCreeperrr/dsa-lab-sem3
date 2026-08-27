#include <stdio.h>

void traverse(int n, int *a){
    for (int i = 0; i < 10; i++){
	    printf("%d ", a[i]);
	}
}

void specs(int n, int *a){
    printf("\n\nLength of array: %d elements", n);
	printf("\nSize of array: %d bytes", (int)sizeof(a[0])*n);
	printf("\nSize of element: %d bytes", (int)sizeof(a[0]));
}

void insert(int n, int *a, int ind, int num){
    printf("\n\nInserting %d at index %d:\n", num, ind);
    printf("Before: "); traverse(n, a);
	for (int i = n; i>ind; i--) a[i] = a[i-1];
	a[ind] = num;
	printf("\nAfter:  "); traverse(n, a);
}

int main() {
	int a[10] = {1,2,3,4,5};
	int n = sizeof(a)/sizeof(a[0]);
	
	traverse(n, a);
	
	specs(n, a);
	
	insert(n, a, 2, 9);
	
    return 0;
}

