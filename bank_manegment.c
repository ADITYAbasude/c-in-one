#include <stdio.h>

struct open_bank_account
{
    // -----------name---------------
    char name[1000];
    // ----------phone_number------------
    unsigned long int phone_number;
    // ---------age-----------
    int age;
    // -------------address----------
    char address[1000];
    // --------------add amount-------------
    int long add_amount;
    // --------------srno----------------
};


int main()
{
    // -------------variables declaretion----------
    int choice;
    struct open_bank_account oba[1000];
    int srno = 0;

    printf("Bank manegment system\n");
    printf("Notic! your name and address should be not give a space but you give a underscore\n");
con:
    printf("\n\npress 1. to create a new bank account \npress 2. to see your account manegment\n");
    scanf("%d", &choice);
    if (choice == 1)
    {
        int repet_process;
        printf("\t1). Create your bank account\n");
        do
        {
            // ----------Enter a name---------
            printf("\n\n\tEnter your full name : ");
            scanf("%s", &oba[srno].name);
            // -----------Enter a phone number-----------
            printf("\tEnter your phone number : ");
            scanf("%d", &oba[srno].phone_number);

            // if (oba->phone_number < 6999999999 || oba->phone_number >= 1000000000)
            // {
            //     printf("\tInvalid number\n");
            //     break;
            // }
            // else if ()
            // {
            //     printf("\tInvalid number\n");
            //     break;
            // }

            // -------------Enter a age------------
            printf("\tEnter your age : ");
            scanf("%d", &oba[srno].age);

            if (oba[srno].age <= 17) //if case
            {
                printf("\tyour age must be equal than 18 and above 18");
                break;
            }

            // -----------Enter your Address-------------
            printf("\tEnter your address : ");
            scanf("%s", &oba[srno].address);

            // ----------------your se.no is --------------
            printf("\tYour Sr.No is : %d\n", srno++);

            // ----------------account_id printing of person----------------

            printf("\tAdd a some amount of money in your account : ");
            scanf("%d", &oba[srno].add_amount);

            // ----------------choice---------------
            printf("press 1. To add a another new account and press 2. to came back to home : "); //return
            scanf("%d", &repet_process);

        } while (repet_process == 1);
        goto con; // go step no 21:
    }

    //if choice be taken 2
    else if (choice == 2)
    {
        int repet_process;
        do
        {

            //printing
            printf("\t2). Showing your bank data\n\n");
            int take_sr_no;
            printf("Enter your Sr.No : ");
            scanf("%d", &take_sr_no);

            printf("\t Name is : %s\n", oba[take_sr_no].name);
            printf("\t Phone number is : %d\n", oba[take_sr_no].phone_number);
            printf("\t Age is : %d\n", oba[take_sr_no].age);
            printf("\t Address is : %s\n", oba[take_sr_no].address);
            printf("\t Account balanced is : %d\n", oba[take_sr_no].add_amount);

            // ----------------choice---------------
            printf("press 1. To repeat this process 2. to came back to home : "); //return
            scanf("%d", &repet_process);
            printf("\n\n");
        } while (repet_process == 1);
        goto con;
    }

    return 0;
}

