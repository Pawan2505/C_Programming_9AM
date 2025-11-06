
---

# **Topic: 1D Array with CRUD Operations**

---

##  **Introduction to 1D Arrays**

A **1D Array** is a list of elements of the same data type stored in **continuous memory locations**.

For example:

```c
int marks[5] = {90, 85, 70, 95, 80};
```

Here, each value can be accessed using its **index** like `marks[0]`, `marks[1]`, etc.

Arrays are helpful for **managing data** like marks, prices, salaries, or inventory.

---

## 💡 **Q.1 How can solving 1D array exercises enhance problem-solving skills?**

**Answer:**
Working on array problems improves logic, teaches looping and indexing, and helps handle data like in real-life programs (marks, records, etc.).

 **No code needed**, this is conceptual.

---

## 💡 **Q.2 CRUD Operations Overview**

CRUD stands for:

* **C** → Create
* **R** → Read
* **U** → Update
* **D** → Delete

In arrays:

* **Create:** Input or initialize data
* **Read:** Display elements
* **Update:** Modify an element
* **Delete:** Remove or shift elements

---

## 💡 **Q.3 Create Operation Example**

### 🔹 Code: Static & User Input Array Creation

```c
#include <stdio.h>

int main() {
    int num[5]; // Create array

    printf("Enter 5 numbers: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &num[i]); // User input
    }

    printf("Array elements are: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", num[i]); // Display array
    }

    return 0;
}
```

---

## 💡 **Q.4 Methods for Creating Arrays**

### 🔹 Code 1: Static Initialization

```c
#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};

    for(int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
```

### 🔹 Code 2: Dynamic Allocation

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
```

---

## 💡 **Q.5 Read Operation Example**

### 🔹 Code: Display Array

```c
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    printf("Array elements: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
```

---

## 💡 **Q.6 Reading Techniques**

### 🔹 Code: Traversal, Random Access, Searching

```c
#include <stdio.h>

int main() {
    int arr[5] = {5, 10, 15, 20, 25};
    int search = 15, found = 0;

    // Traversal
    printf("All elements: ");
    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    // Random access
    printf("\n3rd element is: %d\n", arr[2]);

    // Searching
    for(int i = 0; i < 5; i++) {
        if(arr[i] == search) {
            printf("%d found at index %d", search, i);
            found = 1;
        }
    }
    if(!found) printf("\nElement not found.");

    return 0;
}
```

---

## 💡 **Q.7 Update Operation**

### 🔹 Code: Modify an Element

```c
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int index, value;

    printf("Enter index to update (0-4): ");
    scanf("%d", &index);
    printf("Enter new value: ");
    scanf("%d", &value);

    arr[index] = value;

    printf("Updated array: ");
    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}
```

---

## 💡 **Q.8 Update Using Condition**

### 🔹 Code: Conditional Update

```c
#include <stdio.h>

int main() {
    int arr[5] = {5, 10, 15, 20, 25};

    for(int i = 0; i < 5; i++) {
        if(arr[i] == 15)
            arr[i] = 99; // Update if matches
    }

    printf("Updated Array: ");
    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}
```

---

## 💡 **Q.9 Delete Operation**

### 🔹 Code: Delete an Element (Shift Left)

```c
#include <stdio.h>

int main() {
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int pos = 2, n = 6; // Delete 3rd element

    for(int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1]; // Shift elements
    }
    n--;

    printf("Array after deletion: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
```

---

## 💡 **Q.10 Deleting Techniques (Mark or Resize)**

### 🔹 Code: Mark Deleted Element

```c
#include <stdio.h>

int main() {
    int arr[5] = {11, 22, 33, 44, 55};
    int pos = 1;

    arr[pos] = -1; // Mark deleted

    printf("Array after marking delete: ");
    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}
```

---

## 💡 **Q.11 Error Handling Example**

### 🔹 Code: Index Validation

```c
#include <stdio.h>

int main() {
    int arr[4] = {5, 10, 15, 20};
    int index;

    printf("Enter index to access (0-3): ");
    scanf("%d", &index);

    if(index < 0 || index >= 4)
        printf("Invalid index!");
    else
        printf("Value: %d", arr[index]);

    return 0;
}
```

---

## 💡 **Q.12 Memory & Bound Error Handling**

### 🔹 Code: Memory Validation

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("Memory allocation failed!");
        return 0;
    }

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array elements: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}
```

---

##  **Summary Table**

| Operation | Description              | Example                 |
| --------- | ------------------------ | ----------------------- |
| Create    | Initialize or input data | `arr[i] = value;`       |
| Read      | Display data             | `printf("%d", arr[i]);` |
| Update    | Modify data              | `arr[i] = newValue;`    |
| Delete    | Remove or shift          | `arr[i] = arr[i+1];`    |

---

