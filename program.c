#include <stdio.h>
#include "string.h"
#include <stdlib.h>
#include "program.h"
#include "struct.h"

//DONE----------------
/*this function takes two inputs 1 for editing the password and any thing else to
set the initial value
*/
char* AdminPassword(char *newPass,int decision) {
 if (decision==0) {
adminPass = (char *) malloc(strlen("1234") + 1);
strcpy(adminPass, "1234");
return adminPass;
}
else if(decision==1){
    adminPass = (char *) realloc(adminPass, strlen(newPass) + 1);
    strcpy(adminPass, newPass);
printf("your password has been changed successfully\n\n");
}else if (decision==2){return adminPass;}
}
//this function takes id as an input and return the index of the given id
myIndex(int id) {
    int index;
    int i;
    for ( i = 0; i < 30; i++) {

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


    for (int i = 0; i < 20; i++) {
            if (arr[i].age==0){


            printf("%d :{----name : %s,password: %s ,ID : %d, degree: %d,age: %d,gender: %c----}\n\n", i+1, arr[i].name,arr[i].password
                   ,arr[i].id, arr[i].degree, arr[i].age, arr[i].gender);

        } else {
                    printf("%d :{----name : %s,password: %s ,ID : %d, degree: %d,age: %d,gender: %c----}\n\n", i+1, name[i],pass[i]
                   ,arr[i].id, arr[i].degree, arr[i].age, arr[i].gender);

        }


        }

    }

void viewYourRecord(int id) {
   int index= myIndex(id);

    printf("Student'sname is : %s\nStudent'sPassword is : %s\nStudent'sDegree is: %d\nStudent'sId is: %d\nStudent'sAge is: %d\nStudent'sGender is: %c\n", name[index],pass[index],arr[index].degree,arr[index].id,arr[index].age,arr[index].gender);


}
void viewStudentRecord(int id) {
    int index= myIndex(id);
    printf("Your Name is : %s\nYour Password is : %s\nYour Degree is: %d\nYour Id is: %d\nYour Age is: %d\nYour Gender is: %c\n", arr[index].name,arr[index].password,arr[index].degree,arr[index].id,arr[index].age,arr[index].gender);

}
void addStudent(char *Name, char *Password, int degree, int id, int age, int gender) {
    int i;
    for ( i = 0; i < 20; i++) {
        if (arr[i].id == id) {
            printf("this id already exists\n");
            Add_student_record();

        }}
        if(i==20) {
   if(newSizeOfClass(1)<20){
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

     for (int y  = 0; y <= 20; y++){
    if(arr[y].age!=0){
    counter++;
    }}
        if (DECISION==1){
            counter++;
            if (counter>=20){
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
 for ( i = 0; i <= 20; i++){
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
        else {  for(int i=0;i<20;i++){

                        if (id==arr[i].id)
                        return pass[i];

        }
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
