
---

## **Topic: Array of Pointers, Chain of Pointers & Pointer with UDF**

---

### 🔹 **1. Array of Pointers**

An **Array of Pointers** is an array that stores the addresses of variables instead of storing normal data values.

In other words, it’s like a normal array — but instead of holding numbers or characters, it holds **addresses** (memory locations).

#### **Example 1: Array of Integer Pointers**

```c
#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int *arr[3]; // array of integer pointers

    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    for(int i = 0; i < 3; i++) {
        printf("Value of element %d : %d\n", i, *arr[i]);
    }

    return 0;
}
```

#### **Output:**

```
Value of element 0 : 10
Value of element 1 : 20
Value of element 2 : 30
```

---

### 🔹 **2. Chain of Pointers (Pointer to Pointer)**

A **Chain of Pointers** means using a pointer that points to another pointer.

* `int *p` → points to an integer
* `int **q` → points to the pointer `p`
* `int ***r` → points to the pointer `q`

This concept is also known as a **Pointer to Pointer**.

#### **Example 2: Chain of Pointers**

```c
#include <stdio.h>

int main() {
    int x = 100;
    int *p = &x;
    int **q = &p;
    int ***r = &q;

    printf("Value of x = %d\n", x);
    printf("Using *p = %d\n", *p);
    printf("Using **q = %d\n", **q);
    printf("Using ***r = %d\n", ***r);

    return 0;
}
```

#### **Output:**

```
Value of x = 100
Using *p = 100
Using **q = 100
Using ***r = 100
```

**Note:**
Each `*` symbol is used to go one step deeper in the pointer chain.

---

### 🔹 **3. Pointer with User Defined Function (UDF)**

Pointers can also be passed to and returned from functions.
This is very useful when you want a function to modify the original value of a variable.

#### **Example 3: Passing Pointer to Function**

```c
#include <stdio.h>

void changeValue(int *p) {
    *p = *p + 10; // modifies the original value
}

int main() {
    int num = 5;
    printf("Before function call: %d\n", num);

    changeValue(&num);  // passing address

    printf("After function call: %d\n", num);
    return 0;
}
```

#### **Output:**

```
Before function call: 5
After function call: 15
```

**Explanation:**
The function `changeValue()` received the address of `num` and directly changed its value in memory.

---

### 🔹 **4. Returning Pointer from Function**

We can also **return a pointer** from a function, usually when we want to return the address of a variable.

#### **Example 4: Returning Pointer**

```c
#include <stdio.h>

int* getNumber() {
    static int n = 50; // static is important to keep variable in memory
    return &n;
}

int main() {
    int *ptr;
    ptr = getNumber();

    printf("Value returned from function: %d\n", *ptr);
    return 0;
}
```

#### **Output:**

```
Value returned from function: 50
```

---

#### **Summary**

| Concept           | Description                          | Example             |
| ----------------- | ------------------------------------ | ------------------- |
| Array of Pointers | Array that stores addresses          | `int *arr[3];`      |
| Chain of Pointers | Pointer to another pointer           | `int **p;`          |
| Pointer with UDF  | Pass or return pointers in functions | `void fun(int *p);` |
| Return Pointer    | Return address from function         | `int* getNumber();` |

---
