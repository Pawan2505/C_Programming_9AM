
---

## 🧾 Format Specifiers in C Programming

When we use `printf()` or `scanf()` in C, we need a way to tell the computer **what kind of data** we want to print or read.
That’s where **format specifiers** come in! 💡

They help the compiler understand **the type of data** (like integer, float, character, etc.) we are working with.

---

### 📘 What is a Format Specifier?

A **format specifier** is a special symbol that starts with a **% (percent sign)** and tells the compiler the **data type** of the value.

For example 👇

```c
printf("Value of a is %d", a);
```

Here, `%d` means that the variable `a` is an **integer**.

---

### Commonly Used Format Specifiers

| Specifier    | Data Type                | Example                     | Output        |
| ------------ | ------------------------ | --------------------------- | ------------- |
| `%d` or `%i` | Integer (int)            | `printf("%d", 10);`         | 10            |
| `%f`         | Float (decimal)          | `printf("%f", 3.14);`       | 3.140000      |
| `%.2f`       | Float (2 decimal places) | `printf("%.2f", 3.14159);`  | 3.14          |
| `%c`         | Character                | `printf("%c", 'A');`        | A             |
| `%s`         | String                   | `printf("%s", "Hello");`    | Hello         |
| `%u`         | Unsigned integer         | `printf("%u", 25);`         | 25            |
| `%ld`        | Long integer             | `printf("%ld", 123456L);`   | 123456        |
| `%lf`        | Double                   | `printf("%lf", 3.141592);`  | 3.141592      |
| `%p`         | Pointer (address)        | `printf("%p", &a);`         | 0x7ffee4b3    |
| `%%`         | Percent sign             | `printf("100%% Complete");` | 100% Complete |

---

### Example

```c
#include<stdio.h>
int main(){
    int age = 20;
    float marks = 89.75;
    char grade = 'A';
    char name[20] = "Pawan";

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Marks: %.2f\n", marks);
    printf("Grade: %c\n", grade);

    return 0;
}
```

🟢 **Output:**

```
Name: Pawan
Age: 20
Marks: 89.75
Grade: A
```

---

### 💡 Extra Tips

Always match the **specifier with the correct data type**.
Using the wrong specifier gives **unexpected output** or **errors**.
You can use **multiple specifiers** in one `printf()` statement.

Example :

```c
printf("Name: %s, Age: %d, Marks: %.1f", name, age, marks);
```

---

### ✨ In Short

* Format specifiers start with `%`.
* They help display values correctly.
* Always match the specifier with the variable’s data type.

---

