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
