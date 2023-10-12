#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int dayOfWeek(int year, int month, int day) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int totalDays = 0;

    for (int i = 1980; i < year; i++)
        totalDays += isLeapYear(i) ? 366 : 365;

    for (int i = 1; i < month; i++) {
        totalDays += daysInMonth[i];
        if (i == 2 && isLeapYear(year)) {
            totalDays++;
        }
    }

    totalDays += day;

    return (totalDays+1) % 7;
}

int main() {
    int year, month, day;
    scanf("%d-%d-%d", &year, &month, &day);

    int dayIndex = dayOfWeek(year, month, day);
    char* daynames[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    printf("%s\n", daynames[dayIndex]);
    return 0;
}
