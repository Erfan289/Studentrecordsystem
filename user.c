#include "program.h"
#include "user.h"
View_your_record(int Id)
{

    viewYourRecord(Id);
}
char* Edit_your_password(int Id,int DEcision)
{  char new_password[30];
     if(DEcision==0){

Password(0,"null",0);
}
    else if (DEcision==1){
    printf("please enter your password : \n");
    input(new_password,30);
    Password(Id, new_password,1);
    printf("your password has been changed successfully!\n");}
else{

    return Password(Id,"null",2);
}
}
Edit_your_name(int Id,int DEcision)
{  char new_name[30];
     if(DEcision==0){
Name(Id, "null",0);
  }
    else{
    printf("please enter your new name \n");
    input(new_name,30);
    Name(Id,new_name,1);
    printf("your name has been changed successfully!\n");
}
}


