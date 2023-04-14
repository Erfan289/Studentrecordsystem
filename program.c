#include <stdio.h>
#include "string.h"
#include <stdlib.h>
#include"program.h"
#include "struct.h"

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
    printf("%s",adminPass);
}
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

            printf("%d :{----name : %s,password: %s ,ID : %d, degree: %d,age: %d,gender: %c----}\n\n", i+1, arr[i].name,arr[i].password
                   ,arr[i].id, arr[i].degree, arr[i].age, arr[i].gender);

        }

    }

void viewYourRecord(int id) {
   int index= myIndex(id);
    printf("Student'sname is : %s\nStudent'sPassword is : %s\nStudent'sDegree is: %d\nStudent'sId is: %d\nStudent'sAge is: %d\nStudent'sGender is: %c\n", arr[index].name,arr[index].password,arr[index].degree,arr[index].id,arr[index].age,arr[index].gender);

}

void viewStudentRecord(int id) {
    int index= myIndex(id);
    printf("Your Name is : %s\nYour Password is : %s\nYour Degree is: %d\nYour Id is: %d\nYour Age is: %d\nYour Gender is: %c\n", arr[index].name,arr[index].password,arr[index].degree,arr[index].id,arr[index].age,arr[index].gender);

}
int addStudent(char *name, char *password, int degree, int id, int age, int gender) {
    for (int i = 0; i < 20; i++) {
        if (arr[i].id == id) {
            printf("this id already exists\n");
            return 0;
        }
        else {
        if(newSizeOfClass(1)<20){
    int newIndex=lastIndex();
   arr[newIndex].name = (char *) malloc(strlen(name) + 1);
   strcpy(arr[newIndex].name, name);
   arr[newIndex].password = (char *) malloc(strlen(password) + 1);
   strcpy(arr[newIndex].password, password);
   arr[newIndex].degree = degree;
    arr[newIndex].id = id;
    arr[newIndex].age = age;}
    } }}
//this function takes two inputs 1 for incrementing ,anything else for decrementing
int newSizeOfClass(int DECISION){
     int y,counter;
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
    if (Decision==1){
    for(int p=0;p<2;p++){
         arr[p].name= (char*) malloc(strlen(arr[p].name)+1);
        strcpy(arr[p].name,arr[p].name);
    }}

    else{
        name[myIndex(id)] = (char *) realloc(name[myIndex(id)], strlen(newname) + 1);
        strcpy(name[myIndex(id)], newname);
        arr[myIndex(id)].name=newname;
        printf("%s",name[myIndex(id)]);
}}
void Password(int id, char *newpass,int Decision) {
    char *Pass[20];
    if (Decision==1){
    for(int p=0;p<2;p++){
         Pass[p]= (char*) malloc(strlen(arr[p].password)+1);
        strcpy(Pass[p],arr[p].password);
    }} else{
        Pass[myIndex(id)] = (char *) realloc(Pass[myIndex(id)], strlen(newpass) + 1);
        strcpy(Pass[myIndex(id)], newpass);
        arr[myIndex(id)].password=newpass;
        printf("%s",Pass[myIndex(id)]);
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


}
