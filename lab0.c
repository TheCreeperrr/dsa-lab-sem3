#include <stdio.h>

void traverse(int n, int *a){
    for (int i = 0; i < 10; i++){
	    printf("%d ", a[i]);
	}
}

void specs(int n, int *a){
    printf("\n\nLength of array: %d elements", n);
	printf("\nSize of array: %d bytes", (int)sizeof(a[0])*n);
	printf("\nSize of element: %d bytes\n", (int)sizeof(a[0]));
}

void insert(int n, int *a, int ind, int num){
    printf("\nInserting %d at index %d:", num, ind);
    printf("\nBefore: "); traverse(n, a);
	for (int i = n-1; i>ind; i--) a[i] = a[i-1];
	a[ind] = num;
	printf("\nAfter:  "); traverse(n, a);
	printf("\n");
}

void delete_position(int n, int *a, int ind){
	printf("\nDeleting position %d:", ind);
	printf("\nBefore: "); traverse(n, a);
	for (int i=ind; i<n-1; i++){
		a[i] = a[i+1];
	}
	a[n-1] = 0;
	printf("\nAfter:  "); traverse(n, a);
	printf("\n");
}

int search_for(int n, int *a, int num){
	for (int i=0; i<n; i++){
		if (a[i]==num){
			printf("\nFound number %d at index %d\n.", num, i);
			return i;
		}
	}
	printf("\nCouldn't find the number.\n");
	return -1;
}

int main() {
	int a[10] = {1,2,3,4,5};
	int n = sizeof(a)/sizeof(a[0]);
	
	traverse(n, a);
	
	specs(n, a);
	
	insert(n, a, 2, 9);

	delete_position(n, a, 2);

	search_for(n, a, 3);
	
    return 0;
}

