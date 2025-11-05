
---

### Variable Naming Rules in C Programming

When we create variables in C, we must follow some simple rules while giving them names. Let’s understand them one by one 👇

---

#### 1️⃣ Start with a Letter or Underscore

A variable name **must start with a letter (a–z or A–Z)** or an **underscore (_)**.
It **cannot start with a number**.

Correct:

```c
int _validName;
int validName;
```

Incorrect:

```c
int 9invalid; // Cannot start with a digit
```

---

#### 2️⃣ Allowed Characters

After the first character, we can use **letters, digits (0–9)**, and **underscores (_)**.
We **cannot use special characters** like @, #, $, %, etc.

Correct:

```c
int valid_name;
```

Incorrect:

```c
int invalid#name; // # is not allowed
```

---

#### 3️⃣ No Spaces or Hyphens

Variable names **cannot contain spaces or hyphens (-)**.
If you want to write a multi-word name, use **underscore** or **camelCase** style.

Correct:

```c
int totalCount;
int total_count;
```

Incorrect:

```c
int total count; // Space not allowed
int total-count; // Hyphen not allowed
```

---

#### 4️⃣ Don’t Use Reserved Keywords

Words that are already used by C (like `int`, `float`, `for`, `return`, etc.)
**cannot be used as variable names**, because they have special meanings.

Correct:

```c
int age;
```

Incorrect:

```c
int int; // 'int' is a keyword
```

---

#### 5️⃣ Case-Sensitive Language

C is **case-sensitive**, which means uppercase and lowercase letters are treated differently.
So, `age`, `Age`, and `AGE` are three **different variables**.

Example:

```c
int age;
int Age;
int AGE;
```

---

✨ **In Short:**

* Start with a letter or underscore.
* Use only letters, numbers, or underscores.
* No spaces, hyphens, or special symbols.
* Don’t use reserved keywords.
* Remember: C is case-sensitive!

---

