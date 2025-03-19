
// // //TODO: 1 zadacha

// // #include <stdio.h>

// int main() 
// {
//     int n;
//     printf("Въведете число: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++) 
//         {
//             printf("%d ", i);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// // //TODO: Задача 2

// #include <stdio.h>

// int main() 
// {
//     NewFunction();

//     printf("Сумата е: %d\n",sum);

//     return 0;
// }

// // //TODO:Zadacha 3

// // #include <stdio.h>

// // int main() 
// // {
// //     int a, b, sum = 0, multiplication = 1;
// //     printf("Въведете две числа: ");
// //     scanf("%d %d", &a, &b);

// //     if (a > b) 
// //     {
// //         int temp = a;
// //         a = b;
// //         b = temp;
// //     }

// //     for (int i = a + 1; i < b; i++) 
// //     {
// //         if (i % 2 == 0) 
// //         {
// //             sum += i;
// //         } 
// //         else
// //         {
// //             multiplication *= i;
// //         }
// //     }

// //     printf("Сумата на четните числа е: %d\n", sum);
// //     printf("Произведението на нечетните числа е: %d\n", multiplication);

// //     return 0;
// // }

// // //TODO: Zadacha 4

// // #include <stdio.h>

// // int main() 
// // {
// //     int N, K, count = 0;
// //     printf("Въведете две числа (N и K): ");
// //     scanf("%d %d", &N, &K);

// //     printf("Въведете %d числа: ", N);
// //     for (int i = 0; i < N; i++) 
// //     {
// //         int num;
// //         scanf("%d", &num);
// //         if (num > K && num % 3 == 0) 
// //         {
// //             count++;
// //         }
// //     }

// //     printf("Броят на числата, по-големи от %d и делящи се на 3 е: %d\n", K, count);

// //     return 0;
// // }

// // //TODO: // Zadacha 5

// // #include <stdio.h>

// // int main() 
// // {
// //     int num, sum = 0;
    
// //     while (1) 
// //     {
// //         printf("Въведете числа (въведете 0 за край): ");
// //         scanf("%d", &num);
// //         if (num == 0) 
// //         {
// //             break;
// //         }
// //         sum += num;
// //     }

// //     printf("Сумата на числата е: %d\n", sum);

// //     return 0;
// // }

// // TODO:// Zadacha 6

// // #include <stdio.h>

// // int main() 
// // {
// //     double a, b;
// //     printf("Въведете две реални числа: ");
// //     scanf("%lf %lf", &a, &b);

// //     for (double i = a; i <= b; i += 0.01) 
// //     {
// //         printf("F(%.2lf) = %.2lf\n", i, i * i - 4);
// //     }

// //     return 0;
// // }

// //TODO: // Задача 1 - указалтели

// #include <stdio.h>
// int main()
// {
//     int n;
//     int* p = &n;
//     printf("Въведете число: ");
//     scanf("%d", p);
//     printf("%p -> %d", p, *p);
//     return 0;
// }

// void NewFunction()
// {
//     int a, b, sum = 0;
//     printf("Въведете две числа: ");
//     scanf("%d %d", &a, &b);

//     if (a > b)
//     {
//         int temp = a;
//         a = b;
//         b = temp;
//     }

//     for (int i = a + 1; i < b; i++)
//     {
//         sum += i;
//     }
// }
// //TODO: Задача 2 - указатели

// #include <stdio.h>

// void calculate(int* a, int* b, int* sum, int* diff, int* multiplication, float* division) 
// {
//     *sum = *a + *b;
//     *diff = *a - *b;
//     *multiplication = *a * *b;
//     if (*b != 0) 
//     {
//         *division = (float)*a / *b;
//     } 
//     else 
//     {
//         *division = 0; 
//     }
// }

// int main() 
// {
//     int a, b, sum, diff, multiplicaton;
//     float division;
//     int *p1 = &a, *p2 = &b, *sum = &sum;

//     printf("Въведете две числа: ");
//     scanf("%d %d", p1, p2);
//     if (a > b)
//     {
//         int temp = a;
//         a = b;
//         b = temp;
//     }
//     sum = *p1 + *p2;
//     calculate(p1, p2, &sum, &diff, &multiplicaton, &division);

//     printf("Сума: %d\n", sum);
//     printf("Разлика: %d\n", diff);
//     printf("Произведение: %d\n", multiplicaton);
//     if (b != 0) 
//     {
//         printf("Частно: %.2f\n", division);
//     } 
//     else 
//     {
//         printf("Деление на нула не е възможно.\n");
//     }

