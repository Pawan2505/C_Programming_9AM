

## Topic: User Defined Functions in C

### 💡 What is a Function?

A **function** is a block of code that performs a specific task.
It helps us divide a big program into smaller, reusable parts.

In C programming, there are two types of functions:

1. **Library Functions** – Already built-in (like `printf()`, `scanf()`)
2. **User Defined Functions** – Created by the programmer as per their need

---

### 🔧 Why Use Functions?

* To make code **clean and organized**
* To **avoid repetition**
* To make code **easier to debug and maintain**
* To **reuse** the same code in multiple places

---

### Syntax of a Function

```c
returnType functionName(parameters) {
    // function body
}
```

Example:

```c
void greet() {
    printf("Hello, welcome to C programming!");
}
```

---

## Types of User Defined Functions

In C, functions are mainly classified based on **whether they take arguments** and **whether they return a value**.

---

### 1️⃣ **TNRN – Take Nothing, Return Nothing**

➡️ The function does not take any input (no parameters) and does not return anything.
It only performs a task.

**Example:**

```c
#include <stdio.h>

void display() {
    printf("Hello, this is TNRN function!");
}

int main() {
    display();
    return 0;
}
```

---

### 2️⃣ **TSRN – Take Something, Return Nothing**

➡️ The function takes input (parameters) but does not return any value.
It just uses the input to perform a task.

**Example:**

```c
#include <stdio.h>

void add(int a, int b) {
    printf("Sum = %d", a + b);
}

int main() {
    add(5, 10);
    return 0;
}
```

---

### 3️⃣ **TNRS – Take Nothing, Return Something**

➡️ The function doesn’t take any input but returns a value.

**Example:**

```c
#include <stdio.h>

int getNumber() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int main() {
    int result = getNumber();
    printf("You entered: %d", result);
    return 0;
}
```

---

### 4️⃣ **TSRS – Take Something, Return Something**

➡️ The function takes input and also returns a value.

**Example:**

```c
#include <stdio.h>

int multiply(int x, int y) {
    return x * y;
}

int main() {
    int a = 5, b = 3;
    int result = multiply(a, b);
    printf("Product = %d", result);
    return 0;
}
```

---

### Summary

| Type | Takes Input | Returns Value | Example Use                           |
| ---- | ----------- | ------------- | ------------------------------------- |
| TNRN | No        | No          | Display message                       |
| TSRN | Yes       | No          | Print sum or result directly          |
| TNRS | No        | Yes         | Take input inside function            |
| TSRS | Yes       | Yes         | Perform calculation and return result |

---

