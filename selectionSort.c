//selection sort in c 
#include<stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void display(int a[], int size)
{
     printf("\n\t");
    int i=0;
    while(i<size)
    {
        printf("%d ", a[i]);
        i++;
    }
   
}
void selectionSort(int a[], int n)
{
    int i, j;
    for(i=0; i<n-1; i++)
    {
        int minimum = i;
        printf("\nStep %d:", i+1);
       
        for(j=i+1; j<n; j++)
        {
             printf("\n\tminimum indexed value: a[%d] = %d",i,a[minimum]);
             printf("\n\tElement being compared: a[%d] = %d",j, a[j]);
            if(a[j]<a[minimum])
            {
                printf("\n\tcondition true: %d < %d   swap(%d, %d)", a[j], a[minimum], a[j], a[minimum]);
                swap(&a[j], &a[minimum]);
            }
            else
            {
                printf("\n\tcondition flase: %d !< %d", a[j], a[minimum]);
            }
             display(a, n);
        }
       
    }
}
int main()
{
    int a[1000], size;
    printf("Input array size: ");
    scanf("%d", &size);
    printf("Enter array elements: ");
    int i=0;
    while(i<size)
    {
        scanf("%d", &a[i]);
        i++;
    }
    selectionSort(a, size);
}
