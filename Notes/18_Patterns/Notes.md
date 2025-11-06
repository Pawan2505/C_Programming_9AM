
---

## **Topic: Types of Patterns (Without Space, With Space & Custom)**

### 🔹 Subtopic: Without Space Pattern

Patterns are a fun and logical way to practice **nested loops** in C programming.
They help us understand how **outer loops** control rows and **inner loops** control columns.

We’ll now explore different **Without Space Patterns** step by step 👇

---

### **Q.1 – Right Half Pyramid**

📘 **Program:**

```c
#include <stdio.h>
int main() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
```

**Output:**

```
1
12
123
1234
12345
```

---

### **Q.2 – Reverse Number Right Half Pyramid**

📘 **Program:**

```c
#include <stdio.h>
int main() {
    for(int i = 5; i >= 1; i--) {
        for(int j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
```

**Output:**

```
5
45
345
2345
12345
```

---

### **Q.3 – Reverse Counting Right Half Pyramid**

📘 **Program:**

```c
#include <stdio.h>
int main() {
    for(int i = 5; i >= 1; i--) {
        for(int j = 5; j >= i; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
```

**Output:**

```
5
54
543
5432
54321
```

---

### **Q.4 – Inverted Right Half Pyramid**

📘 **Program:**

```c
#include <stdio.h>
int main() {
    for(int i = 1; i <= 5; i++) {
        for(int j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
```

**Output:**

```
12345
2345
345
45
5
```

---

### **Q.5 – Inverted Right Half Pyramid (Repeated Numbers)**

📘 **Program:**

```c
#include <stdio.h>
int main() {
    for(int i = 1; i <= 5; i++) {
        for(int j = i; j <= 5; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
```

**Output:**

```
11111
2222
333
44
5
```

---

### **Q.6 – Binary (1 & 0) Right Half Pyramid**

📘 **Program:**

```c
#include <stdio.h>
int main() {
    for(int i = 5; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            if((i + j) % 2 == 0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
    return 0;
}
```

**Output:**

```
10101
1010
101
10
1
```

---

### **Q.7 – Alphabet Right Half Pyramid**

📘 **Program:**

```c
#include <stdio.h>
int main() {
    for(char i = 'A'; i <= 'E'; i++) {
        for(char j = i; j >= 'A'; j--) {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}
```

**Output:**

```
A
BA
CBA
DCBA
EDCBA
```

---

### **Q.8 – Floyd’s Triangle Pattern**

📘 **Program:**

```c
#include <stdio.h>
int main() {
    int num = 1;
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
```

**Output:**

```
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
```

---

### **Summary:**

* **Outer loop** → controls number of rows.
* **Inner loop** → controls what prints in each row.
* Practice makes you better at **logic + looping**.
* Try changing the order or number logic to make new patterns!

---

