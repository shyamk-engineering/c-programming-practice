
#include <stdio.h>

int main()
{
    float avg;

    printf("Enter average mark: ");
    scanf("%f", &avg);

    if (avg >= 90)
        printf("Grade A");
    else if (avg >= 75)
        printf("Grade B");
    else if (avg >= 50)
        printf("Grade C");
    else
        printf("Grade D");

    return 0;
}
