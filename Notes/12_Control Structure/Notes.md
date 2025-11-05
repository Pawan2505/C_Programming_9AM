
---

## **Topic: Control Structure in C Programming**

In a C program, statements are normally executed **from top to bottom**, one after another.
But sometimes, we need to **make decisions** — for example:
👉 “If marks are above 40, print pass; otherwise, print fail.”

To make such decisions, we use **Control Structures**.

---

### What is a Control Structure?

A **Control Structure** is used to **control the flow of execution** in a program based on certain conditions.

Example:

```c
if (marks >= 40)
    printf("Pass");
else
    printf("Fail");
```

---

## 🔹 **1. if Statement**

The **if statement** checks a condition.
If the condition is **true**, the code inside the block runs.
If it’s **false**, the code is skipped.

Syntax:

```c
if (condition) {
    // code to execute when condition is true
}
```

Example:

```c
int age = 20;
if (age >= 18) {
    printf("You can vote!");
}
```

Output: `You can vote!`

---

## 🔸 **2. if...else Statement**

The **if...else** statement gives **two options** —
one block runs if the condition is true,
the other runs if it’s false.

Syntax:

```c
if (condition) {
    // code when true
}
else {
    // code when false
}
```

Example:

```c
int marks = 35;

if (marks >= 40) {
    printf("Pass");
}
else {
    printf("Fail");
}
```

Output: `Fail`

---

## 🔺 **3. Ladder if (if...else if...else)**

When we have **multiple conditions**, we use an **if-else ladder**.

Syntax:

```c
if (condition1) {
    // code block 1
}
else if (condition2) {
    // code block 2
}
else if (condition3) {
    // code block 3
}
else {
    // code block n (default)
}
```

Example:

```c
int marks = 85;

if (marks >= 90)
    printf("Grade A");
else if (marks >= 75)
    printf("Grade B");
else if (marks >= 60)
    printf("Grade C");
else
    printf("Fail");
```

Output: `Grade B`

---

### Summary

| Type                | Description                        | Example Use              |
| ------------------- | ---------------------------------- | ------------------------ |
| if                  | Executes only if condition is true | Checking login success   |
| if...else           | Executes one of two blocks         | Pass or fail result      |
| if...else if...else | Multiple conditions                | Grade system, menu, etc. |

---

