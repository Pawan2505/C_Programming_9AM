
---

## **Topic: Array in Detail**

### 💡 What is an Array?

An **array** is a collection of elements stored in **continuous memory locations**, and all elements are of the **same data type**.

Think of an array like a **row of lockers** — each locker (index) stores one value, and all lockers are numbered starting from 0.

Example:

```c
int marks[5] = {85, 90, 78, 92, 88};
```

Here,

* `marks` is the array name.
* It can store **5 integers**.
* Each element has an **index** (0 to 4).

  * `marks[0] = 85`
  * `marks[1] = 90`, etc.

---

### **Why use Arrays?**

* To store **multiple values** in a single variable.
* To **easily access and process** data using loops.
* To **save time and memory** in programming.

Without an array:

```c
int a, b, c, d, e;
```

With an array:

```c
int num[5];
```

Easier to manage and loop through!

---

### ⚙️ **Types of Arrays**

There are mainly:

1. **One-Dimensional Array (1D Array)**
2. **Two-Dimensional Array (2D Array)**

We’ll focus on the **1D Array** here 👇

---

## 🔹 **1D Array (One-Dimensional Array)**

A 1D array stores data in a single row or line.

```
Index:  0   1   2   3   4
Value: 10  20  30  40  50
```

### Declaration:

```c
data_type array_name[size];
```

Example:

```c
int num[5];
```

---

### Initialization:

We can initialize the array while declaring:

```c
int num[5] = {10, 20, 30, 40, 50};
```

Or assign values later:

```c
num[0] = 10;
num[1] = 20;
```

---

### Accessing Elements:

Use the **index** to access or print values:

```c
printf("%d", num[2]);   // Output: 30
```

---

### Input and Output using Loops:

```c
#include <stdio.h>
int main() {
    int num[5];
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    printf("You entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", num[i]);
    }
    return 0;
}
```

---

### 📘 **Key Points to Remember**

* Array index starts from **0**.
* Last index is **size - 1**.
* Array stores **same type** of data.
* Memory is **continuous**.
* Arrays work best with **loops** for easy data handling.

---

## **Questions**

### **Q1. What is an array and why do we use it?**

**Answer:**
An array is a collection of similar data elements stored in continuous memory locations.
We use arrays to store and manage **multiple values of the same type** easily using a single variable name.

---

### **Q2. What is the difference between declaring and initializing an array?**

**Answer:**

* **Declaring** an array means creating it with a fixed size, e.g.

  ```c
  int num[5];
  ```

  (No values are stored yet.)

* **Initializing** an array means assigning values to it, e.g.

  ```c
  int num[5] = {10, 20, 30, 40, 50};
  ```

---

### **Q3. Write a program to find the largest element in a 1D array.**

```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest number is: %d", max);
    return 0;
}
```

**Output:**

```
Enter the number of elements: 5
Enter 5 numbers:
12 56 34 78 23
The largest number is: 78
```

---

