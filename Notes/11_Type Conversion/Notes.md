
---

## **Topic: Type Conversion in C Programming**

In C, sometimes we need to **convert one data type into another** — for example, from an `int` to a `float`, or from a `float` to an `int`.
This process is called **Type Conversion**.

---

### 🔹 What is Type Conversion?

👉 Type conversion means **changing the data type of a variable** from one type to another.

Example:

```c
int x = 10;
float y = x; // int → float conversion
```

Here, `x` (integer) is automatically converted into a float value (`10.0`) and stored in `y`.

---

### 🔸 Types of Type Conversion

C supports **two types** of conversions:

#### 1️⃣ **Implicit Type Conversion (Automatic)**

Also called **Type Promotion**.

* Done **automatically by the compiler**.
* Happens when different data types are used in an expression.
* Smaller data types are converted to larger ones to avoid data loss.

Example:

```c
int a = 5;
float b = 2.5;
float c = a + b;  // int 'a' automatically becomes float
```

So `a` becomes `5.0`, and `c` becomes `7.5`.

📘 Rule:
`char → int → float → double`

---

#### 2️⃣ **Explicit Type Conversion (Type Casting)**

Also called **Manual Conversion**.

* Done **manually by the programmer**.
* Uses **casting operator `(type)`**.

Example:

```c
float x = 7.5;
int y = (int)x;  // float → int conversion
```

Here, the value `7.5` becomes `7`.

---

### Why Use Type Conversion?

To perform operations between different data types.
To avoid unexpected output or data loss.
To control how data is used or displayed.

---

### 🧾 Quick Summary

| Type     | Who Performs It | Syntax    | Example              |
| -------- | --------------- | --------- | -------------------- |
| Implicit | Compiler        | Automatic | `float y = x + 2;`   |
| Explicit | Programmer      | `(type)`  | `int y = (int)3.14;` |

---

