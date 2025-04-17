//zad.1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isBigger(int a, int b){
    if(a>b){
        return 1;
    }
    return 0;
}

int isLower(int a, int b){
    if(a<b){
        return 1;
    }
    return 0;
}

int main()
{
    int n=0,m=0;

    do{
        printf("Enter a size n of the array:\n");
        scanf("%d",&n);
    }while(n<1);
    do{
        printf("Enter a size m of the array:\n");
        scanf("%d",&m);
    }while(m<1);


    srand(time(0));
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[i][j]=rand()%10+1;
        }
    }


    int flag = 1;
    for(int i = 0; i < n; i++){
        if(flag==1){
            for(int j = 0; j < m-1; j++){
                if(isLower(arr[i][j], arr[i][j+1])==0){
                    flag=0;
                    break;
                }
            }
            if(!flag)
            {
                break;
            }
        }
    }

    for(int i = 0; i < m; i++){
        if(flag==1){
            for(int j = 0; j < n-1; j++){
                if(isBigger(arr[i][j], arr[i][j+1])==0){
                    flag=0;
                }
            }
        }
    }


    if(flag==1){
        printf("The list is as you want it!\n");
    }else{
        printf("The list is not as you want it!\n");
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}







//zad.2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,m=0;

    do{
        printf("Enter a size n of the array:\n");
        scanf("%d",&n);
    }while(n<1);
    do{
        printf("Enter a size m of the array:\n");
        scanf("%d",&m);
    }while(m<1);


    srand(time(0));
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[i][j]=rand()%10+1;
        }
    }
    int max=0;
    int cords[2];
    int temp=0;
    int matr[3][3]={{1,1,1},{1,0,1},{1,1,1}};
    for(int i = 0; i < n; i++){
        temp=0;
        for(int j = 0; j < m; j++){
            if(i==0){
                matr[0][0]=0;
                matr[0][1]=0;
                matr[0][2]=0;
            }
            if(i==n-1){
                matr[2][0]=0;
                matr[2][1]=0;
                matr[2][2]=0;
            }
            if(j==0){
                matr[0][0]=0;
                matr[1][0]=0;
                matr[2][0]=0;
            }
            if(j==n-1){
                matr[0][2]=0;
                matr[1][2]=0;
                matr[2][2]=0;
            }

            temp=matr[0][0]*arr[i-1][j-1] + matr[0][1]*arr[i-1][j] + matr[0][2]*arr[i-1][j+1] + matr[1][0]*arr[i][j-1] + matr[1][2]*arr[i][j+1] + matr[2][0]*arr[i+1][j-1] + matr[2][1]*arr[i+1][j] + matr[2][2]*arr[i+1][j+1];
            if(temp>max){
                max=temp;
                cords[0]=i;
                cords[1]=j;
            }
        }
    }
    printf("The biggest sum is %d with cords[%d,%d]\n",max, cords[0],cords[1]);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}










//3.zad
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,m=0;

    do{
        printf("Enter a size n of the array:\n");
        scanf("%d",&n);
    }while(n<1);
    do{
        printf("Enter a size m of the array:\n");
        scanf("%d",&m);
    }while(m<1);


    srand(time(0));
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[i][j]=rand()%10+1;
        }
    }

    int min=arr[0][0];
    int y1=0;
    int max=arr[0][0];
    int y2=0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j]>max){
                max=arr[i][j];
                y1=i;
            }
            if(arr[i][j]<min){
                min=arr[i][j];
                y2=i;
            }
        }
        printf("\n");
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    int temp;
    for(int i = 0; i < m; i++){
        temp=arr[y1][i];
        arr[y1][i]=arr[y2][i];
        arr[y2][i]=temp;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}









//4.zad
#include <stdio.h>
#include <stdlib.h>

#define MAX_PEOPLE 100000

typedef struct {
    int *friends;
    int count;
} Person;

Person people[MAX_PEOPLE];

