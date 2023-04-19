#include <stdio.h>
#include "string.h"
#include <stdlib.h>
#include "program.h"
#include "struct.h"

/*this function takes two inputs 1 for editing the password and any thing else to
set the initial value
*/
char* AdminPassword(char *newPass,int decision) {
 if (decision==default_password) {
adminPass = (char *) malloc(strlen("1234") + 1);
strcpy(adminPass, "1234");
return adminPass;
}
else if(decision==editTheAdminPassword){
    adminPass = (char *) realloc(adminPass, strlen(newPass) + 1);
    strcpy(adminPass, newPass);
printf("your password has been changed successfully\n\n");
}else if (decision==returnTheNewPassword){return adminPass;}
}
//this function takes id as an input and return the index of the given id
myIndex(int id) {
    int index;
    int i;
    for ( i = 0; i < size_of_class; i++) {

        if (arr[i].id == id) {
            index = i;
            break;
           }

}if(index!=i){
printf("wrong id\n");
return -1;
} else
return index;
}
//this function will show all the stored records in the system
void viewAllRecords() {
 int Counter=0;

    for (int i = 0; i < size_of_class; i++) {
            if (arr[i].age!=0){


           Counter++;
                    printf("%d :{----name : %s,password: %s ,ID : %d, degree: %d,age: %d,gender: %c----}\n\n", Counter, name[i],pass[i]
                   ,arr[i].id, arr[i].degree, arr[i].age, arr[i].gender);


        }
        }


        }

void viewStudentRecord(int id) {
   int index= myIndex(id);

    printf("Student's name is : %s\nStudent's Password is : %s\nStudent's Degree is: %d\nStudent's Id is: %d\nStudent's Age is: %d\nStudent's Gender is: %c\n", name[index],pass[index],arr[index].degree,arr[index].id,arr[index].age,arr[index].gender);


}
void viewYourRecord(int id) {
   int index= myIndex(id);

    printf("your name is : %s\nyour Password is : %s\nyour Degree is: %d\nyour Id is: %d\nyour Age is: %d\nyour Gender is: %c\n", name[index],pass[index],arr[index].degree,arr[index].id,arr[index].age,arr[index].gender);


}
void addStudent(char *Name, char *Password, int degree, int id, int age, int gender) {
    int i;
    for ( i = 0; i < size_of_class; i++) {
        if (arr[i].id == id) {
            printf("this id already exists\n");
            Add_student_record();

        }}
        if(i==20) {
   if(newSizeOfClass(1)<size_of_class){
   int newIndex=lastIndex();
   name[newIndex] = (char *) malloc(strlen(Name) + 1);
   strcpy(name[newIndex], Name);
   pass[newIndex] = (char *) malloc(strlen(Password) + 1);
   strcpy(pass[newIndex], Password);
   arr[newIndex].degree = degree;
   arr[newIndex].id = id;
   arr[newIndex].age = age;
   if(gender==1){
   arr[newIndex].gender = 'F';

   }else if(gender==2){
   arr[newIndex].gender = 'M';
   } else{printf("invalid choice");}

   } printf("the student has been added successfully!\n");
    } }
//this function takes two inputs 1 for incrementing ,anything else for decrementing
int newSizeOfClass(int DECISION){

     for (int y  = 0; y <= size_of_class; y++){
    if(arr[y].age!=0){
    counter++;
    }}
        if (DECISION==1){
            counter++;
            if (counter>=size_of_class){
            printf("sorry ,sir the class is full\n");
            return 20;}
            else
                return 0;
        }
        else
          counter--;


        }
int lastIndex(){
int i;
 for ( i = 0; i <= size_of_class; i++){
    if(arr[i].age==0){
    break;
    }}
    return i;
    }
void editGrade(int degree, int id) {
    int index = myIndex(id);
    arr[index].degree = degree;
}
void Name(int id, char *newname,int Decision) {
    if (Decision==0){
    for(int p=0;p<2;p++){
    name[p]= (char*) malloc(strlen(arr[p].name)+1);
    strcpy(name[p],arr[p].name);

    }}

    else if(Decision==1) {
        name[myIndex(id)] = (char *) realloc(name[myIndex(id)], strlen(newname) + 1);
        strcpy(name[myIndex(id)], newname);
        arr[myIndex(id)].name=newname;

}}
char* Password(int id, char *newpass,int Decision) {

    if (Decision==0){
    for(int p=0;p<2;p++){
         pass[p]= (char*) malloc(strlen(arr[p].password)+1);
         strcpy(pass[p],arr[p].password);

    }} else if (Decision==1){
        pass[myIndex(id)] = (char *) realloc(pass[myIndex(id)], strlen(newpass) + 1);
        strcpy(pass[myIndex(id)], newpass);
        arr[myIndex(id)].password=newpass;
        printf("%s",pass[myIndex(id)]);
        }
  else { int i;
         for( i=0;i<size_of_class;i++){

                        if (id==arr[i].id)
                        return pass[i];

        } if(i==20){return "NULL";}
        }
}


void removeStudent(int id) {


        arr[myIndex(id)].age=0;
        arr[myIndex(id)].degree=0;
        arr[myIndex(id)].gender = 0;
        free(arr[myIndex(id)].name);
        arr[myIndex(id)].name = "NULL";
        free(arr[myIndex(id)].password);
        arr[myIndex(id)].password = "NULL";
        arr[myIndex(id)].id=0;
        newSizeOfClass(0);
        printf("the student has been removed successfully\n\n");


}
