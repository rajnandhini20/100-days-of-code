/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 50 Question: 99
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
 */

#include <stdio.h>

int main() {
    char date[20];
    int dd, mm, yyyy;

    scanf("%19s", date);

    sscanf(date, "%d/%d/%d", &dd, &mm, &yyyy);

    if (mm == 4) {
        printf("%02d-Apr-%04d", dd, yyyy);
    } else {
        printf("Invalid month");
    }

    return 0;
}