void addFriendship(int a, int b) {
    people[a].friends = (Person*)realloc(people[a].friends, (people[a].count + 1) * sizeof(int));
    people[b].friends = realloc(people[b].friends, (people[b].count + 1) * sizeof(int));

    people[a].friends[people[a].count++] = b;
    people[b].friends[people[b].count++] = a;
}

void printFriendCount(int person) {
    printf("Human %d has %d friends.\n", person, people[person].count);
}

int main() {
    int n, m;
    printf("Enter number of people and friends: ");
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        people[i].friends = NULL;
        people[i].count = 0;
    }

    printf("Enter amount of friends connections:\n");
    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        addFriendship(a, b);
    }

    int person;
    printf("Enter which human: ");
    scanf("%d", &person);
    printFriendCount(person);

    for (int i = 0; i < n; i++) {
        free(people[i].friends);
    }

    return 0;
}












//5.zad
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100000

int arr[MAX_SIZE];
int size = 0;

void add(int x) {
    arr[size++] = x;
}

void delete(int x) {
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != x) {
            arr[j++] = arr[i];
        }
    }
    size = j;
}

void smallest(int x) {
    if (x > size) {
        printf("Not enough elements.\n");
        return;
    }

    int *sorted = malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) sorted[i] = arr[i];

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (sorted[i] > sorted[j]) {
                int temp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = temp;
            }
        }
    }

    printf("%d is the smallest number: %d\n", x, sorted[x - 1]);
    free(sorted);
}

int main() {
    add(5); add(2); add(8); add(3);
    smallest(2);
    delete(2);
    smallest(2);

    return 0;
}









//6.zad
#include <stdio.h>
#include <stdlib.h>

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter the number of elements ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    int *primes = malloc(n * sizeof(int));
    int newSize = 0, primeSize = 0;

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        int primeFlag = isPrime(arr[i]);
        if (primeFlag) {
            primes[primeSize++] = arr[i];
        } else {
            arr[newSize++] = arr[i];
        }
    }

    printf("Array with no prime numbers: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n Prime numbers: ");
    for (int i = 0; i < primeSize; i++) {
        printf("%d ", primes[i]);
    }

    free(arr);
    free(primes);

    return 0;
}








#include <stdio.h>
#include <stdlib.h>

void findMaxSumSubmatrix(int n, int m, int matrix[n][m]) {
    int maxSum = INT_MIN, maxRow = 0, maxCol = 0;

    for (int i = 0; i <= n - 3; i++) {
        for (int j = 0; j <= m - 3; j++) {
            int sum = 0;
            for (int x = 0; x < 3; x++)
                for (int y = 0; y < 3; y++)
                    sum += matrix[i + x][j + y];

            if (sum > maxSum) {
                maxSum = sum;
                maxRow = i;
                maxCol = j;
            }
        }
    }

    printf("Biggest matrix:\n");
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            printf("%d ", matrix[maxRow + x][maxCol + y]);
        }
        printf("\n");
    }
}

int main()
{
    int n=0,m=0;

    do{
        printf("Enter a size n of the array:\n");
        scanf("%d",&n);
    }while(n<1);
    do{
        printf("Enter a size m of the array:\n");
        scanf("%d",&m);
    }while(m<1);


    srand(time(0));
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[i][j]=rand()%10+1;
        }
    }
    findMaxSumSubmatrix(n, m, arr);
    printf("\n");
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                printf("%d ", arr[i][j]);
            }
        printf("\n");
        }
    return 0;
}








//8.zad
#include <stdio.h>

void insertAt(int arr[], int *size, int index, int value) {
    for (int i = *size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    (*size)++;
}

int main() {
    int arr[100], size = 10;

    printf("Enter 10 numbers: ");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);

    int num, pos;
    while (1) {
        printf("Enter number and index (0 to end): ");
        scanf("%d", &num);
        if (num == 0) break;
        scanf("%d", &pos);

        if (pos < 0 || pos > size) {
            printf("Invalid index!\n");
        } else {
            insertAt(arr, &size, pos, num);
        }
    }

    printf("Finished array: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);

    return 0;
}
