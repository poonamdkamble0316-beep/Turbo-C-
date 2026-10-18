#include <stdio.h>
#include <conio.h>

void main()
{
    int sensor1, sensor2, sum;

    clrscr();

    printf("Enter Sensor 1 reading: ");
    scanf("%d", &sensor1);

    printf("Enter Sensor 2 reading: ");
    scanf("%d", &sensor2);

    sum = sensor1 + sensor2;

    printf("\nSum of Two Sensors = %d", sum);

    getch();
}
