
---

# **Topic: NULL, '\0', and String Built-in Functions in C**

---

## 🔹 **1. NULL and '\0' in C**

### 🧾 What is `'\0'`?

* `'\0'` is called the **null character**.
* It is used to **mark the end of a string** in C.
* Every string in C is automatically terminated with `'\0'`.

Example:

```c
char name[] = "Hello";
```

Actually, the computer stores it like this:

```
'H'  'e'  'l'  'l'  'o'  '\0'
```

So the length of `"Hello"` is 5, but the array actually takes **6 spaces** (including `'\0'`).

---

### What is `NULL`?

* `NULL` is a **pointer constant** that represents **no address** or **nothing**.
* It is mostly used with **pointers** to indicate that a variable is **not assigned** yet.

Example:

```c
int *ptr = NULL;

if(ptr == NULL){
    printf("Pointer is empty!");
}
```

Output:

```
Pointer is empty!
```

💡 **Remember:**

* `'\0'` is a **character constant** (used in strings).
* `NULL` is a **pointer constant** (used with pointers).

---

## 🔹 **2. String Built-in Functions**

C provides several **string handling functions** in the **`<string.h>`** library.

---

### **1️⃣ strlen() — Find Length of a String**

Returns the number of characters in a string (excluding `'\0'`).

```c
#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Hello";
    printf("Length: %d", strlen(str));
    return 0;
}
```

Output:

```
Length: 5
```

---

### **2️⃣ strcpy() — Copy One String to Another**

Copies the content of one string into another.

```c
#include<stdio.h>
#include<string.h>
int main(){
    char source[] = "Pawan";
    char destination[20];
    strcpy(destination, source);
    printf("Copied String: %s", destination);
    return 0;
}
```

Output:

```
Copied String: Pawan
```

---

### **3️⃣ strcat() — Join Two Strings**

Appends one string to another.

```c
#include<stdio.h>
#include<string.h>
int main(){
    char str1[20] = "Hello ";
    char str2[] = "World";
    strcat(str1, str2);
    printf("Combined String: %s", str1);
    return 0;
}
```

Output:

```
Combined String: Hello World
```

---

### **4️⃣ strcmp() — Compare Two Strings**

Compares two strings:

* Returns `0` → if both are equal
* Returns `<0` → if first < second
* Returns `>0` → if first > second

```c
#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "apple";
    char str2[] = "banana";
    
    if(strcmp(str1, str2) == 0)
        printf("Both strings are equal");
    else
        printf("Strings are not equal");
    return 0;
}
```

Output:

```
Strings are not equal
```

---

### **5️⃣ strrev() — Reverse a String** *(Compiler dependent, available in some compilers)*

```c
#include<stdio.h>
#include<string.h>
int main(){
    char str[20] = "hello";
    strrev(str);
    printf("Reversed: %s", str);
    return 0;
}
```

Output:

```
Reversed: olleh
```

---

## **Q.1 Program — Check if Password is Strong or Not**

### 🧾 Question:

Write a program to check if a given password is strong or not by satisfying:

* Must contain at least one letter, one digit & one special symbol.
* Must be at least 6 characters long.

### Example:

```
Input:
Create your password: Admin@123
Output:
Your password is Strong.
```

**Code:**

```c
#include<stdio.h>
#include<string.h>

int main(){
    char pass[50];
    int letter=0, digit=0, special=0, length=0;

    printf("Create your password: ");
    gets(pass);

    for(int i=0; pass[i]!='\0'; i++){
        if((pass[i]>='A' && pass[i]<='Z') || (pass[i]>='a' && pass[i]<='z'))
            letter = 1;
        else if(pass[i]>='0' && pass[i]<='9')
            digit = 1;
        else
            special = 1;

        length++;
    }

    if(letter && digit && special && length>=6)
        printf("Your password is Strong.");
    else
        printf("Your password is not Strong.");

    return 0;
}
```

---

## **Q.2 Program — Simple Login Mechanism**

### 🧾 Question:

Write a program to check login by comparing entered email and password with stored ones.

### Example:

```
Input:
Enter your email: admin@gmail.com
Enter your password: 123456
Output:
Login Successful...
```

**Code:**

```c
#include<stdio.h>
#include<string.h>

int main(){
    char email[50], password[50];
    char correctEmail[] = "admin@gmail.com";
    char correctPass[] = "123456";

    printf("Enter your email: ");
    gets(email);
    printf("Enter your password: ");
    gets(password);

    if(strcmp(email, correctEmail) == 0 && strcmp(password, correctPass) == 0)
        printf("Login Successful...");
    else
        printf("Invalid Email or Password!");

    return 0;
}
```

---

## ✨ **Summary**

| Concept    | Use                            |
| ---------- | ------------------------------ |
| `'\0'`     | Marks end of a string          |
| `NULL`     | Represents empty pointer       |
| `strlen()` | Finds string length            |
| `strcpy()` | Copies one string into another |
| `strcat()` | Joins two strings              |
| `strcmp()` | Compares strings               |
| `strrev()` | Reverses string                |

---
