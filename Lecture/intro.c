// # -> Preprocessor  
// include -> directive to include a file
// stdio.h -> Standard Input Output Header file (contains printf, scanf etc.)

// int -> integer -> return type of main function
/*
multi-line
comment
*/

// main -> function -> starting point of program
// main function is called by the OS (Operating System)

// {} -> block of code -> function body
// () -> parenthesis -> parameter list (arguments) -> input to function


// First program with printf
// #include <stdio.h>   // Header file for input/output

// int main() {   // main function -> program starts here

//     // printf -> function to print text on screen
//     printf("C Programming samjh aa raha hai!"); // statement -> instruction
//     return 0;  // 0 -> exit status -> success
// }

// --------------------------------------------------------

// printf() -> calling (invoking) a function
// Example programs showing escape sequences:

// #include <stdio.h>

// int main() {
//     printf("Hello World!!\t");      // \t -> tab space
//     printf("This is my second C programming class!\t");
//     printf("Thank You!");
//     return 0;
// }

// --------------------------------------------------------

// #include <stdio.h>

// int main() {
//     printf("Hello World!!\n");      // \n -> new line
//     printf("This is my second C programming class!\n");
//     printf("Thank You!");
//     return 0;
// }

// --------------------------------------------------------

// #include <stdio.h>

// int main() {
//     printf("Hello World!!");        // no \n, so next text prints on same line
//     printf("\nThis is my second C programming class!\n"); // new line
//     printf("Thank You!");
//     return 0;
// }

// --------------------------------------------------------

// #include <stdio.h>

// int main() {
//     printf("Hello World!!");
//     printf("\nThis is my second \nC programming class!\n"); // extra \n in middle
//     printf("Thank You!");
//     return 0;
// }

// --------------------------------------------------------

// Data Types in C

// 1. Integer -> int -> e.g., 12, 34, -12, -45, 0 -> 4 bytes
// 2. Float -> float -> e.g., 15.36, -9845.36547 -> 4 bytes
// 3. Double -> double -> e.g., 23456.56576869768, 3455.2324545767 -> 8 bytes
// 4. Character -> char -> e.g., 'a', 'A' -> 1 byte
// 5. String -> In C, no direct string datatype
//              Use char array -> char ch[] = "pawan";
//              "pawan" -> 5 characters -> 5 bytes

// Extra variations:
// signed int   -> positive and negative both
// unsigned int -> only positive
// short int    -> 2 bytes
// long int     -> 8 bytes
// long long int-> 8 bytes
// long double  -> 10 bytes
// wchar_t      -> 2 bytes (wide character)
// void         -> no value (used as return type of functions)



// formate Specifiers


// %d -> int
// %f -> float
// %lf -> double
// %c -> char
// %s -> string

// variable should be declared
// After declation of variable we can inisilised (assign value).
// one variable declared only one time -> redeclaration of variable not allowed

// #include<stdio.h>
// int main(){

//     // variable declaration

//     // datatype varible_name

//     int num;

//     num = 10;

//     printf("The value of num is : %d",num);

// }



// #include<stdio.h>
// int main(){

//     // variable declaration

//     // datatype varible_name

//     int num;

//     num = 10;

//     printf("The value of num is : %d\n",num);

//     // reinisilisation is allowed

//     num = 100;
//     printf("The value of num(reinisilisation) is : %d",num);

// }


// #include<stdio.h>
// int main(){

//     // variable declaration

//     // datatype varible_name

//     // we can declared and inisilisation of any variable in same line

//     int num = 10;

//     printf("The value of num is : %d\n",num);

//     // reinisilisation is allowed

//     num = 100;
//     printf("The value of num(reinisilisation) is : %d",num);

// }



// #include<stdio.h>
// int main(){

//     float price = 1000.5025;

//     printf("Price value is : %f",price);

// }


// #include<stdio.h>
// int main(){

//     float price = 1000.5025;

//     // printf("Price value is : %0.2f",price);
//     printf("Price value is : %0.3f",price);

// }


// #include<stdio.h>
// int main(){

//     double price = 1000.5025f;

//     // printf("Price value is : %0.2f",price);
//     printf("Price value is : %0.3lf",price);

// }



// #include<stdio.h>
// int main(){

//     char ch = 'a';

//     printf("character value is : %c",ch);

