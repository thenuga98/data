#include<stdio.h>

void maxHeapify(int a[], int n)
{
    int i, tree[20], j, mid, temp, c;
    for (i = 0; i < n; i++)
        tree[i] = a[i];
    for (i = 1; i <= n; i++)
    {
        c = i;
        do
        {
            mid = (c-1)/2;
            if(tree[mid] < tree[c])
            {
                temp = tree[mid];
                tree[mid] = tree[c];
                tree[c] = temp;
            }
            c = mid;
        }while(c != 0);
    }
    printf("Heap array : ");
    for (i = 0; i < n; i++)
        printf("%d ", tree[i]);

}

void minHeapify(int a[], int n)
{
    int i, tree[20], j, mid, temp, c;
    for (i = 0; i < n; i++)
        tree[i] = a[i];
    for (i = 1; i <= n; i++)
    {
        c = i;
        do
        {
            mid = c/2;
            if(tree[mid] > tree[c])
            {
                temp = tree[mid];
                tree[mid] = tree[c];
                tree[c] = temp;
            }
            c = mid;
        }while(c != 0);
    }
    printf("Heap array : ");
    for (i = 1; i <= n; i++)
        printf("%d ", tree[i]);

}

int main()
{
    int a[20], n, i, ch;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter a random array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Do you want a maxHeap or minHeap? Enter 1 for maxHeap or 2 for minHeap: ");
    scanf("%d", &ch);
    if (ch == 1)
        maxHeapify(a, n);
    else
        minHeapify(a, n);
    return 0;
}
