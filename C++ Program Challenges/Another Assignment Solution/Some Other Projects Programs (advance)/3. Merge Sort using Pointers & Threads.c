#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define NUMBER_OF_THREADS 3

void* sorter(void* params); 
void* merger(void* params);   
void displayArray(void);      
void printNewLines(int numOfLines);

int list[SIZE] = {7,12,19,3,18,4,2,6,15,8};
int result[SIZE];

typedef struct parameters
{
        int from_index;
        int to_index;
        int threadCount;
} parameters;

int main (int argc, const char* argv[]) 
{
        printf("Unsorted List: ");
        int i = 0;
        for (i; i < SIZE; i++) {
                printf("%d ", list[i]);
        }
        printNewLines(2);
    
        pthread_t workers[NUMBER_OF_THREADS];

        parameters* p1 = malloc(sizeof(parameters*)); 
        p1 -> from_index = 0;
        p1 -> to_index = (SIZE - 1) / 2;
        p1 -> threadCount = 1;
        pthread_create(&workers[0], 0, sorter, p1);
        
        parameters* p2 = malloc(sizeof(parameters*));
        p2 -> from_index = p1 -> to_index + 1;
        p2 -> to_index = (SIZE -1);
        p2 -> threadCount = 2;
        pthread_create(&workers[1], 0, sorter, p2);
   
        pthread_join(workers[0], 0);
        pthread_join(workers[1], 0);

        p1 -> to_index = p2 -> from_index;
        p1 -> threadCount = 3;
        pthread_create(&workers[2], 0, merger, p1);
        pthread_join(workers[2], 0);
        
        displayArray();
        
    return 0;
}

void* sorter(void* params)
{
        parameters* p = (parameters*)params;
        int startIndex = p -> from_index;
        int endIndex = p -> to_index;
        int threadCount = p -> threadCount;
        int min_index;
        int temp;

        printf("Sorting Sub-List: %d...\n", threadCount);
			int i = startIndex;
        for (i; i < endIndex; i++) {
                min_index = i;
                int j = i + 1;
                for (j; j <= endIndex; j++) {
                        if (list[j] < list[min_index]) {
                                min_index = j;
                        }
                }

                temp = list[min_index];
                list[min_index] = list[i];
                list[i] = temp;
        }

        printf("Sorted Sub-List %d: ", threadCount);
        int k = startIndex;
        for (k; k <= endIndex; k++) {
                printf("%d ", list[k]);
        }
        printNewLines(1);

        pthread_exit(0);
}

void* merger(void* params)
{
        printf("Merging the Sub-Lists...\n");
        parameters* p = (parameters*)params;
        int index_list1 = p -> from_index;
        int index_list2 = p -> to_index;
        printf("List 1 begins at index: %d\n", index_list1);
        printf("List 2 begins at index: %d\n", index_list2);
        int i = 0;
        for ( i; i < SIZE; i++) {
                if (list[index_list1] < list[index_list2]) {
                        result[i] = list[index_list1];
                        printf("%d added to result from List 1!", result[i]);
                        index_list1++;
                        printf("\t new index: %d\n", index_list1);
                }
                else {
                        if (index_list2 <= 9) {
                                result[i] = list[index_list2];
                                printf("%d added to result from List 2!", result[i]);
                                index_list2++;
                                printf("\t new index: %d\n", index_list2);
                        }
                        else {
                                result[i] = list[index_list1];
                                printf("%d added to result from List 1!", result[i]);
                                index_list1++;
                                printf("\t new index: %d\n", index_list1);
                        }
                }
        }
        printNewLines(2);
        
        pthread_exit(0);
}

void displayArray(void) {
        printf("The sorted array: ");
        int i = 0;
        for ( i; i < SIZE; i++) {
                printf("%d ", result[i]);
        }
        printNewLines(2);
}

void printNewLines(int numOfLines) {
	int i = 0;
        for ( i; i < numOfLines; i++) {
                printf("\n");
        }
}

