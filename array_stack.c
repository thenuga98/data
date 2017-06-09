#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int item, choice;
    printf("\n\tImplementation Of Stack");
    do {
        printf("\nMain Menu");
      printf("\n1.Push \n2.Pop \n3.Display \n4.exit");
      printf("\nEnter Your Choice: ");
      scanf("%d", &choice);
      switch (choice) {
      case 1:
            printf("\nEnter The item to be pushed: ");
            scanf("%d", &item);
            push(item);
            break;
      case 2:
            item = pop();
            printf("\nThe popped element is %d", item);
            break;
      case 3:
            display();
            break;
      case 4:
         exit(0);
      }
   } while (choice != 4);

return 0;
}


