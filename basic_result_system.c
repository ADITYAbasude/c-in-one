#include <stdio.h>
#include <windows.h>

// Total marks

float total(float tol_num[], float sum)
{
    for (int i = 0; i < 6; i++)
    {
        sum += tol_num[i];
    }
    return sum;
}

int main()
{

    int choice;
    do
    {
        printf("\t\t\t\t---------------------------");
        printf(" Result System ");
        printf("---------------------------\n\n");

        printf("1. Go to result system. \n");
        printf("2. Exit\n");
        printf("Select your choice : ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            char name_student[20] , surname[20] , father[20] , district[30];        //Variable decleration
            int seat_no;

            printf("\n\n\n>>>Student info\n");

            printf("Enter the name of student : ");     //Enter the student name
            scanf("%s", &name_student);
            
            printf("Enter the name of Father : ");      //Enetr the father name 
            scanf("%s", &father);
            
            printf("Enter your surname : ");        //Enter your surname
            scanf("%s", &surname);

            printf("Enter the seat number of the student : ");      //Enter your seat number
            scanf("%d", &seat_no);
            
            printf("Enter the name of your District : ");       //Enter your district
            scanf("%s", &district);

            // marks system

            printf("\n>>>Student info\\marks\\ \n Enter your marks : \n");

            //Variables declareion

            float marks[6];
            char e[10] = {"English"};
            char m[10] = {"Marathi"};
            char h[10] = {"Hindi"};
            char ma[20] = {"Mathematics"};
            char s[10] = {"Science"};
            char ss[20] = {"Social Science"};
            //Taking marks from user

            printf("%s = ", e);
            scanf("%f", &marks[0]);

            printf("%s = ", m);
            scanf("%f", &marks[1]);

            printf("%s = ", h);
            scanf("%f", &marks[2]);

            printf("%s = ", ma);
            scanf("%f", &marks[3]);

            printf("%s = ", s);
            scanf("%f", &marks[4]);

            printf("%s = ", ss);
            scanf("%f", &marks[5]);

            // Loading......

            char a = 177, b = 219; //Variable declare
            printf("\t\t");
            for (int i = 0; i < 1; i++) //Loading
            {
                printf("\r");
                printf("\n Your result is creating ");
                
                printf("\nLoding... ");
                for (int i = 0; i < 15; i++)
                {
                    printf("%c", b);
                    sleep(1);
                }
            }

            printf("\n");
            for (int i = 0; i < 100; i++)
            {
                printf("=");
            }

            printf("\n||\t\t\t\t\t\t\t\t\t\t\t\t  ||");
            printf("\n|| \t %s %s %s \t\t %d \t\t %s \t\t\t||", name_student, father, surname, seat_no, district);
            printf("\n||\t\t\t\t\t\t\t\t\t\t\t\t  ||\n");

            for (int i = 0; i < 100; i++)
            {
                printf("=");
            }

            printf("\n||\t\t\t\t\t\t||\t\t\t\t\t\t  ||\n");
            printf("||\t\t %s \t\t\t|| \t\t\t %1.1f \t\t\t  ||", e, marks[0]);

            printf("\n||\t\t\t\t\t\t||\t\t\t\t\t\t  ||\n");
            printf("||\t\t %s \t\t\t|| \t\t\t %1.1f \t\t\t  ||", m, marks[1]);

            printf("\n||\t\t\t\t\t\t||\t\t\t\t\t\t  ||\n");
            printf("||\t\t %s \t\t\t\t|| \t\t\t %1.1f \t\t\t  ||", h, marks[2]);

            printf("\n||\t\t\t\t\t\t||\t\t\t\t\t\t  ||\n");
            printf("||\t\t %s \t\t\t|| \t\t\t %1.1f \t\t\t  ||", ma, marks[3]);

            printf("\n||\t\t\t\t\t\t||\t\t\t\t\t\t  ||\n");
            printf("||\t\t %s \t\t\t|| \t\t\t %1.1f \t\t\t  ||", s, marks[4]);

            printf("\n||\t\t\t\t\t\t||\t\t\t\t\t\t  ||\n");
            printf("||\t\t %s \t\t|| \t\t\t %1.1f \t\t\t  ||\n", ss, marks[5]);

            for (int i = 0; i < 100; i++)
            {
                printf("=");
            }

            float sum = total(marks, 0);
            float avg = (sum / 600) * 100;
            printf("\n|| \t\t\t\t || \t\t\t\t || \t\t\t\t  ||");
            printf("\n|| \tTotal : %1.1f \t\t ||\t\t %1.2f %% \t || ", sum, avg);
            if (avg >= 35.0)
            {
                printf("\t\t Pass \t\t  ||");
            }

            else
            {
                printf("\t\tFail\t\t  ||");
            }

            printf("\n|| \t\t\t\t || \t\t\t\t || \t\t\t\t  ||\n");

            for (int i = 0; i < 100; i++)
            {
                printf("=");
            }

            printf("\n1. Repeat this process. \n");
            printf("2. Exit\n");
            printf("Select your choice : ");
            scanf("%d", &choice);
        }
        

    } while (choice == 1);

    return 0;
}