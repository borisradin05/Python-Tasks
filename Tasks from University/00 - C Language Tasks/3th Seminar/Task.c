// zad1
#include <stdio.h>

void find_longest_plateau(int arr[], int n, int *start_index, int *length) {
    int max_length = 1, max_start_index = 0;
    int current_length = 1, current_start_index = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            current_length++;
        } else {
            if (current_length > max_length) {
                max_length = current_length;
                max_start_index = current_start_index;
            }
            current_length = 1;
            current_start_index = i;
        }
    }

    if (current_length > max_length) {
        max_length = current_length;
        max_start_index = current_start_index;
    }

    *start_index = max_start_index;
    *length = max_length;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int start_index, length;
    find_longest_plateau(arr, n, &start_index, &length);

    printf("Index= %d, Length= %d.\n", start_index, length);

    return 0;
}
// -----------------------------------------------------------------------------------------------
// zad.2
#include <stdio.h>

int is_alternating(int arr[], int n) {
    if (n < 2) return 1;
    
    for (int i = 1; i < n; i++) {
        if (i % 2 == 1) {
            if (!(arr[i] > arr[i - 1])) return 0;
        } else {
            if (!(arr[i] < arr[i - 1])) return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    if (is_alternating(arr, n)) {
        printf("True");
    } else {
        printf("False");
    }
    
    return 0;
}

// --------------------------------------------------------------------------------------------------
//3.zad
#include <stdio.h>

void reverse_array(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    reverse_array(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    

    return 0;
}
// -------------------------------------------------------------------------------------------------
//zad.4
#include <stdio.h>

void rotate_array(int arr[], int n, int k) {
    k = k % n;
    int temp[n];
    
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &k);
    
    rotate_array(arr, n, k);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
// ---------------------------------------------------------------------------------------------
//zad.5
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort_descending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int find_kth_largest(int arr[], int n, int k) {
    sort_descending(arr, n);
    return arr[k - 1];
}

int main() {
    int n, k;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &k);
    
    if (k > 0 && k <= n) {
        int kth_largest = find_kth_largest(arr, n, k);
        printf("k=%d: number=%d\n", k, kth_largest);
    }
    
    return 0;
}
// ------------------------------------------------------------------------------------------
//zad.6
#include <stdio.h>

void find_longest_monotonic_subsequence(int arr[], int n) {
    int max_length = 1, current_length = 1, start_index = 0, max_start = 0;
    

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            current_length++;
        } else {
            if (current_length > max_length) {
                max_length = current_length;
                max_start = start_index;
            }
            current_length = 1;
            start_index = i;
        }
    }
    if (current_length > max_length) {
        max_length = current_length;
        max_start = start_index;
    }
    
    int inc_max_length = max_length, inc_max_start = max_start;
    

    max_length = 1, current_length = 1, start_index = 0, max_start = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            current_length++;
        } else {
            if (current_length > max_length) {
                max_length = current_length;
                max_start = start_index;
            }
            current_length = 1;
            start_index = i;
        }
    }
    if (current_length > max_length) {
        max_length = current_length;
        max_start = start_index;
    }
    

    if (inc_max_length >= max_length) {
        printf("Longest sequence(descending): ");
        for (int i = inc_max_start; i < inc_max_start + inc_max_length; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Longest sequence(descending): ");
        for (int i = max_start; i < max_start + max_length; i++) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    find_longest_monotonic_subsequence(arr, n);
    
    return 0;
}
// ----------------------------------------------------------------------------------------
//zad.7
#include <stdio.h>

void find_subarray_with_sum(int arr[], int n, int target) {
    for (int start = 0; start < n; start++) {
        int sum = 0;
        for (int end = start; end < n; end++) {
            sum += arr[end];
            if (sum == target) {
                printf("Subarray with sum %d found: ", target);
                for (int i = start; i <= end; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                return;
            }
        }
    }
    printf("No subarray with sum %d found.\n", target);
}

int main() {
    int n, target;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the target sum: ");
    scanf("%d", &target);
    
    find_subarray_with_sum(arr, n, target);
    
    return 0;
}
// ------------------------------------------------------------------------------------------------
//zad.8
#include <stdio.h>

#define MAX_SIZE 20

void insert_number(int arr[], int *size, int num, int index) {
    if (*size >= MAX_SIZE || index > *size || index < 0) {
        return;
    }
    for (int i = *size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = num;
    (*size)++;
}

int main() {
    int arr[MAX_SIZE], size = 10;
    printf("Enter 10 initial numbers: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int num, index;
    while (size < MAX_SIZE) {
        printf("Enter number and position (0 to stop): ");
        scanf("%d", &num);
        if (num == 0) break;
        scanf("%d", &index);
        if (index >= 0 && index <= size) {
            insert_number(arr, &size, num, index);
        } else {
            printf("Invalid index.\n");
        }
    }
    
    printf("Final array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
// ----------------------------------------------------------------------------------------------
//zad.9
#include <stdio.h>

void find_longest_sequence(int arr[], int n) {
    int max_length = 1, current_length = 1;
    int max_start = 0, current_start = 0;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            current_length++;
        } else {
            if (current_length > max_length) {
                max_length = current_length;
                max_start = current_start;
            }
            current_length = 1;
            current_start = i;
        }
    }
    
    if (current_length > max_length) {
        max_length = current_length;
        max_start = current_start;
    }
    
    printf("Longest sequence: ");
    for (int i = max_start; i < max_start + max_length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    find_longest_sequence(arr, n);
    
    return 0;
}
