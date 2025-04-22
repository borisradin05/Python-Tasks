#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUCTS 100
#define MAX_ORDERS 100
#define MAX_NAME_LEN 100
#define MAX_ADDRESS_LEN 100

typedef struct {
    char name[MAX_NAME_LEN];
    double price;
    int id;
} Product;

typedef struct {
    char address[MAX_ADDRESS_LEN];
    int productId;
} Order;

Product products[MAX_PRODUCTS];
int productCount = 0;

Order orders[MAX_ORDERS];
int orderCount = 0;

int findProductById(int id) {
    for (int i = 0; i < productCount; i++) {
        if (products[i].id == id) {
            return i;
        }
    }
    return -1;
}

void addProduct(const char *name, double price, int id) {
    if (productCount >= MAX_PRODUCTS) {
        fprintf(stderr, "Грешка: Списъкът с продукти е пълен!\n");
        return;
    }

    strncpy(products[productCount].name, name, MAX_NAME_LEN - 1);
    products[productCount].name[MAX_NAME_LEN - 1] = '\0'; 
    products[productCount].price = price;
    products[productCount].id = id;
    productCount++;

    for (int i = 0; i < orderCount; i++) {
        if (orders[i].productId == id) {
            printf("Клиент %s поръча %s\n", orders[i].address, name);

            for (int j = i; j < orderCount - 1; j++) {
                orders[j] = orders[j + 1];
            }
            orderCount--;
            i--;
        }
    }
}

void addOrder(const char *address, int productId) {
    int productIndex = findProductById(productId);
    if (productIndex != -1) {
        printf("Клиент %s поръча %s\n", address, products[productIndex].name);
    } else {
        if (orderCount >= MAX_ORDERS) {
            fprintf(stderr, "Грешка: Списъкът с поръчки е пълен!\n");
            return;
        }

        strncpy(orders[orderCount].address, address, MAX_ADDRESS_LEN - 1);
        orders[orderCount].address[MAX_ADDRESS_LEN - 1] = '\0';
        orders[orderCount].productId = productId;
        orderCount++;
    }
}

int main() {
    char command[10];
    while (1) {
        if (scanf("%9s", command) != 1) {
            fprintf(stderr, "Грешка: Неуспешно четене на команда.\n");
            break;
        }

        if (strcmp(command, "END") == 0) {
            break;
        } else if (strcmp(command, "Product") == 0) {
            char name[MAX_NAME_LEN];
            double price;
            int id;
            if (scanf("%99s %lf %d", name, &price, &id) != 3) {
                fprintf(stderr, "Грешка: Невалиден вход за продукт.\n");
                continue;
            }
            addProduct(name, price, id);
        } else if (strcmp(command, "Order") == 0) {
            char address[MAX_ADDRESS_LEN];
            int productId;
            if (scanf("%99s %d", address, &productId) != 2) {
                fprintf(stderr, "Грешка: Невалиден вход за поръчка.\n");
                continue;
            }
            addOrder(address, productId);
        } else {
            fprintf(stderr, "Грешка: Непозната команда '%s'.\n", command);
        }
    }

    return 0;
}