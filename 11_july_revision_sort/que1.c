// Kth Largest Element in an Array 
#include <stdio.h>

#define MAX 1000

int heap[MAX];
int size = 0;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void insert(int val)
{
    heap[++size] = val;

    int i = size;

    while(i > 1 && heap[i] < heap[i/2])
    {
        swap(&heap[i], &heap[i/2]);
        i /= 2;
    }
}

int deleteMin()
{
    int min = heap[1];

    heap[1] = heap[size--];

    int i = 1;

    while(2*i <= size)
    {
        int smallest = i;
        int left = 2*i;
        int right = 2*i + 1;

        if(left <= size && heap[left] < heap[smallest])
            smallest = left;

        if(right <= size && heap[right] < heap[smallest])
            smallest = right;

        if(smallest == i)
            break;

        swap(&heap[i], &heap[smallest]);

        i = smallest;
    }

    return min;
}

int kthLargest(int arr[], int n, int k)
{
    size = 0;

    for(int i = 0; i < n; i++)
    {
        insert(arr[i]);

        if(size > k)
            deleteMin();
    }

    return heap[1];
}

int main()
{
    int arr[] = {3,2,1,5,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    printf("%d", kthLargest(arr, n, k));
    return 0;
}