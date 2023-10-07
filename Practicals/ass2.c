#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>

void bubble_sort(int a[50],int n) {
    int i, j, temp;
    for(i=n-1; i>0; i--) {
        for(j=0; j<i; j++) {
            if(a[j]<a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp; 
            }
        }
    }

    printf("\nSorted Array is:\n");
    for(i=0; i<n; i++) {
        printf("%d\n",a[i]);
    }
}

int main (int argc, char *argv[]) {
    int i, j=1, l, key;

    int n = argc-l;
    int a[n];
    char *args[n+l];

    printf("\nPid of the 2nd program is: %d\n",getpid());

    for(i=0; i<=n; i++, j++) {
        args[i] = argv[j];
    }
    args[i] = (char*)0;

    for(l=0, i=0; i<n; i++, l++) {
        a[l] = atoi(args[i]);
    }
    bubble_sort (a,n);

    return 0;
}
