# include <stdio.h>

void print_array(int arr[], int size);

int main(){
    int arr_1[] = {5, 6, 5, 8, 9};
    int arr_2[] = {1, 2, 3, 4, 5};
    //int arr_uniq[];
    int sz_arr1 = sizeof(arr_1)/ sizeof(arr_1[0]);
    int sz_arr2 = sizeof(arr_2)/ sizeof(arr_2[0]);
    int sz_union = sz_arr1 + sz_arr2;
    int arr_union[sz_union], idx = 0;
    int i, j;

    // concantenate two array into one
    for (i = 0; i < sz_arr1; i++){
        arr_union[idx] = arr_1[i];
        idx ++;
    }
    for (i = 0; i < sz_arr2; i++){
        arr_union[idx] = arr_2[i];
        idx++;
    }
    
    //print array union
    for (i = 0; i < sz_union; i++){
        printf("%d ", arr_union[i]);
    }
    printf("\n");

    // sort distinct value
    for (i = 0; i < sz_union; i++){
        for (j = i+1; j < sz_union; j++){
            if (arr_union[i] == arr_union[j]){
                break;
            }
        }
        if (j == sz_union){
            printf("%d ", arr_union[i]);
        }
    }
}
