
---

## 🧾 Operator Precedence in C Programming

In C, when we write an expression that contains **more than one operator**,
the compiler needs to know **which operation to perform first**.

That’s where **Operator Precedence** comes in! 💡

---

### What is Operator Precedence?

**Operator Precedence** means the **priority level** of operators.
It decides **which operator is executed first** in an expression.

Example 👇

```c
int result = 10 + 5 * 2;
```

🟢 Here multiplication (`*`) has **higher precedence** than addition (`+`),
so it runs **first**.

👉 Calculation order:
`5 * 2 = 10`
then
`10 + 10 = 20`

Final Output → `20`

---

### 🔁 What is Associativity?

If **two operators** have the **same precedence**,
then **Associativity** tells the compiler whether to evaluate
**from left to right** or **right to left**.

Example 👇

```c
int x = 10 - 5 - 2;
```

Both `-` have the same precedence → so it works **left to right**.
`(10 - 5) - 2 = 3`

---

## Operator Precedence Table (from Highest → Lowest)

| Precedence | Category       | Operators                                                    | Associativity |               |               |
| ---------- | -------------- | ------------------------------------------------------------ | ------------- | ------------- | ------------- |
| 1          | Postfix        | `()`, `[]`, `.`, `->`, `++`, `--`                            | Left to Right |               |               |
| 2          | Unary          | `+`, `-`, `++`, `--`, `!`, `~`, `(type)`, `*`, `&`, `sizeof` | Right to Left |               |               |
| 3          | Multiplicative | `*`, `/`, `%`                                                | Left to Right |               |               |
| 4          | Additive       | `+`, `-`                                                     | Left to Right |               |               |
| 5          | Shift          | `<<`, `>>`                                                   | Left to Right |               |               |
| 6          | Relational     | `<`, `<=`, `>`, `>=`                                         | Left to Right |               |               |
| 7          | Equality       | `==`, `!=`                                                   | Left to Right |               |               |
| 8          | Bitwise AND    | `&`                                                          | Left to Right |               |               |
| 9          | Bitwise XOR    | `^`                                                          | Left to Right |               |               |
| 10         | Bitwise OR     | `                                                            | `             | Left to Right |               |
| 11         | Logical AND    | `&&`                                                         | Left to Right |               |               |
| 12         | Logical OR     | `                                                            |               | `             | Left to Right |
| 13         | Conditional    | `?:`                                                         | Right to Left |               |               |
| 14         | Assignment     | `=`, `+=`, `-=`, `*=`, `/=`, `%=`                            | Right to Left |               |               |
| 15         | Comma          | `,`                                                          | Left to Right |               |               |

---

### 📘 Example Program 1:

```c
#include<stdio.h>
int main(){
    int result = 10 + 5 * 2;
    printf("Result = %d", result);
    return 0;
}
```

🟢 **Output:**

```
Result = 20
```

Because `*` runs before `+`.

---

### 📘 Example Program 2:

```c
#include<stdio.h>
int main(){
    int a = 10, b = 20, c = 5;
    int result = a + b * c;
    printf("Result = %d", result);
    return 0;
}
```

🟢 **Output:**

```
Result = 110
```

Because `b * c` (100) happens before `a + 100`.

---

### 📘 Example Program 3 (Associativity)

```c
#include<stdio.h>
int main(){
    int x = 10, y = 5, z = 2;
    int result = x - y - z;
    printf("Result = %d", result);
    return 0;
}
```

🟢 **Output:**

```
Result = 3
```

Because subtraction (`-`) works **left to right**.

---

### ⚠️ Remember

* Operators with **higher precedence** are executed **first**.
* If precedence is same → use **associativity** to decide order.
* Use **parentheses `( )`** to make your expression clear.

Example 👇

```c
result = (10 + 5) * 2; // Runs addition first
```

---

### ✨ In Short

* Precedence → Who goes first
* Associativity → Who goes next (left → right or right → left)
* Always use `( )` if you want to **control** the order manually

---

