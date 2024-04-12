#include <stdio.h>
struct Job {
    char id;      
    int deadline; 
    int profit;   
};

void sortJobs(struct Job arr[], int n) {
    struct Job temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].profit < arr[j + 1].profit) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int findMaxDeadline(struct Job arr[], int n) {
    int maxDeadline = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i].deadline > maxDeadline) {
            maxDeadline = arr[i].deadline;
        }
    }
    return maxDeadline;
}


void jobSequencing(struct Job arr[], int n) {
    
    sortJobs(arr, n);
    

    int maxDeadline = findMaxDeadline(arr, n);
    char jobSequence[maxDeadline];
    int slot[maxDeadline];
    for (int i = 0; i < maxDeadline; i++) {
        slot[i] = -1;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = arr[i].deadline - 1; j >= 0; j--) {
            if (slot[j] == -1) {
                slot[j] = i;
                jobSequence[j] = arr[i].id;
                break;
            }
        }
    }
    
    printf("Job Sequence: ");
    for (int i = 0; i < maxDeadline; i++) {
        if (slot[i] != -1) {
            printf("%c ", jobSequence[i]);
        }
    }
}

int main() {
    struct Job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},
                         {'d', 1, 25}, {'e', 3, 15} };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Given jobs:\n");
    printf("Job ID\tDeadline\tProfit\n");
    for (int i = 0; i < n; i++) {
        printf("%c\t%d\t\t%d\n", arr[i].id, arr[i].deadline, arr[i].profit);
    }
    
    printf("\n");
    jobSequencing(arr, n);
    
    return 0;
}

