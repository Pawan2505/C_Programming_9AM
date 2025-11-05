
---

## 🧾 Keywords in C Programming

In C programming, **keywords** are **special reserved words** that have **predefined meanings** in the language.
We **cannot use** these words as **variable names, function names, or identifiers**, because they are already part of the C language syntax.

Think of keywords as **words that C already understands** — we just have to use them correctly! 💡

---

### Example:

```c
int age = 20;
return 0;
```

Here, `int` and `return` are **keywords**.
They have special meanings:

* `int` tells the compiler that the variable `age` is of integer type.
* `return` tells the program to go back from the function (usually with a value).

---

### 📘 Important Points:

* Keywords are **always written in lowercase**.
* They have **fixed meanings** and **cannot be changed**.
* There are **32 keywords** in C.

---

### List of All 32 Keywords in C

| auto   | break  | case     | char   | const    | continue | default  | do     |
| ------ | ------ | -------- | ------ | -------- | -------- | -------- | ------ |
| double | else   | enum     | extern | float    | for      | goto     | if     |
| int    | long   | register | return | short    | signed   | sizeof   | static |
| struct | switch | typedef  | union  | unsigned | void     | volatile | while  |

---

### Some Commonly Used Keywords:

| Keyword              | Meaning                                             |
| -------------------- | --------------------------------------------------- |
| `int`                | Defines an integer variable                         |
| `float`              | Defines a floating-point variable                   |
| `char`               | Defines a character variable                        |
| `if`                 | Used for decision making                            |
| `else`               | Used with if to handle alternate conditions         |
| `for`, `while`, `do` | Used for looping                                    |
| `return`             | Sends value back from a function                    |
| `break`              | Stops the current loop                              |
| `continue`           | Skips to the next loop iteration                    |
| `void`               | Represents “no value” or empty function return type |

---

### 🧾 Example

```c
#include<stdio.h>
int main(){
    int number = 5;   // 'int' is a keyword
    if(number > 0){   // 'if' is a keyword
        printf("Positive number");
    }
    else{
        printf("Negative number");
    }
    return 0;         // 'return' is a keyword
}
```

🟢 **Output:**

```
Positive number
```

---

### ⚠️ Remember:

* You **cannot** use a keyword as a variable name.
  Incorrect:

```c
int if = 10;  // Error! 'if' is a keyword
```

---

### ✨ In Short:

* Keywords are **reserved words** in C.
* They have **fixed meanings**.
* There are **32 total keywords**.
* You **cannot** use them as identifiers.

---

