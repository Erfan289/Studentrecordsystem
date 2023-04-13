#include "admin.h"
#include "system.h"

void system_mode()
{
   int mode;
   do
   {
      printf("Please choose the number of the mode : \n");
      printf("1.Admin  2.User \n");
      scanf("%d", &mode);
      if (mode == 1)
      {
         admin_mode();
         break;
      }
      else if (mode == 2)
      {
         //user_mode();
         break;
      }
      else
         printf("Enter valid mode option !\n");
   } while (mode != 1 || mode != 2);
}
void admin_mode()
{
   int ad_mode_choice = 0, ad_pass_attempts = 0;
   char ad_pass[20];

   //char *admin_pass = (char *)malloc(strlen(ad_pass) + 1);
   //strcpy(admin_pass, );
   for (ad_pass_attempts; ad_pass_attempts < 3; ad_pass_attempts++)
   {
      printf("Enter your password please to enter admin's mode: \n");
      scanf("%s", ad_pass);
      if (!strcmp(ad_pass, Edit_admin_password(0)))
      {
         while (1)
         {
            printf("----------------------------\n");
            printf("Welcome ,Admin \n\
                    1. Add student record to the system.\n\
                    2. Remove student record from the system.\n\
                    3. View student record on the system.\n\
                    4. View all records on the system.\n\
                    5. Edit admin password.\n\
                    6. Edit student grade.\n\
                    7. Return to system options.\n\
                    8. Exit.\n");
            printf("----------------------------\n");

            printf("Enter the number of choice please:");
            scanf("%d", &ad_mode_choice);
            switch (ad_mode_choice)
            {
            case 1:
               Add_student_record();
               break;

            case 2:

               Remove_student_record();
               break;

            case 3:

               View_student_record();

               break;

            case 4:
               View_all_records();
               break;

            case 5:
               Edit_admin_password(1);
               break;

            case 6:
               Edit_student_grade();
               break;

            case 7:
               system_mode();
               break;

            case 8:
               break;

            default:
               printf("Invalid choice !\n");
               break;
            }
         }
      }
      else
      {
         printf("Invalid password\n");
      }
   }
   if (ad_pass_attempts == 3)
   {
      printf("You failed 3 times in entering the password!\n");
      printf("You can't enter admin mode! \n");
   }
}

void user_mode()
{
   char us_pass[20];
   int us_id = 0, user_id = 0;
   char *user_pass = (char *)malloc(strlen(us_pass) + 1);
   *user_pass = 0;
   for (int user_pass_attempts = 0; user_pass_attempts < 3; user_pass_attempts++)
   {
      printf("Enter your password please to enter user mode: ");
      scanf("%s", user_pass);
      printf("Enter your ID please: ");
      scanf("%d", &us_id);
      if (us_pass == user_pass && us_id == user_id)
      {
         while (1)
         {
            printf("----------------------------\n");
            printf("Welcome, User\n\
            1. View your record.\n\
            2. Edit your name.\n\
            3. Edit your password.\n\
            4. Return to system options.\n\
            5. Exit\n");
            printf("----------------------------\n");
            int us_mode_cohice = 0;
            printf("Enter the number of choice please: ");
            scanf("%d", &us_mode_cohice);
            switch (us_mode_cohice)
            {
            case 1:
               View_your_record(us_id);
               break;

            case 2:
               Edit_your_password(us_id);

               break;

            case 3:
               Edit_your_name(us_id);

               break;

            case 4:
               system_mode();
               break;

            case 5:
               break;

            default:
               printf("Invalid choice");
               break;
            }
         }
      }
      else
      {
         printf("Wrong password or ID!\n");
         printf("Try again!\n");
      }
      if (user_pass_attempts == 2)
      {
         printf("You failed 3 times in entering the password and ID!\n");
         printf("You can't enter user mode! \n");
      }
   }
}