//     return 0;
// }


// // //TODO:Zadacha 1 ot duskata

// #include <stdio.h>

// int main() 
// {
//     int arr[7];
//     int sum = 0;
//     char input[100];
    
//     for (int i = 0; i < 7; i++)
//     {
//         scanf("%d", arr[i]);
//         if (arr[i] < -5000 || arr[i] > 5000) 
//         {
//             printf("Грешка.\n");
//             return 1;
//         }
//     }
//     for (int i = 0; i < 7; i++) 
//     {
//         sum += arr[i];
//     }  printf("Сумата на числата е: %d\n", sum);

//     return 0;
// }

// ////TODO: Zadacha 2 ot duskata

// // #include <stdio.h>
// // int main() 
// // {
// //     int arr[7];
// //     int sum = 0;
// //     char input[100];
    
// //     for (int i = 0; i < 7; i++)
// //     {
// //         if (arr[i] < -5000 || arr[i] > 5000) 
// //         {
// //             printf("Грешка.\n");
// //             return 1;
// //         }
// //     }
// //     for (int i = 0; i < 7; i++) 
// //     {
// //         sum += arr[i];
// //     }  printf("Сумата на числата е: %d\n", sum);

// //     return 0;
// // }

// // //TODO: Zadacha 3 na zadachi ot duskata

// // #include <stdio.h>
// // int main() 
// // {
// //     int arr[7];
// //     float avg = 0;
// //     char input[100];
    
// //     fgets(input, sizeof(input), stdin);
// //     sscanf(input, "%d, %d, %d, %d, %d, %d, %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]);
// //     for (int i = 0; i < 7; i++)
// //     {
// //         if (arr[i] < -5000 || arr[i] > 5000) 
// //         {
// //             printf("Грешка.\n");
// //             return 1;
// //         }
// //     }
// //     for (int i = 0; i < 7; i++) 
// //     {
// //         avg += arr[i];
// //     }
// //     avg /= sizeof(arr) / sizeof(arr[0]);
// //     printf("Средното на числата е: %lf\n", avg);

// //     return 0;
// // }

// ////TODO: Zadacha 4 ot duskata

// // #include <stdio.h>
// // int main()
// // {
// //     int arr[7], closestToAvg;
// //     float avg = 0;
// //     char input[100];
    
// //     fgets(input, sizeof(input), stdin);
// //     sscanf(input, "%d, %d, %d, %d, %d, %d, %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]);
// //     for (int i = 0; i < 7; i++)
// //     {
// //         if (arr[i] < -5000 || arr[i] > 5000) 
// //         {
// //             printf("Грешка.\n");
// //             return 1;
// //         }
// //     }
// //     for (int i = 0; i < 7; i++) 
// //     {
// //         avg += arr[i];
// //     }
// //     avg /= sizeof(arr) / sizeof(arr[0]);

// //     closestToAvg = arr[0];
// //     for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) 
// //     {
// //         if (abs(arr[i] - avg) < abs(closestToAvg - avg)) 
// //         {
// //             closestToAvg = arr[i];
// //         }
// //     }

// //     printf("Средното на числата е: %lf\n", avg);
// //     printf("Най-близкото число до средното е: %d\n", closestToAvg);

// //     return 0;
// // }

// ////TODO: Zadacha 5 s randomite

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include "Task2.h"

// int main() 
// {
//     int arr[20];
//     int positives[20], negatives[20];
//     int posCount = 0, negCount = 0;

    
//     printf("Първи масив: ");
//     for (int i = 0; i < 20; i++) 
//     {
//         arr[i] = rand() % 21 - 10;
//         printf("%d ", arr[i]);
//     }

//     printf("\n");

//     for (int i = 0; i < 20; i++) 
//     {
//         if (arr[i] > 0) 
//         {
//             positives[posCount] = arr[i];
//             posCount++;
//         } 
//         else if (arr[i] < 0) 
//         {
//             negatives[negCount] = arr[i];
//             negCount++;
//         }
//     }

//     printf("Втори масив: ");
//     for (int i = 0; i < posCount; i++) 
//     {
//         printf("%d ", positives[i]);
//     }

//     printf("\n");

//     printf("Трети масив: ");
//     for (int i = 0; i < negCount; i++) 
//     {
//         printf("%d ", negatives[i]);
//     }
    
//     printf("\n");

//     return 0;
// }

