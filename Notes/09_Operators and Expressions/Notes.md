
---

## 🧾 Operators and Expressions in C Programming

In C, we often need to **perform calculations** or **make decisions** in our programs.
To do that, we use **operators** and **expressions**.

Let’s understand both step by step 👇

---

### 🔹 What is an Operator?

An **operator** is a **symbol** that tells the compiler to **perform a specific operation** like addition, subtraction, comparison, etc.

Example 👇

```c
int a = 10, b = 5;
int sum = a + b; // '+' is an operator
```

Here, `+` is an **operator** that adds `a` and `b`.

---

### 🔹 What is an Expression?

An **expression** is a **combination of variables, constants, and operators** that produces a value.

Example 👇

```c
x = (a + b) * c;
```

Here, `(a + b) * c` is an **expression** that gives a result which is then stored in `x`.

---

## ⚙️ Types of Operators in C

C provides many types of operators to perform different tasks 👇

---

### 1️⃣ Arithmetic Operators

Used for **mathematical calculations**.

| Operator | Meaning             | Example | Result |
| -------- | ------------------- | ------- | ------ |
| `+`      | Addition            | `5 + 2` | 7      |
| `-`      | Subtraction         | `5 - 2` | 3      |
| `*`      | Multiplication      | `5 * 2` | 10     |
| `/`      | Division            | `5 / 2` | 2      |
| `%`      | Modulus (Remainder) | `5 % 2` | 1      |

---

### 2️⃣ Relational Operators

Used to **compare two values**.
They return **true (1)** or **false (0)**.

| Operator | Meaning               | Example  | Result   |
| -------- | --------------------- | -------- | -------- |
| `==`     | Equal to              | `5 == 5` | 1 (true) |
| `!=`     | Not equal to          | `5 != 3` | 1        |
| `>`      | Greater than          | `5 > 2`  | 1        |
| `<`      | Less than             | `5 < 2`  | 0        |
| `>=`     | Greater than or equal | `5 >= 5` | 1        |
| `<=`     | Less than or equal    | `3 <= 5` | 1        |

---

### 3️⃣ Logical Operators

Used to **combine two or more conditions**.

| Operator | Meaning     | Example              | Result            |          |   |          |                      |
| -------- | ----------- | -------------------- | ----------------- | -------- | - | -------- | -------------------- |
| `&&`     | Logical AND | `(a > b) && (a > c)` | True if both true |          |   |          |                      |
| `        |             | `                    | Logical OR        | `(a > b) |   | (a > c)` | True if any one true |
| `!`      | Logical NOT | `!(a > b)`           | True if false     |          |   |          |                      |

---

### 4️⃣ Assignment Operators

Used to **assign values** to variables.

| Operator | Example  | Same As   |
| -------- | -------- | --------- |
| `=`      | `a = 5`  | a = 5     |
| `+=`     | `a += 2` | a = a + 2 |
| `-=`     | `a -= 2` | a = a - 2 |
| `*=`     | `a *= 2` | a = a * 2 |
| `/=`     | `a /= 2` | a = a / 2 |
| `%=`     | `a %= 2` | a = a % 2 |

---

### 5️⃣ Increment and Decrement Operators

Used to **increase or decrease** the value of a variable by 1.

| Operator | Meaning   | Example | Result    |
| -------- | --------- | ------- | --------- |
| `++`     | Increment | `a++`   | a = a + 1 |
| `--`     | Decrement | `a--`   | a = a - 1 |

---

### 6️⃣ Conditional (Ternary) Operator

It’s a **shortcut for if-else** statements.

Syntax 👇

```c
condition ? expression1 : expression2;
```

Example:

```c
int a = 10, b = 20;
int max = (a > b) ? a : b;
```

🟢 Output:

```
max = 20
```

---

### 7️⃣ Bitwise Operators (Advanced)

Used to **perform operations on bits** (0s and 1s).

| Operator | Meaning     |            |
| -------- | ----------- | ---------- |
| `&`      | Bitwise AND |            |
| `        | `           | Bitwise OR |
| `^`      | Bitwise XOR |            |
| `~`      | Bitwise NOT |            |
| `<<`     | Left Shift  |            |
| `>>`     | Right Shift |            |

---

### Example

```c
#include<stdio.h>
int main(){
    int a = 10, b = 5;
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    printf("Quotient: %d\n", a / b);
    printf("Remainder: %d\n", a % b);
    return 0;
}
```

🟢 **Output:**

```
Sum: 15
Difference: 5
Product: 50
Quotient: 2
Remainder: 0
```

---

### ✨ In Short

* **Operators** perform actions.
* **Expressions** combine variables and operators to produce a result.
* Common operators: **Arithmetic, Relational, Logical, Assignment, Increment/Decrement, Ternary, Bitwise.**

---

