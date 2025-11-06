
---

# **Topic: Pointer in C**

---

## **1. What is a Pointer?**

A **pointer** is a **variable that stores the memory address** of another variable.

👉 In simple words:
Instead of storing a value directly, a pointer **stores the location** of that value in memory.

### Example:

```c
#include <stdio.h>

int main() {
    int a = 10;
    int *ptr;     // pointer declaration
    ptr = &a;     // pointer stores address of 'a'

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Pointer ptr stores: %p\n", ptr);
    printf("Value at pointer: %d\n", *ptr);

    return 0;
}
```

### 🧾 Output:

```
Value of a: 10  
Address of a: 0x7ffeef...  
Pointer ptr stores: 0x7ffeef...  
Value at pointer: 10
```

---

## **2. sizeof() Operator**

The `sizeof()` operator is used to **find how many bytes** a data type or variable occupies in memory.

### Example:

```c
#include <stdio.h>

int main() {
    int a;
    char ch;
    float f;
    double d;

    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of char: %zu bytes\n", sizeof(ch));
    printf("Size of float: %zu bytes\n", sizeof(f));
    printf("Size of double: %zu bytes\n", sizeof(d));

    return 0;
}
```

### 🧾 Output:

```
Size of int: 4 bytes  
Size of char: 1 byte  
Size of float: 4 bytes  
Size of double: 8 bytes
```

---

## **3. Scale of Pointer**

The **scale of a pointer** means how much a pointer increases or decreases when we perform arithmetic operations on it.

* When you increment a pointer using `ptr++`,
  it moves to the **next memory location** based on the size of its data type.

### Example:

```c
#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;

    printf("Current address: %p\n", ptr);
    ptr++;
    printf("After ptr++ : %p\n", ptr);

    return 0;
}
```

### 🧾 Output:

```
Current address: 0x7fffc2a8
After ptr++ : 0x7fffc2ac
```

👉 Notice: The address increased by **4 bytes** because `int` takes **4 bytes** in memory.

---

## **4. Pointer with Array**

In C, the name of an array is actually a **pointer to its first element**.

### Example:

```c
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // same as &arr[0]

    for(int i = 0; i < 5; i++) {
        printf("arr[%d] = %d  |  Using pointer: %d\n", i, arr[i], *(ptr + i));
    }

    return 0;
}
```

### 🧾 Output:

```
arr[0] = 10  |  Using pointer: 10  
arr[1] = 20  |  Using pointer: 20  
arr[2] = 30  |  Using pointer: 30  
arr[3] = 40  |  Using pointer: 40  
arr[4] = 50  |  Using pointer: 50
```

👉 Here:

* `arr[i]` and `*(ptr + i)` give the **same value**.
* This is called **pointer arithmetic**.

---

## **5. Pointer with String**

A **string** in C is also an **array of characters**, so it can be accessed using pointers.

### Example:

```c
#include <stdio.h>

int main() {
    char str[] = "HELLO";
    char *ptr = str;

    while(*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++;
    }

    return 0;
}
```

### 🧾 Output:

```
H E L L O
```

---

## **6. Understanding with Diagram**

Let’s take this example:

```c
int x = 25;
int *ptr = &x;
```

| Variable | Value | Address (Example) |
| -------- | ----- | ----------------- |
| x        | 25    | 1000              |
| ptr      | 1000  | 2000              |
| *ptr     | 25    | -                 |

👉

* `ptr` → stores address of `x`
* `*ptr` → gives the value stored in that address

---

## **7. Pointer Arithmetic Summary**

| Operation | Description                  | Example                     |
| --------- | ---------------------------- | --------------------------- |
| `ptr + 1` | Move to next memory location | int: +4 bytes               |
| `ptr - 1` | Move to previous memory      | int: -4 bytes               |
| `*ptr`    | Access value                 | Prints stored data          |
| `&var`    | Get address                  | Used for pointer assignment |

---

## **Questions**

---

### **Q1: Print array elements using pointer**

```c
#include <stdio.h>

int main() {
    int arr[3] = {5, 10, 15};
    int *ptr = arr;

    for(int i = 0; i < 3; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
```

### Output:

```
5 10 15
```

---

### **Q2: Print characters of a string using pointer**

```c
#include <stdio.h>

int main() {
    char str[] = "Pointer";
    char *ptr = str;

    while(*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++;
    }

    return 0;
}
```

### Output:

```
P o i n t e r
```

---

### **Q3: Demonstrate pointer arithmetic**

```c
#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *ptr = arr;

    printf("Value: %d\n", *ptr);
    ptr++;
    printf("After ptr++ Value: %d\n", *ptr);
    ptr--;
    printf("After ptr-- Value: %d\n", *ptr);

    return 0;
}
```

### Output:

```
Value: 10  
After ptr++ Value: 20  
After ptr-- Value: 10
```

---

## **Summary **

| Concept             | Description              | Example             |
| ------------------- | ------------------------ | ------------------- |
| Pointer             | Variable storing address | `int *p;`           |
| `&`                 | Address of variable      | `p = &a;`           |
| `*`                 | Value at address         | `printf("%d", *p);` |
| `sizeof()`          | Finds memory size        | `sizeof(int)` = 4   |
| Pointer with array  | `*(arr+i)` = `arr[i]`    |                     |
| Pointer with string | Works like char array    |                     |
| Scale of pointer    | Moves by type size       | int → +4 bytes      |

---

