
#include <stdio.h>
#include <string.h>

struct item {
    char name[100];
    int quantity;
    float price;
};

void implement(char chose) {
    int noi;
    struct item items[100]; 
    int i, j;

    if (strcmp( &chose, 'ADD') || strcmp(&chose, 'Add') || strcmp(&chose, 'add')) {
        printf("Please Enter number of Items you want to Add: ");
        scanf("%d", &noi);

        for (i = 0; i < noi; i++) {
            printf("Please Enter your Item Name: ");
            scanf("%s", items[i].name);

            printf("Please Enter the Quantity of Item Above: ");
            scanf("%d", &items[i].quantity);

            printf("Enter the Price for Each unit of the Item Above: ");
            scanf("%f", &items[i].price);
        }
        printf("All ITEMS HAVE SUCCESSFULLY BEEN STORED\n");
    } else if (strcmp(&chose, 'UPDATE') || strcmp( &chose, 'Update') || strcmp( &chose, 'update')) {
        char itemName[100];
        printf("Enter the Name of the Item you want to Modify: ");
        scanf("%s", itemName);

        for (i = 0; i < noi; i++) {
            if (strcmp(items[i].name, itemName) == 0) {
                printf("Please Enter your New Item Name: ");
                scanf("%s", items[i].name);

                printf("Please Enter the New Quantity of Item Above: ");
                scanf("%d", &items[i].quantity);

                printf("Enter the New Price for Each unit of the Item Above: ");
                scanf("%f", &items[i].price);
                break;
            }
        }
    } else if (strcmp(&chose, 'SEARCH') || strcmp( &chose, 'Search') || strcmp( &chose, 'search')) {
        char itemName[100];
        printf("Please Search By Entering the specific Item Name: ");
        scanf("%s", itemName);

        for (i = 0; i < noi; i++) {
            if (strcmp(items[i].name, itemName) == 0) {
                printf("%s %d %.3f\n", items[i].name, items[i].quantity, items[i].price);
                break;
            }
        }
    } else if (strcmp(&chose, 'REMOVE') || strcmp( &chose, 'Remove') || strcmp( &chose, 'remove')) {
        char itemName[100];
        printf("Enter the name of the item to remove: ");
        scanf("%s", itemName);

        for (i = 0; i < noi; i++) {
            if (strcmp(items[i].name, itemName) == 0) {
                
                for (j = i; j < noi - 1; j++) {
                    items[j] = items[j + 1];
                }
                noi--;
                printf("Item removed successfully.\n");
                break;
            }
        }
    } else if (strcmp (&chose, 'PRINT') || strcmp( &chose, 'Print') || strcmp (&chose, 'print')) {
        for (i = 0; i < noi; i++) {
            printf("%s %d %.3f\n", items[i].name, items[i].quantity, items[i].price);
        }
    } else {
        printf("Invalid command.\n");
    }
}
int main (){
    printf("*****************Grocery Store Inventory Management***************************\n");
    printf("\n");
    printf("Here, You basically enter the command you want to use being ADD or Add or add / "
     "UPDATE or Update or update / REMOVE or Remove or remove / SEARCH or Search or search / "
      "PRINT or Print or print. For you to be Able to work efficeintly and effectively you "
      "must use any of the Above commands\n");
      printf("\n");
      printf("********************GET STARTED***********************\n");
      printf("\n");


    void implement(char chose);
    return 0;
}