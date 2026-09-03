#include <bits/stdc++.h>
using namespace std;

//Traverse through array
void traversal(int n, int a[]){
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    cout << '\n';
    return;
}

//Linear Search through array
int linear_search(int last_ind, int a[], int target){
    for (int i = 0; i < last_ind; i++) if (a[i]==target) return i;
    return -1;
}

//Find maximum number in the array
int find_max(int n, int a[]){
    int res = a[0];
    for (int i = 0; i < n; i++) res = max(res, a[i]);
    return res;
}

//Find minimum number in the array
int find_min(int n, int a[]){
    int res = a[0];
    for (int i = 0; i < n; i++) res = min(res, a[i]);
    return res;
}

//Insert number at beginning of array
void insert_at_beginning(int n, int a[], int num){
    for (int i = n-1; i > 0; i--) a[i] = a[i-1];
    a[0] = num;
}

//Insert number at any position in the array
void insert_at_pos(int n, int a[], int pos, int num){
    for (int i = n-1; i > pos; i--) a[i] = a[i-1];
    a[pos] = num;
}

//Insert number at end of array
void insert_at_end(int n, int a[], int last_ind, int num){
    a[last_ind+1] = num;
}

//Delete number at beginning of array
void delete_at_beginning(int n, int a[]){
    for (int i = 0; i < n-1; i++) a[i] = a[i+1];
    a[n-1] = 0;
}

//Delete number at any position in the array
void delete_at_pos(int n, int a[], int pos){
    for (int i = pos; i < n-1; i++) a[i] = a[i+1];
    a[n-1] = 0;
}

//Delete number at end of array
void delete_at_end(int n, int a[], int last_ind){
    a[last_ind] = 0;
}

//Find sum of all numbers in array
int sum_of_array(int n, int a[]){
    int res = 0;
    for (int i = 0; i < n; i++) res += a[i];
    return res;
}

//----- Main function ------------------------------

int main(){
    int a[10] = {1,2,3,4,6};
    int n = 10, last_ind = 4;
    
    cout << "Traversal: ";
    traversal(n, a);
    cout << "\nLinear Search for number 4: Found at index " << linear_search(last_ind, a, 4);
    cout << "\n\nMininum Number: " << find_min(last_ind, a);
    cout << "\nMaximum Number: " << find_max(last_ind, a);
    
    insert_at_beginning(n, a, 5);
    cout << "\n\nInserting 5 at beginning: ";
    traversal(n, a);
    
    delete_at_beginning(n, a);
    cout << "Deleting the beginning: ";
    traversal(n, a);
    
    insert_at_pos(n, a, 3, 5);
    cout << "Inserting at index 3: "; traversal(n, a);
    
    delete_at_pos(n, a, 3);
    cout << "Deleting index 3: "; traversal(n, a);
    
    insert_at_end(n, a, last_ind, 7); last_ind++;
    cout << "Insert 7 at end: "; traversal(n, a);
    
    delete_at_end(n, a, last_ind);
    cout << "Deleting end: "; traversal(n, a);
    
    cout << "\n\nSum of array: " << sum_of_array(n, a);

    return 0;
}
