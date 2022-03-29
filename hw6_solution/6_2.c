# include <stdio.h>
// declaire function
void swap_value(int *pointer_a, int *pointer_b);
void selection_sort(int arr[], int n);

// lacking a subarray of an unsorted array

int main(){
    int arr[10] = {30, 12, 22, 32, 5, 18, 27, 45, 62, 7};
    int n = 10;
    selection_sort(arr, n);
    printf("subarray 1 : sorted array\n");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap_value(int *pointer_a, int *pointer_b){
    int temp = *pointer_a;
    *pointer_a = *pointer_b;
    *pointer_b = temp;
}

void selection_sort(int arr[], int n){
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++){
        min_idx = i;
        for (j = i+1; j < n; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        swap_value(&arr[i], &arr[min_idx]);
    }
}