// }


// #include<stdio.h>
// int main(){

//     char *ch = "Pawan Maurya";

//     printf("character value is : %s",ch);

// }


// #include<stdio.h>
// int main(){

//     char ch[] = "Pawan Maurya";

//     printf("character value is : %s",ch);

// }

// Method 1:

// constant -> value which is not change
// it insilisation at the time of declaration at same line
// use of const keyword
// Syntax : const datatype varible_name = value;


// #include<stdio.h>

// int main(){

//     int num = 10;

//     num = 40;

//     printf("The value of num is : %d\n",num);

// }

// #include<stdio.h>

// int main(){

//    const int num = 10;

//     // num = 40; // compiler error

//     printf("The value of num is : %d\n",num);

// }


// #include<stdio.h>

// int main(){

//    const int num;

//     // num = 40; // not ok

//     printf("The value of num is : %d\n",num);

// }



// Method 2:

//  Micro  -> #define
//  Syntax : #define CONSTANT_NAME value
//  CONSTANT_NAME -> all letters should be in uppercase
//  value -> constant value
//  no ; at the end of line
//  no memory allocation for constant -> 
//  preprocessor replace all constant name with value before compilation
//  it is case sensitive : num and NUM are different
//  it is global in nature -> can be used anywhere in program after declaration
//  it can be used for only value not for variable


// #include<stdio.h>
// #define PI 3.14  // global variable

// int main(){
   
//     const int num = 100;

//     // PI = 46.45; // Not ok
//     // num = 200; // not ok

//     printf("The value of num is : %d\n",num);
//     printf("PI : %0.2f\n",PI); // 3.14
//     printf("PI : %d\n",sizeof(PI)); // 3.14

// }


// #include<stdio.h>
// #define PI 3  // global variable

// int main(){

//     int value;
   
//     const int num = 100;

//     // PI = 46.45; // Not ok
//     // num = 200; // not ok

//     printf("The value of num is : %d\n",num);
//     printf("PI : %d\n",PI); // 3.14
//     printf("PI : %d\n",sizeof(PI)); // 3.14

// }


// #include<stdio.h>
// #define PI "Pawan"  // global variable

// int main(){

//     int value;
   
//     const int num = 100;

//     // PI = 46.45; // Not ok
//     // num = 200; // not ok

//     printf("The value of num is : %d\n",num);
//     printf("PI : %s\n",PI); // 3.14
//     printf("PI : %d\n",sizeof(PI)); // 3.14
//     printf("The size of value : %d",sizeof(value));

// }


// scanf() -> It is used to take input from user
// Syntax : scanf("format specifier",&variable_name);
// & -> address of operator -> it gives the address of variable
// we have to use & before variable name in scanf
// we can take multiple input from user in single scanf
// we have to use space between format specifier in case of multiple input
// we have to use , between variable name in case of multiple input
// order of format specifier and variable name should be same
// we can use scanf only for variable not for constant

// #include<stdio.h>

// int main(){

//     int num; // declaration of variable


//     printf("Enter value of Num : ");
//     // printf("\nMemory of num  : %d",&num);

//     scanf("%d",&num);

//     printf("The value num is : %d",num);

// }


// #include<stdio.h>

// int main(){

//     int num; 
//     printf("Enter value of Num : ");
//     scanf("%d",&num); // user input
//     printf("The value num is : %d",num); // 100

// }


// operator :


// uniary ops : ++ ,--

// a++ => post increment -> phle use hoga baad me increase hoga.
// ++a => pre increment -> phle increase hoga baad me use hoga.

// a-- => post decrement -> phle use hoga hoga baad me decrement hoga.
// --a => pre decrement -> phle decrement hoga baad me use hoga.

// #include<stdio.h>

// int main(){

//     int a = 10;

//     printf("The value of a : %d\n",a);

// }


// #include<stdio.h>

// int main(){

//     int a = 10;

//     printf("The value of a : %d\n",a); // 10
//     a++; //10
//     printf("The value of a : %d\n",a); // 11

// }


// #include<stdio.h>

// int main(){

//     int x = 15;

//     printf("The value of x : %d\n",x++); // 15
//     printf("The value of x : %d\n",x++); //16
//     printf("The value of x : %d\n",x); // 17

// }


// #include<stdio.h>

// int main(){

