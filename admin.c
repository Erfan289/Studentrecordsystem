
#include "admin.h"
#include "program.h"
 void Add_student_record(){
char name[100];
    char student_password[20];
    int student_id,gender,age,grade;
    printf("Enter Student's Name:");
    scanf("%s",&name);
    printf("Enter the Student's ID:");
    scanf("%d",&student_id);
    printf("Enter Student's Password:");
    scanf("%s",&student_password);
    printf("What is the Student's Gender? -F for Female/M for Male-");
    scanf("%d",&gender);
    printf("Enter the Student's Age:");
    scanf("%d",&age);
    printf("Enter the Student's Grade:");
    scanf("%d",&grade);
    addStudent(name,student_password,grade,student_id,age,gender);

}

 void Remove_student_record(){

int student_id;
    printf("Enter the ID of the Student you want to remove:");
    scanf("%d",&student_id);
    removeStudent(student_id);
}
View_student_record()
{

    int student_id;
    printf("Enter Student's ID whom you want to show his record:");
    scanf("%d",&student_id);
    printf("The Student's Records:\n");
    viewStudentRecord(student_id);
}
char* Edit_admin_password(int decision)
{   if(decision==1){
    char admin_password[20];
    char new_admin_password[20];
    printf("Enter your new password:");
    scanf("%s",&new_admin_password);#include "admin.h"
 void Add_student_record(){
char name[20];
    char student_password[20];
    int student_id,age,grade,gender;
    printf("Enter Student's Name:");
    scanf("%s",&name);
    printf("Enter the Student's ID:");
    scanf("%d",&student_id);
    printf("Enter Student's Password:");
    scanf("%s",&student_password);
    printf("What is the Student's Gender? -1 for Female/2 for Male-");
    scanf("%d",&gender);
    printf("Enter the Student's Age:");
    scanf("%d",&age);
    printf("Enter the Student's Grade:");
    scanf("%d",&grade);
    addStudent(name,student_password,grade,student_id,age,gender);


}

 void Remove_student_record(){

int student_id;
    printf("Enter the ID of the Student you want to remove:");
    scanf("%d",&student_id);
    removeStudent(student_id);
}
View_student_record()
{

    int student_id;
    printf("Enter Student's ID whom you want to show his record:");
    scanf("%d",&student_id);
    printf("The Student's Records:\n");
    viewStudentRecord(student_id);
}
char* Edit_admin_password(int decision)
{   if(decision==1){
    char admin_password[20];
    char new_admin_password[20];
    printf("Enter your new password:");
    scanf("%s",&new_admin_password);
    AdminPassword(new_admin_password,1);
    DECIsion=2;
    }
    else if(decision==0){
    return AdminPassword("null",DECIsion);
    }
}
 void Edit_student_grade()
{
    int student_id,new_grade;
    printf("Enter the Student's ID:\n");
    scanf("%d",&student_id);
    printf("Enter the Student's new grade:");
    scanf("%d",&new_grade);
    editGrade(new_grade,student_id);
}
View_all_records(){
viewAllRecords();
}
    AdminPassword(new_admin_password,1);
    DECIsion=2; }
    else if(decision==0){
    return AdminPassword("null",DECIsion);
    }
}
 void Edit_student_grade()
{
    int student_id,new_grade;
    printf("Enter the Student's ID:\n");
    scanf("%d",&student_id);
    printf("Enter the Student's new grade:");
    scanf("%d",&new_grade);
    editGrade(new_grade,student_id);
}
View_all_records(){
viewAllRecords();
}


