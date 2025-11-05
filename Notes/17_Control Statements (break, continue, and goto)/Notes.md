
---

## **Topic: Control Statements (break, continue, and goto)**

---

### 🔹 **Introduction**

In C programming, **control statements** are used to control the **flow of execution** in a program.
They help us to **jump**, **skip**, or **repeat** certain parts of code based on some condition.

There are three main control statements:

1. **break**
2. **continue**
3. **goto**

---

### 🔸 **1. break Statement**

The `break` statement is used to **exit from a loop or switch case** immediately, even if the condition is still true.

📘 **Example:**

```c
for(int i = 1; i <= 10; i++) {
    if(i == 5)
        break;
    printf("%d ", i);
}
```

**Output:**

```
1 2 3 4
```

👉 When `i` becomes 5, the loop stops because of `break`.

---

### 🔸 **2. continue Statement**

The `continue` statement is used to **skip** the current iteration of the loop and **move to the next** one.

📘 **Example:**

```c
for(int i = 1; i <= 5; i++) {
    if(i == 3)
        continue;
    printf("%d ", i);
}
```

**Output:**

```
1 2 4 5
```

👉 Here, when `i` is 3, it is skipped.

---

### 🔸 **3. goto Statement**

The `goto` statement is used to **jump** from one part of the code to another using a **label**.
However, it should be used carefully as it can make the code confusing.

📘 **Example:**

```c
#include <stdio.h>
int main() {
    int i = 1;
    start:
    printf("%d ", i);
    i++;
    if(i <= 5)
        goto start;
    return 0;
}
```

**Output:**

```
1 2 3 4 5
```

---

## 💻 **Practice Programs**

---

### **Q.1 — Write a Program to print the sum of all numbers from 1 to N using a for loop**

```c
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("The sum of all numbers: %d", sum);
    return 0;
}
```

**Example Output:**

```
Enter any number: 5
The sum of all numbers: 15
```

---

### **Q.2 — Write a Program to print the factorial of number N using a for loop**

```c
#include <stdio.h>
int main() {
    int n, fact = 1;
    printf("Enter any number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("The factorial is: %d", fact);
    return 0;
}
```

**Example Output:**

```
Enter any number: 5
The factorial is: 120
```

---

### **Q.3 — Write a Program to print the multiplication table of number N using any loop**

```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    return 0;
}
```

**Example Output:**

```
Enter any number: 5
5 X 1 = 5  
5 X 2 = 10  
5 X 3 = 15  
5 X 4 = 20  
5 X 5 = 25  
5 X 6 = 30  
5 X 7 = 35  
5 X 8 = 40  
5 X 9 = 45  
5 X 10 = 50
```

---

### **Summary**

| Statement    | Purpose                           | Behavior                |
| ------------ | --------------------------------- | ----------------------- |
| **break**    | To stop the loop immediately      | Exits the loop          |
| **continue** | To skip one iteration             | Goes to next loop cycle |
| **goto**     | To jump to a labeled part of code | Moves control directly  |

---

