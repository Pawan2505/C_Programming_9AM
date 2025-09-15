# 📝 Data Types in C

---

## 🔹 Basic Data Types

### 1. Integer → `int`

* Stores whole numbers (… -12, -45, 0, 12, 34, 56 …)
* Size: **4 bytes**

### 2. Floating Point → `float`

* Stores decimal numbers (e.g., 15.36, -9845.36547)
* Size: **4 bytes**

### 3. Double → `double`

* Stores bigger decimal numbers (e.g., 23456.56576869768)
* Size: **8 bytes**

### 4. Character → `char`

* Stores a single character (‘a’, ‘A’)
* Size: **1 byte**

### 5. String → `char array`

* In C, no direct `string` type
* Example: `char name[] = "pawan";`
* `"pawan"` → 5 characters → 5 bytes

---

## 🔹 Variations of int & float

* **signed int** → positive & negative both
* **unsigned int** → only positive
* **short int** → 2 bytes
* **long int** → 8 bytes
* **long long int** → 8 bytes
* **long double** → 10 bytes
* **wchar\_t** → 2 bytes (wide character)
* **void** → no value (often return type of function)

---

## 📊 Quick Comparison Table

| **Data Type**     | **Size (bytes)** | **Example Values**            | **Notes**                           |
| ----------------- | ---------------- | ----------------------------- | ----------------------------------- |
| `int`             | 4                | 12, -45, 0                    | Whole numbers                       |
| `float`           | 4                | 15.36, -9845.36547            | Decimal (6–7 digits precision)      |
| `double`          | 8                | 23456.5657686, 3455.23245     | More precise decimal (15–16 digits) |
| `char`            | 1                | 'a', 'A', '9'                 | Single character                    |
| `char[]` (string) | depends on chars | `"pawan"` → 5 chars → 5 bytes | Array of chars                      |
| `short int`       | 2                | -32,768 to 32,767             | Smaller int                         |
| `long int`        | 8                | Very large integers           | Bigger int                          |
| `long long int`   | 8                | Larger integers (64-bit)      | Very big range                      |
| `long double`     | 10               | 3.14159265358979              | High precision decimals             |
| `wchar_t`         | 2                | L'A', L'字'                    | Wide character (Unicode)            |
| `void`            | 0                | —                             | No value (return type)              |

---

## 📝 Easy Tricks for Students

* `int` → whole numbers
* `float / double` → decimal numbers
* `char` → letters (single)
* `string` → group of chars (char array)
* `void` → nothing (empty return type)

---