//     int x = 15;

//     printf("The value of x : %d\n",x++); // 15
//     printf("The value of x : %d\n",++x); // 17
//     printf("The value of x : %d\n",++x); // 18

// }


// #include<stdio.h>

// int main(){

//     int x = 15;

//     printf("The value of x : %d\n",x--); // 15
//     printf("The value of x : %d\n",--x); // 13
//     printf("The value of x : %d\n",--x); // 12

// }


// #include<stdio.h>

// int main(){

//     int x = 15;
//     printf("The value of x : %d\n",x-- + x++); // 31, 15, 30, 

// }


// #include<stdio.h>

// int main(){

//    int x = 10;
//    int y = 5;

//    printf("Sum : %d\n",x+y); //15
//    printf("Sub : %d\n",x-y); // 5
//    printf("div : %d\n",x/y); // 2
//    printf("Rem : %d\n",x%y); // 0
//    printf("Mul : %d\n",x*y); // 50

// }


// #include<stdio.h>

// int main(){

//    int x = 10;
//    int y = 5;

//    printf("Rem : %d\n",y%x); // 5


// }




// Releational ops: > , < , >=, <=, ==, !=
// bool -> 
// true -> 1
// false -> 0

// #include<stdio.h>

// int main(){

//     float h1 = 65.5;
//     float h2 = 55;

//     printf("h1 > h2 : %d\n",(h1>h2)); // 1
//     printf("h1 < h2 : %d\n",(h1<h2)); // 0
//     printf("h1 <= h2 : %d\n",(h1<=h2)); // 0
//     printf("h1 == h2 : %d\n",(h1==h2)); // 0
//     printf("h1 != h2 : %d\n",(h1!=h2)); // 1
//     printf("h1 != h2 : %d\n",(h1!=h2)); // 1
// }

// Logical ops : && (Logical AND) ,|| (Logical OR) , Logical Not (!)


//  && (Logical AND) 

// a   &&  b    R
// ---------------
// 1       1    1
// 0       1    0
// 1       0    0
// 0       0    0



// #include<stdio.h>

// int main(){

//     float h1 = 65.5;
//     float h2 = 55;

//     printf("((h1>h2) && (h1>=h2)) : %d\n",((h1>h2) && (h1>=h2))); // 1
//     printf("((h1<h2) && (h1>h2)): %d\n",((h1<h2) && (h1>h2))); // 0
//     printf("((h1<=h2) && (h1!=h2)) : %d\n",((h1<=h2) && (h1!=h2))); // 0
//     printf("((h1==h2) && (h1<=h2)): %d\n",((h1==h2) && (h1<=h2))); // 0
//     printf("((h1!=h2) && (h1>h2)): %d\n",((h1!=h2) && (h1>h2))); // 1

// }


// (condn1) || (condn2)   R
//   1            1       1
//   0            1       1
//   1            0       1
//   0            0       0

// #include<stdio.h>

// int main(){

//     float h1 = 65.5;
//     float h2 = 55;

//     printf("((h1>h2) || (h1>=h2)) : %d\n",((h1>h2) || (h1>=h2))); // 1
//     printf("((h1<h2) || (h1>h2)): %d\n",((h1<h2) || (h1>h2))); // 1
//     printf("((h1<=h2) || (h1!=h2)) : %d\n",((h1<=h2) || (h1!=h2))); // 1
//     printf("((h1==h2) || (h1<=h2)): %d\n",((h1==h2) || (h1<=h2))); // 0
//     printf("((h1!=h2) || (h1>h2)): %d\n",((h1!=h2) || (h1>h2))); // 1

// }


// Logical NOT (!) 

// !true -> false
// !false -> true

// #include<stdio.h>

// int main(){

//     float h1 = 65.5;
//     float h2 = 55;

//     printf("!((h1>h2) || (h1>=h2)) : %d\n",!((h1>h2) || (h1>=h2))); // 0
//     printf("!((h1<h2) || (h1>h2)): %d\n",!((h1<h2) || (h1>h2))); // 0
//     printf("!((h1<=h2) || (h1!=h2)) : %d\n",!((h1<=h2) || (h1!=h2))); // 0
//     printf("!((h1==h2) || (h1<=h2)): %d\n",!((h1==h2) || (h1<=h2))); // 1
//     printf("!((h1!=h2) || (h1>h2)): %d\n",!((h1!=h2) || (h1>h2))); // 0

