#include "admin.h"
#include "program.h"
 void Add_student_record(){
    char name[30];
    char student_password[30];
    int student_id,age,grade,gender;
    printf("Enter Student's Name:\n");
    input(name,30);
    printf("Enter the Student's ID:\n");
    scanf("%d",&student_id);
    printf("Enter Student's Password:\n");
    input(student_password,30);
    printf("What is the Student's Gender? -1 for Female/2 for Male-\n");
    scanf("%d",&gender);
    printf("Enter the Student's Age:\n");
    scanf("%d",&age);
    printf("Enter the Student's Grade:\n");
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
    char new_admin_password[30];
    printf("Enter your new password:");
    input(new_admin_password,30);
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
