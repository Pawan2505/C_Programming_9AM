
---

## **Topic: With Space Pattern**

Patterns with **spaces** are very common in programming exercises.
They help students understand how **alignment**, **loop control**, and **logic** work together.
In these patterns, we carefully use **spaces** before or between numbers to get the right shape.

---

### **Q.1 — Left Half Pyramid (Number Reverse Style)**

📘 **Program:**

```c
#include <stdio.h>
int main() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5 - i; j++) {
            printf(" "); // print space
        }
        for(int k = i; k >= 1; k--) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
```

**Output:**

```
    1
   21
  321
 4321
54321
```

---

### **Q.2 — Left Half Pyramid (Reverse Order)**

📘 **Program:**

```c
#include <stdio.h>
int main() {
    for(int i = 5; i >= 1; i--) {
        for(int j = 1; j < i; j++) {
            printf(" ");
        }
        for(int k = i; k <= 5; k++) {
            printf("%d", k);
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

### **Q.3 — Left Half Pyramid (Repeated Numbers)**

📘 **Program:**

```c
#include <stdio.h>
int main() {
    for(int i = 5; i >= 1; i--) {
        for(int j = 1; j < i; j++) {
            printf(" ");
        }
        for(int k = 5; k >= i; k--) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
```

**Output:**

```
    5
   44
  333
 2222
11111
```

---

### **Q.4 — Inverted Left Half Pyramid (Binary Pattern)**

📘 **Program:**

```c
#include <stdio.h>
int main() {
    for(int i = 5; i >= 1; i--) {
        for(int j = 5; j > i; j--) {
            printf(" ");
        }
        for(int k = 1; k <= i; k++) {
            if((i + k) % 2 == 0)
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
 0101
  101
   01
    1
```

---

### **Q.5 — Inverted Left Half Pyramid (Descending Numbers)**

📘 **Program:**

```c
#include <stdio.h>
int main() {
    for(int i = 5; i >= 1; i--) {
        for(int j = 5; j > i; j--) {
            printf(" ");
        }
        for(int k = i; k >= 1; k--) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
```

**Output:**

```
54321
 4321
  321
   21
    1
```

---

### **Q.6 — Inverted Left Half Pyramid (Fixed Start)**

📘 **Program:**

```c
#include <stdio.h>
int main() {
    for(int i = 5; i >= 1; i--) {
        for(int j = 5; j > i; j--) {
            printf(" ");
        }
        for(int k = 5; k >= 6 - i; k--) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
```

**Output:**

```
54321
 5432
  543
   54
    5
```

---

### **Q.7 — Mirror Pyramid Pattern**

📘 **Program:**

```c
#include <stdio.h>
int main() {
    for(int i = 5; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for(int k = 5; k > i; k--) {
            printf(" ");
        }
        for(int l = i; l >= 1; l--) {
            printf("%d", l);
        }
        printf("\n");
    }
    return 0;
}
```

**Output:**

```
1234554321
1234 4321
123  321
12   21
1    1
```

---

### **Q.8 — Hollow Diamond (Number Style)**

📘 **Program:**

```c
#include <stdio.h>
int main() {
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = i; j < n; j++)
            printf(" ");
        for(int k = 1; k <= i; k++)
            printf("%d", k);
        for(int k = i - 1; k >= 1; k--)
            printf("%d", k);
        printf("\n");
    }

    for(int i = n - 1; i >= 1; i--) {
        for(int j = n; j > i; j--)
            printf(" ");
        for(int k = 1; k <= i; k++)
            printf("%d", k);
        for(int k = i - 1; k >= 1; k--)
            printf("%d", k);
        printf("\n");
    }
    return 0;
}
```

**Output:**

```
    1
   121
  12321
 1234321
1234554321
 1234321
  12321
   121
    1
```

---

### **Q.9 — Full Pyramid (Normal Style)**

📘 **Program:**

```c
#include <stdio.h>
int main() {
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = i; j < n; j++) {
            printf(" ");
        }
        for(int k = 1; k <= i; k++) {
            printf("%d", k);
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

### **Summary**

| Pattern Type       | Concept Used          | Loop Focus        |
| ------------------ | --------------------- | ----------------- |
| Left Half Pyramid  | Spaces before numbers | Increasing logic  |
| Inverted Left Half | Spaces after numbers  | Decreasing logic  |
| Hollow Diamond     | Mirror + Symmetry     | Dual nested loops |
| Full Pyramid       | Triangle shape        | Center alignment  |

---
