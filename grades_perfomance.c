#include <stdio.h> // write codes  using(c language) to knowing marks and their perfomancy level 
int main(){
int marks; // to know the compiler that marks & marks number is a variable which stored in int
   int marks_number;
   printf("enter your marks :"); // give answer to the following questions
   scanf("%d",&marks); // follow this process to know the results
   if(marks>30)  /* using if else keywords to follow up the procedure*/
   {
    printf("C\n"); // grades according to your marks
   }
   else if(marks>=30 && marks<70 ){ // to add more conditions else if keyword is used
    printf("B\n");}
    else if(marks>=70 && marks<90){
        printf("A\n");
    }
   else{ // in else their is no condition needed if the all conditions above is not valid it proceed without any condition
    printf("A+\n");   }
// some marking systems for your grades follow the sequence to know perfomance & compliments ,motivation you needed
     // A+=1 A= 2 B=3 C=4
    
    printf("enter marks_number :\n"); // follow the question just you did before
    scanf("%d",&marks_number);
switch( marks_number){ 
case 1 : printf("very good"); break;
case 2 : printf("good have to reah to milestone"); break;
case 3 : printf("average can be better"); break;
case 4: printf("need improvment"); break;
default : printf("not valid");
} // Thanks if any help u require jurisector is available ...
    return 0;
}