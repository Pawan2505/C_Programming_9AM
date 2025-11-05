
---

## 🧾 scanf() Function in C Programming

In C, the **`scanf()` function** is used to **take input** (read data) from the user during program execution.
It is the opposite of `printf()`, which is used for **output**.

You can think of `scanf()` as a way for your program to **ask the user for information** — like their name, age, or marks.

---

### Syntax:

```c
scanf("format_specifiers", &variable1, &variable2, ...);
```

---

### 📘 Example:

```c
#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age is %d", age);
    return 0;
}
```

🟢 **Output:**

```
Enter your age: 20
Your age is 20
```

---

### Explanation:

* `"format_specifiers"` → tells the compiler what type of data we are expecting.
  (Example: `%d` for int, `%f` for float, `%c` for char, `%s` for string)
* `&` (ampersand sign) → gives the **address** of the variable to store the value entered by the user.

💡 **Note:**
We must use `&` before variable names in `scanf()`, except for strings.

---

### Multiple Inputs Example:

You can take more than one input at the same time 👇

```c
#include<stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d", a + b);
    return 0;
}
```

🟢 **Output:**

```
Enter two numbers: 5 10
Sum = 15
```

---

### Common Format Specifiers in scanf()

| Specifier | Data Type | Example                            |
| --------- | --------- | ---------------------------------- |
| `%d`      | Integer   | `scanf("%d", &num);`               |
| `%f`      | Float     | `scanf("%f", &marks);`             |
| `%c`      | Character | `scanf("%c", &ch);`                |
| `%s`      | String    | `scanf("%s", name);` (No `&` here) |

---

### ⚠️ Common Mistakes

Forgetting the **& symbol** (except with strings)

```c
scanf("%d", num); // Wrong
scanf("%d", &num); // Correct
```

Using wrong format specifier

```c
scanf("%d", &name); // Wrong, should be %s for string
```

---

### ✨ In Short:

* `scanf()` is used to **take input** from the user.
* It uses **format specifiers** to identify the data type.
* Always use **& (address operator)** except for strings.
* The input is stored in the given variables.

---
