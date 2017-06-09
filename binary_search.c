#include<stdio.h>

void main()
{
    int beg, mid, end, a[50], n, x, flag = 0;
    printf("Enter the numbers of numbers: ");
    scanf("%d", &n);
    int i;
    printf("Enter the array: \n");
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Enter the element to search: ");
    scanf("%d", &x);
    beg = 0;
    end = n;
    mid = (beg+end)/2;
    while(beg<=end)
    {
        if(a[mid] == x)
        {
            printf("Found!");
            break;
        }
        else if(a[mid]>x)
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
        mid = (beg + end)/2;
    }
    if (beg > end)
        printf("Not found :/");
}
