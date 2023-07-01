#include <stdio.h>
int main()
{
    int emn, hours, op, count = 0, top = 0;
    float per;

    printf("Enter the employee number and hours worked: ");
    scanf("%d %d", &emn, &hours);

    while (emn != -999)
    {
        if (hours <= 40)
            op = hours * 150;
        else
            op = 40 * 150 + (hours - 40) * 200;

        if (op > 4000)
            count++;

        top += op;

        printf("Enter the employee number and hours worked: ");
        scanf("%d %d", &emn, &hours);
    }

    per = (float)count / (count + 1) * 100;

    printf("Employee number\tOvertime Pay\tPercentage\n");
    printf("%d\t\t %d\t\t %.2f%%\n", emn, op, per);

    return 0;
}
