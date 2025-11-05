
---

## **Topic: Do-while Loop & For Loops in C Programming**

---

### 🔹 **do-while Loop**

The **do-while loop** is similar to the while loop, but there’s a small difference —
👉 The **do-while loop** executes its code **at least once**, even if the condition is false.

📘 **Syntax:**

```c
do {
    // code to execute
} while(condition);
```

The condition is checked **after** the loop body.
That’s why it always runs at least once.

---

### **Q.1 — Print 1 to 10 using do-while loop**

```c
#include <stdio.h>
int main() {
    int i = 1;
    do {
        printf("%d", i);
        i++;
    } while(i <= 10);
    return 0;
}
```

**Output:**

```
12345678910
```

---

### **Q.3 — Print Even Numbers from 1 to N using do-while loop**

```c
#include <stdio.h>
int main() {
    int i = 1, n;
    printf("Enter any number: ");
    scanf("%d", &n);

    do {
        if(i % 2 == 0) {
            printf("%d", i);
        }
        i++;
    } while(i <= n);

    return 0;
}
```

**Example Output:**

```
Enter any number: 9
2468
```

---

### 🔹 **Difference between while and do-while Loop**

| Feature                 | while Loop                             | do-while Loop                          |
| ----------------------- | -------------------------------------- | -------------------------------------- |
| **Condition Checking**  | Before executing the body              | After executing the body               |
| **Execution Guarantee** | May not run even once                  | Runs at least once                     |
| **Syntax**              | `while(condition){ }`                  | `do { } while(condition);`             |
| **Use Case**            | When you want to test before executing | When you want to execute at least once |

---

### 🔹 **for Loop**

The **for loop** is used when you know exactly how many times you want to repeat something.
It has three parts — initialization, condition, and increment/decrement — all in one line.

📘 **Syntax:**

```c
for(initialization; condition; increment/decrement) {
    // code to execute
}
```

---

### **Q.2 — Print 10 to 1 using for loop**

```c
#include <stdio.h>
int main() {
    for(int i = 10; i >= 1; i--) {
        printf("%d ", i);
    }
    return 0;
}
```

**Output:**

```
10 9 8 7 6 5 4 3 2 1
```

---

### **Q.4 — Print Fibonacci Series up to N numbers using for loop**

The **Fibonacci series** is a sequence where each number is the sum of the previous two numbers.
(Example: 0, 1, 1, 2, 3, 5, 8, 13...)

```c
#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c;
    printf("Enter any number: ");
    scanf("%d", &n);

    printf("%d, %d", a, b);
    for(int i = 2; i < n; i++) {
        c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
    }
    return 0;
}
```

**Example Output:**

```
Enter any number: 8
0, 1, 1, 2, 3, 5, 8, 13
```

---

