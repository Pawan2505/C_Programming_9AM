
---

## **Topic: Flowchart Shapes & Creation (Nested if else)**

---

### 🔹 **What is a Flowchart?**

A **flowchart** is a **diagram** that shows the **step-by-step process** of a program using **different symbols** and **arrows**.
It helps to **visualize logic** before writing the code.

---

### 🔹 **Basic Flowchart Symbols:**

| **Symbol**          | **Meaning / Use**                        |
| ------------------- | ---------------------------------------- |
| ⏺️ **Oval**         | Start / End of program                   |
| ⬜ **Parallelogram** | Input / Output (e.g., `scanf`, `printf`) |
| ⬛ **Rectangle**     | Process or calculation step              |
| 🔷 **Diamond**      | Decision (e.g., if, if else condition)   |
| ➡️ **Arrow**        | Shows the flow direction                 |

---

### 🔹 **Nested if else in Flowchart**

“Nested” means one **if-else block inside another** if-else block.

For example 👇

> If (a < b)
> → then check if (a < c)
> → otherwise check between b and c

It helps to find **minimum or maximum values**, or to make **multiple-level decisions**.

---

### **Example 1:**

**Find the Minimum of 3 Numbers**

Flowchart Steps:

1. Start
2. Input a, b, c
3. If `a < b`
     → If `a < c` → print “a is minimum”
     → else print “c is minimum”
4. Else
     → If `b < c` → print “b is minimum”
     → else print “c is minimum”
5. End

---

### **Example 2:**

**Find the Maximum of 4 Numbers**

Flowchart Steps:

1. Start
2. Input a, b, c, d
3. If `a > b`
     → If `a > c`
       → If `a > d` → print “a is maximum”
       → else print “d is maximum”
     → else check between c and d
4. Else compare `b, c, d` similarly
5. End

---