// }


// Assignment ops: =, *=, +=,-=,/=,%=

// #include<stdio.h>

// int main(){

//     int x = 10;

//     // x = x+50;

//     x += 50;

//     printf("%d\n",x); // 60

// }



// #include<stdio.h>

// int main(){

//     int x = 10;

//     x = x%3;

//     // x += 50;

//     printf("%d\n",x); // 1

// }


// Ternary ops : (condition) ? statement1 : statement2 ;


// #include<stdio.h>

// int main(){

// int age;

// printf("Your Age : ");

// scanf("%d",&age);

// (age>=18)?printf("You are eligible to vote!"):printf("Sorry, you are not eligible to vote!");


// }


// #include<stdio.h>

// int main(){

//     int num1;
//     printf("Num1 = : ");
//     scanf("%d",&num1);

//     int num2;
//     printf("Num2 = : ");
//     scanf("%d",&num2);

//     int num3;
//     printf("Num3 = : ");
//     scanf("%d",&num3);

//     (num1>num2 && num1>num3)?printf("num1 is greater!"):(num2>num1 && num2>num3)?printf("num2 is greater!"):printf("num3 is greater!");
// }



// #include<stdio.h>

// int main(){
//     int x = 10;
//     int y = 5;

//     int result = x&y;

//     printf("%d & %d : %d",x,y, result);
// }



// #include<stdio.h>

// int main(){
//   int a = 10;
//   int b = 5;

//   printf("AND : %d\n",a&b);
//   printf("OR : %d\n",a|b);
//   printf("XOR : %d\n",a^b);
//   printf("NOT : %d\n",~a);
//   printf("left shift : %d\n",a<<2);
//   printf("right shift : %d\n",a>>2);

// }

// Conditional statement

// #include<stdio.h>

// int main(){

//     int age;

//     printf("Enter Age : ");

//     scanf("%d",&age);

//     if(age>=18){
//         printf("You are eligible to vote!");
//     }
//     if(age<18){
//         printf("Sorry, You watch cartoon!");
//     }

// }


// #include<stdio.h>

// int main(){

//     int age;

//     printf("Enter Age : ");

//     scanf("%d",&age);

//     if(age>=18){
//         printf("You are eligible to vote!");
//     }else{
//         printf("Invalid input!");
//     }
// }




// #include<stdio.h>

// int main(){

//     int number;

//     printf("Enter Number : ");

//     scanf("%d",&number);

//     if(number<0){
//         printf("Negative Number");
//     }else{
//         printf("Positive Number");
//     }
// }

// #include<stdio.h>

// int main(){

//     int number;

//     printf("Enter Number : ");

//     scanf("%d",&number);

//     if(number%2 == 0){
//         printf("Even Number");
//     }else{
//         printf("Odd Number");
//     }
// }


//  else if()

// #include<stdio.h>

// int main(){
//     float marks;

//     printf("Enter your marks : ");
//     scanf("%f",&marks);

//     if(marks<=100 && marks>=90){
//         printf("Grade A");
//     }
//     else if(marks<90 && marks>=80){
//         printf("Grade B");
//     }
//     else if(marks<80 &&marks>=70){
//         printf("Grade C");
//     }else{
//         printf("Sorry, You are faield!");
//     }
// }


// #include<stdio.h>

// int main(){

//     int age;

//     printf("Enter Age : ");
//     scanf("%d",&age);

//     if(age>=18){
//         //block of code
//         if(age>=50){
//             printf("Watch Ramayan!");
//         }else{
//            printf("Watch what you want!");
//         }
//     }else{
//         //block of code
//         printf("Watch cartoon!");
//     }
// }


// Prime number : 1, itself se divide ho -> use number ko prime number bolte hai


// #include<stdio.h>

// int main(){

//     int num;
//     printf("Enter Number : ");
//     scanf("%d",&num);
//     int count = 0;

//     for(int i = 1; i<=num; i++){
//         if(num%i == 0){
//             count++;
//         }
//     }
//     if(count == 2){
//         printf("%d is prime number",num);
//     }else{
//          printf("%d is not prime number",num);
//     }
// }



// Switch Case 

// #include<stdio.h>

// int main(){

