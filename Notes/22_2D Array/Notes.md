
---

# **Topic: 2D Array (Two-Dimensional Array)**

---

## **Introduction**

A **2D Array** is like a **table or matrix** that stores data in **rows and columns**.
Think of it as an **array of arrays** — each row itself is a 1D array.

It’s useful for representing **grids, marksheets, tables, or game boards**.

Example:

```c
int marks[3][3];
```

Here:

* `3` → number of rows
* `3` → number of columns
  So, it can store **3 × 3 = 9 elements**.

---

## **Example**

```c
int marks[3][3] = {
    {90, 85, 88},
    {70, 75, 80},
    {60, 65, 68}
};
```

This looks like:

| 90 | 85 | 88 |
| -- | -- | -- |
| 70 | 75 | 80 |
| 60 | 65 | 68 |

---

## **How to Access Elements**

Each element is accessed using **two indexes** — row and column.

Example:

```c
printf("%d", marks[1][2]); // prints 80
```

---

## **Taking Input in a 2D Array**

```c
int arr[3][3];
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        scanf("%d", &arr[i][j]);
    }
}
```

---

## **Displaying a 2D Array**

```c
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf("%d ", arr[i][j]);
    }
    printf("\n");
}
```

---

## **Quick Example**

### Program: Take input for a 3x3 matrix and print it

```c
#include<stdio.h>
int main(){
    int arr[3][3];
    printf("Enter 9 numbers:\n");
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("\nMatrix is:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```

---

## **💡 Uses of 2D Arrays**

 Matrix calculations (addition, subtraction, multiplication)
 Storing marks or attendance
 Image processing
 Games like Tic-Tac-Toe
 Representing tables or charts

---

# **Practice Questions with Programs**

---

## **Q1: Find the sum of each row in a 2D array**

### 🧾 Program:

```c
#include<stdio.h>
int main(){
    int arr[3][3];
    printf("Enter 9 elements:\n");
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
        printf("Sum of row %d = %d\n", i+1, sum);
    }

    return 0;
}
```

---

## **Q2: Find the sum of each column in a 2D array**

### 🧾 Program:

```c
#include<stdio.h>
int main(){
    int arr[3][3];
    printf("Enter 9 elements:\n");
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int j=0; j<3; j++){
        int sum = 0;
        for(int i=0; i<3; i++){
            sum += arr[i][j];
        }
        printf("Sum of column %d = %d\n", j+1, sum);
    }

    return 0;
}
```

---

## **Q3: Find the largest element in a 2D array**

### 🧾 Program:

```c
#include<stdio.h>
int main(){
    int arr[3][3];
    printf("Enter 9 elements:\n");
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int max = arr[0][0];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }

    printf("Largest element = %d", max);
    return 0;
}
```

---

## **Q4: Print the diagonal elements of a 2D array**

### 🧾 Program:

```c
#include<stdio.h>
int main(){
    int arr[3][3];
    printf("Enter 9 elements:\n");
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Diagonal elements are: ");
    for(int i=0; i<3; i++){
        printf("%d ", arr[i][i]);
    }

    return 0;
}
```

---

## **Q5: Add two 3x3 matrices**

### 🧾 Program:

```c
#include<stdio.h>
int main(){
    int a[3][3], b[3][3], sum[3][3];
    printf("Enter 9 elements for first matrix:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter 9 elements for second matrix:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &b[i][j]);
        }
    }

    // Adding both matrices
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum of both matrices:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

---

## **Summary**

| Concept        | Meaning                  | Example                            |
| -------------- | ------------------------ | ---------------------------------- |
| Declaration    | Creates a 2D array       | `int a[2][3];`                     |
| Initialization | Assigns values           | `int a[2][3] = {{1,2,3},{4,5,6}};` |
| Access         | Using row & column index | `a[1][2]`                          |
| Input/Output   | Using nested loops       | `for(i)...for(j)...`               |

---

