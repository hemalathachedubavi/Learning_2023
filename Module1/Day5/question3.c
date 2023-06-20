/*3. Write a program using structures to calculate the difference between two time periods using a user-defined function.*/

#include <stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
};
struct Time calculateTimeDifference(struct Time start, struct Time end) {
    struct Time difference;
    int startTimeInSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
    int endTimeInSeconds = end.hours * 3600 + end.minutes * 60 + end.seconds;
    int differenceInSeconds = endTimeInSeconds - startTimeInSeconds;
    difference.hours = differenceInSeconds / 3600;
    differenceInSeconds %= 3600;
    difference.minutes = differenceInSeconds / 60;
    difference.seconds = differenceInSeconds % 60;
    return difference;
}
int main() {
    struct Time startTime, endTime, difference;
    printf("Enter the start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &startTime.hours, &startTime.minutes, &startTime.seconds);
    printf("Enter the end time (hh:mm:ss): ");
    scanf("%d:%d:%d", &endTime.hours, &endTime.minutes, &endTime.seconds);
    difference = calculateTimeDifference(startTime, endTime);
    printf("\nTime Difference: %02d:%02d:%02d\n", difference.hours, difference.minutes, difference.seconds);
    return 0;
}