//     int first_num; 
//     printf("Enter First Number : ");
//     scanf("%d",&first_num);

//     char  ch;
//     printf("Enter operator : ");
//     scanf(" %c",&ch);
    
//     int second_num; 
//     printf("Enter Second Number : ");
//     scanf("%d",&second_num);


//     switch(ch){
        
//         case '+':
//             printf("Add : %d",first_num+second_num);
//             break;
//         case '-':
//             printf("Sub : %d",first_num-second_num);
//             break;
//         case '/':
//             printf("div : %d",first_num/second_num);
//             break;
//         case '*':
//             printf("mul : %d",first_num*second_num);
//             break;
//         case '%':
//             printf("rem : %d",first_num%second_num);
//             break;
//         default:
//             printf("Invalid Input!");
//     }
// }



// Loop : used for repeted task

// Type of loop

// Entery control loop -> phle condition check hoga baad agr condition shi hota hai to entry krega block k andar

// 1. For Loop -> 1(starting) to 100(ending) -> range
// 2. While Loop -> condition

// Exist control loop

// 3. Do While Loop -> same as while loop -> only diffrence hai -> exist control loop -> atlist one time do while loop run krta hai.



// For Loop

// #include<stdio.h>

// int main(){

//     // Syntax of for loop

//     // for(statement1; statement2; statement3){

//     // }

//     //  statement1 -> starting point set krta hai-> int i = 1;
//     // statement2 -> condition check krna -> i <=100;
//     // statement3 -> inc / dec -> i++,++i, i--,--i


//     for(int i = 1; i<=100; i++){
//         printf("%d\n",i);
//     }
// }



// #include<stdio.h>

// int main(){

//     for(int i = 100; i>=1; i--){
//         printf("%d\n",i);
//     }
// }



// #include<stdio.h>

// int main(){
// int i = 100;
//     for(; i>=1; i--){
//         printf("%d\n",i);
//     }
// }

// #include<stdio.h>

// int main(){
//     int i = 100;
//     for(; i>=1; ){
//         printf("%d\n",i);
//         i--;
//     }
// }



// #include<stdio.h>

// int main(){

//     for(int i = 1; i<=10; i++){
//         printf("%d\n",2*i);
//     }
// }


// #include<stdio.h>

// int main(){

//     for(int i = 2; i<=20; i+=2){
//         printf("%d\n",i);
//     }
// }



// #include<stdio.h>

// int main(){
// // syntax : 

//     // while ((condition))
//     // {
//     //     /* code */
//     // }
//     int num = 1;

//     while(num<=10){
//         printf("%d\n",num);
//         ++num;
//     }
    

// }




// #include<stdio.h>

// int main(){

//     int num = 10;

//     while(num>=1){
//         printf("%d\n",num);
//         --num;
//     }
    
// }



// #include<stdio.h>

// int main(){

//     int num = 10;

//     int sum = 0;

//     while(num>=1){
//        sum = sum +num; // 10+9
//         --num;
//     }
    
//     printf("sum of 1 to 10 is : %d",sum);
// }

// #include<stdio.h>

// int main(){

//     int num = 10;

//     int sum = 0;

//     while(num>=1){
      
//         if(num%2 == 0){
//              sum = sum +num; 
//         }
//         --num;
//     }
    
//     printf("sum even number b/w 1 to 10 is : %d",sum);
// }



// #include<stdio.h>

// int main(){
    
//     int option;

//     do{
//         int num;
//         printf("Enter number : ");
//         scanf("%d",&num);
//         if(num%2==0){
//             printf("Even number!\n");
//         }else{
//             printf("Odd number\n");
//         }
//         printf("Are you want to test next number ? if yes then enter 1 otherwise you enter 0 for exist :");
//         scanf("%d",&option);
//     }while(option != 0);
// }



// #include<stdio.h>

// int main(){

//     int num = 0;
    
//     do{
//         num++;
//         if(num==5){
//             continue;
//         }
//         printf("%d\n",num);
      
//     }while(num<10);
// }



#include <stdio.h>

int main() {
   

    for( int i = 0; i<=10; i++){
        printf("%d\n",i);

        if(i==9){
            goto abc;
        }
    }
    abc:
    printf("Exit\n");
    goto sdf;
    sdf:
         printf("Aur bhai");


}