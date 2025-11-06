
---

## **Topic: Nested Function in C**

---

### 💡 What is a Nested Function?

A **nested function** means a function that is written **inside another function**.

In simple words, when one function is **defined inside another**, it is called a **nested function**.

However, in **standard C**, **nested functions are not officially supported**.
That means we cannot directly define one function inside another.

But — we can **call one function from inside another**, and that is what most people mean by **nested function concept** in C.

---

### Example: Calling one function inside another

```c
#include <stdio.h>

void message() {
    printf("This is a nested function example.\n");
}

void display() {
    printf("Display function started.\n");
    message();   // calling another function inside this function
    printf("Display function ended.\n");
}

int main() {
    display();
    return 0;
}
```

---

### Explanation:

1. `message()` and `display()` are two separate functions.
2. Inside the `display()` function, we called `message()`.
3. This is how **nesting of functions** works in C — one function **calls another**.

---

### Another Example: Sum and Average

```c
#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

void average(int x, int y) {
    int total = sum(x, y);   // nested function call
    float avg = total / 2.0;
    printf("Average = %.2f", avg);
}

int main() {
    int n1 = 10, n2 = 20;
    average(n1, n2);
    return 0;
}
```

---

### Output:

```
Average = 15.00
```

---

### Advantages of Using Nested Function Calls:

1. **Code Reusability** – You can use one function in many other functions.
2. **Better Organization** – Keeps logic clean and structured.
3. **Modularity** – Breaks down large problems into smaller parts.
4. **Easy Debugging** – Easier to find and fix errors.

---

### ⚠️ Important Note:

You **cannot define** a function inside another function in standard C, like this 👇
**Invalid in C:**

```c
void outer() {
    void inner() {   // Not allowed
        printf("Hello");
    }
}
```

**Correct Way:**
Just **define functions separately**, and **call them** where needed.

---

### Summary

| Concept         | Description                                              |
| --------------- | -------------------------------------------------------- |
| Definition      | Function calling another function inside its body        |
| Supported in C? | Yes (only function calling, not defining inside another) |
| Benefit         | Code reusability and better program structure            |
| Example         | Calling `sum()` inside `average()`                       |

---

