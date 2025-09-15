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


#include<stdio.h>
#define PI "Pawan"  // global variable

int main(){

    int value;
   
    const int num = 100;

    // PI = 46.45; // Not ok
    // num = 200; // not ok

    printf("The value of num is : %d\n",num);
    printf("PI : %s\n",PI); // 3.14
    printf("PI : %d\n",sizeof(PI)); // 3.14
    printf("The size of value : %d",sizeof(value));

}