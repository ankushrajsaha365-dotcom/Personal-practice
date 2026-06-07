#include <stdio.h>

#define MAX 100

// Structure to store an activity
typedef struct {
    int index;  // original activity number
    int start;
    int end;
} Activity;

// Comparison function to sort activities by end time
void sortByEndTime(Activity activities[], int n) {
    Activity temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (activities[j].end > activities[j + 1].end) {
                temp = activities[j];
                activities[j] = activities[j + 1];
                activities[j + 1] = temp;
            }
        }
    }
}

// Greedy activity selection
void activitySelection(Activity activities[], int n) {
    sortByEndTime(activities, n);

    printf("\n--- Activity Selection (Greedy Approach) ---\n");
    printf("Activities sorted by end time:\n");
    printf("%-12s %-12s %-12s\n", "Activity", "Start", "End");
    printf("-----------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-12d %-12d %-12d\n", activities[i].index, activities[i].start, activities[i].end);
    }

    printf("\nSelected Activities:\n");
    printf("%-12s %-12s %-12s\n", "Activity", "Start", "End");
    printf("-----------------------------------\n");

    // First activity is always selected
    int lastSelected = 0;
    printf("%-12d %-12d %-12d\n",
           activities[0].index, activities[0].start, activities[0].end);
    int count = 1;

    for (int i = 1; i < n; i++) {
        // Select activity if its start time >= end time of last selected
        if (activities[i].start >= activities[lastSelected].end) {
            printf("%-12d %-12d %-12d\n",
                   activities[i].index, activities[i].start, activities[i].end);
            lastSelected = i;
            count++;
        }
    }

    printf("-----------------------------------\n");
    printf("Total activities selected: %d out of %d\n", count, n);
}

int main() {
    Activity activities[MAX];
    int n;

    printf("=== Activity Selection Problem ===\n\n");
    printf("Enter the number of activities: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Invalid number of activities. Please enter between 1 and %d.\n", MAX);
        return 1;
    }

    printf("\nEnter start time and end time for each activity:\n");
    for (int i = 0; i < n; i++) {
        activities[i].index = i + 1;
        printf("Activity %d -> Start time: ", i + 1);
        scanf("%d", &activities[i].start);
        printf("Activity %d -> End time:   ", i + 1);
        scanf("%d", &activities[i].end);

    }

    activitySelection(activities, n);

    return 0;
}