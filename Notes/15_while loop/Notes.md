
---

## **Topic: while loop**

---

### 🔹 **About while Loop**

In C programming, a **while loop** is used when we don’t know exactly how many times we want to repeat a task, but we know the **condition** that must be true to continue the loop.

📘 **Syntax:**

```c
while(condition) {
    // code to execute
}
```

The loop runs **again and again** as long as the condition is **true**.
When the condition becomes **false**, the loop stops.

---

### **Q.1 — Print 1 to 10 using while loop**

```c
#include <stdio.h>
int main() {
    int i = 1;
    while(i <= 10) {
        printf("%d", i);
        i++;
    }
    return 0;
}
```

**Output:**

```
12345678910
```

---

### **Q.2 — Print 10 to 1 using while loop**

```c
#include <stdio.h>
int main() {
    int i = 10;
    while(i >= 1) {
        printf("%d", i);
        i--;
    }
    return 0;
}
```

**Output:**

```
10987654321
```

---

### **Q.3 — Print 1 to N using while loop**

```c
#include <stdio.h>
int main() {
    int i = 1, n;
    printf("Enter any number: ");
    scanf("%d", &n);

    while(i <= n) {
        printf("%d", i);
        i++;
    }
    return 0;
}
```

**Example Output:**

```
Enter any number: 7  
1234567
```

---

### **Q.4 — Print Odd Numbers from N to 1 using while loop**

```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    while(n >= 1) {
        if(n % 2 != 0) {
            printf("%d ", n);
        }
        n--;
    }
    return 0;
}
```

**Example Output:**

```
Enter any number: 15  
15 13 11 9 7 5 3 1
```

---

### **Q.5 — Print Leap Years Between Two Numbers using while loop**

```c
#include <stdio.h>
int main() {
    int start, end;
    printf("Enter the first number: ");
    scanf("%d", &start);
    printf("Enter the second number: ");
    scanf("%d", &end);

    while(start <= end) {
        if((start % 4 == 0 && start % 100 != 0) || (start % 400 == 0)) {
            printf("%d, ", start);
        }
        start++;
    }
    return 0;
}
```

**Example Output:**

```
Enter the first number: 2020  
Enter the second number: 2040  
2020, 2024, 2028, 2032, 2036, 2040
```

---

