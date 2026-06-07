#include <stdio.h>


struct Job {
    char id;     
    int deadline; 
    int profit;   
};

void sortJobs(struct Job jobs[], int n) {
	int i,j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (jobs[i].profit < jobs[j].profit) {
                struct Job temp = jobs[i];
                jobs[i] = jobs[j];
                jobs[j] = temp;
            }
        }
    }
}

int findMaxDeadline(struct Job jobs[], int n) {
	int i;
    int max = jobs[0].deadline;
    for (i = 1; i < n; i++) {
        if (jobs[i].deadline > max) {
            max = jobs[i].deadline;
        }
    }
    return max;
}


void jobSequencing(struct Job jobs[], int n) {
   
    sortJobs(jobs, n);


    int maxDeadline = findMaxDeadline(jobs, n);
	int i,j;

    char result[maxDeadline];
    int slot[maxDeadline];
    for ( i = 0; i < maxDeadline; i++) {
        slot[i] = 0; 
    }

    int totalProfit = 0;
  
    for (i = 0; i < n; i++) {
        for (j = jobs[i].deadline - 1; j >= 0; j--) {
            if (slot[j] == 0) {
                slot[j] = 1;
                result[j] = jobs[i].id;
                totalProfit += jobs[i].profit;
                break;
            }
        }
    }


    printf("Scheduled Jobs: ");
    for (i = 0; i < maxDeadline; i++) {
        if (slot[i] == 1) {
            printf("%c ", result[i]);
        }
    }
    printf("\nTotal Profit = %d\n", totalProfit);
}

int main() {
    int n,i;
    printf("Enter number of jobs: ");
    scanf("%d", &n);

    struct Job jobs[n];
    for (i = 0; i < n; i++) {
        printf("Enter Job ID, Deadline, Profit for job %d: ", i+1);
        scanf(" %c %d %d", &jobs[i].id, &jobs[i].deadline, &jobs[i].profit);
    }

    jobSequencing(jobs, n);

    return 0;
}
