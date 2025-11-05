
---

## Escape Sequence Characters in C Programming

Sometimes, we want to print special characters like a **new line**, a **tab space**, or **quotes** in our output.
But directly writing them is not possible.
That’s why C provides **escape sequence characters** — special symbols that start with a **backslash (\)**.

They help us **control output formatting** inside a string.

---

### 📘 Example:

```c
#include<stdio.h>
int main(){
    printf("Hello\nWorld");
    return 0;
}
```

🟢 **Output:**

```
Hello
World
```

Here `\n` is an **escape sequence** that moves the cursor to a **new line**.

---

### Common Escape Sequences in C

| Escape Sequence | Meaning            | Example                                      | Output        |
| --------------- | ------------------ | -------------------------------------------- | ------------- |
| `\n`            | New Line           | `printf("Hi\nHello");`                       | Hi <br> Hello |
| `\t`            | Tab Space          | `printf("A\tB");`                            | A B           |
| `\\`            | Backslash          | `printf("\\");`                              | \             |
| `\"`            | Double Quote       | `printf("\"Hello\"");`                       | "Hello"       |
| `\'`            | Single Quote       | `printf("\'A\'");`                           | 'A'           |
| `\b`            | Backspace          | `printf("AB\bC");`                           | AC            |
| `\r`            | Carriage Return    | `printf("Hello\rWorld");`                    | World         |
| `\f`            | Form Feed          | Moves cursor to next page (used in printers) |               |
| `\a`            | Alert (Beep Sound) | `printf("\a");`                              | Beep Sound    |
| `\0`            | Null Character     | Used to end a string in C                    |               |

---

### 💡 Important Points

* Every escape sequence **starts with a backslash (\)**.
* They are used **inside double quotes** in `printf()`.
* They are **not printed directly**, but **perform actions** like moving to a new line or making a sound.

---

### Example:

```c
#include<stdio.h>
int main(){
    printf("Name:\tPawan\n");
    printf("Course:\tC Programming\n");
    printf("Message:\t\"Welcome to C!\"");
    return 0;
}
```

🟢 **Output:**

```
Name:    Pawan
Course:  C Programming
Message: "Welcome to C!"
```

---

