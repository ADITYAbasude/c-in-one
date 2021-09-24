#include <stdio.h>
#include <stdlib.h>

int marks_summation(int *marks, int number_of_students, char gender)
{
    int sum =0;

    for (int i = (gender == 'b' ? 0 : 1); i < number_of_students; i = i + 2)
        sum += *(marks + i);
    return sum;
}

int main()
{
    int *marks, number_of_students, sum;
    char gender;

    scanf("%d", &number_of_students);
    marks = (int *)malloc(number_of_students * sizeof(int));
    for (int i = 0; i < number_of_students; i++)
    {
        scanf("%d", (marks + i));
    }
    scanf("%c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
    return 0;
}