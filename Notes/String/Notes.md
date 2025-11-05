
---

# **Topic: Characters, ASCII Values, and Strings in C Programming**

---

## 🔹 **1. Character in Detail**

In C, a **character** is a **single alphabet, digit, or symbol** enclosed in **single quotes (' ')**.

Example:

```c
char ch = 'A';
char num = '9';
char symbol = '#';
```

👉 Each character actually has a **numeric value** (ASCII value) stored inside the computer’s memory.

---

## 🔹 **2. ASCII Value in Detail**

**ASCII (American Standard Code for Information Interchange)** is a code that represents every character as a number.

For example:

| Character | ASCII Value |
| --------- | ----------- |
| A         | 65          |
| B         | 66          |
| Z         | 90          |
| a         | 97          |
| b         | 98          |
| z         | 122         |
| 0         | 48          |
| 9         | 57          |

👉 This means when you store `'A'` in a variable, the computer actually stores **65**.

Example:

```c
#include<stdio.h>
int main(){
    char ch = 'A';
    printf("Character: %c\n", ch);
    printf("ASCII value: %d", ch);
    return 0;
}
```

🟢 **Output:**

```
Character: A
ASCII value: 65
```

---

## 🔹 **3. String Creation, Display, and Insertion**

In C, a **string** is a collection of **characters** stored in an **array**, ending with a special character `'\0'` (null character).

Example:

```c
#include<stdio.h>
int main(){
    char name[20];   // declaring a string variable
    printf("Enter your name: ");
    gets(name);      // taking string input
    printf("Hello %s", name);
    return 0;
}
```

🟢 **Output:**

```
Enter your name: Pawan
Hello Pawan
```

You can also assign a string directly:

```c
char name[] = "Hello World";
printf("%s", name);
```

---

## **Program 1: Convert String to Uppercase (Without Using String Function)**

**Question:**
Write a Program to convert the given string into uppercase **without using any string function**.

### Example:

```
Input:
Enter any string: hello world
Output:
Uppercase string: HELLO WORLD
```

### Code:

```c
#include<stdio.h>
int main(){
    char str[100];
    printf("Enter any string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32; // convert lowercase to uppercase
        }
    }

    printf("Uppercase string: %s", str);
    return 0;
}
```

---

## **Program 2: Convert String to Lowercase (Without Using String Function)**

**Question:**
Write a Program to convert the given string into lowercase **without using any string function**.

### Example:

```
Input:
Enter any string: HELLO WORLD
Output:
Lowercase string: hello world
```

### Code:

```c
#include<stdio.h>
int main(){
    char str[100];
    printf("Enter any string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32; // convert uppercase to lowercase
        }
    }

    printf("Lowercase string: %s", str);
    return 0;
}
```

---

## **Program 3: Convert String to Toggle Case (Without Using String Function)**

**Question:**
Write a Program to convert the given string into toggle case **without using any string function**.

### Example:

```
Input:
Enter any string: HeLlo WoRLd
Output:
Toggle case string: hElLO wOrlD
```

### Code:

```c
#include<stdio.h>
int main(){
    char str[100];
    printf("Enter any string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;  // convert to lowercase
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;  // convert to uppercase
        }
    }

    printf("Toggle case string: %s", str);
    return 0;
}
```

---

## 💡 **Summary**

| Concept     | Description                  | Example             |
| ----------- | ---------------------------- | ------------------- |
| Character   | Single symbol in `' '`       | `'A'`, `'b'`, `'9'` |
| ASCII Value | Numeric value of a character | `'A'` = 65          |
| String      | Collection of characters     | `"Hello"`           |
| gets()      | Input function for string    | `gets(name)`        |
| puts()      | Output function for string   | `puts(name)`        |

---

