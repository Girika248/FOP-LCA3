#include <stdio.h>
int main() {

    char name[5][30];
    char subject[5][30];
    int faculty, i, day, period;

    printf("Enter number of faculty: ");
    scanf("%d", &faculty);
    for(i = 0; i < faculty; i++) {
        printf("Enter faculty name: ");
        scanf("%s", name[i]);

        printf("Enter subject: ");
        scanf("%s", subject[i]);
    }

    printf("\nFaculty Timetable:\n");
    for(day = 1; day <= 5; day++) {
        printf("\nDay %d\n", day);

        for(period = 1; period <= 4; period++) {
            printf("Period %d: %s - %s\n",
                   period,
                   subject[(day + period) % faculty],
                   name[(day + period) % faculty]);
        }
    }

    return 0;
}