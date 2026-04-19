# 📦 C++ Utility Libraries

A collection of reusable C++ classes that extend the standard library with clean, OOP-based utilities. Each class provides both **static methods** (use without an object) and **instance methods** (use on an object).

---

## 📁 Project Structure
├── clsString.h
├── clsDate.h
├── clsMath.h
└── main.cpp

---

## 🧵 clsString

A wrapper around `std::string` with extended string manipulation utilities.

### Instance Usage
```cpp
clsString str("Hello World");
str.CountWords();        // 2
str.Value = "New text";  // property setter
str.GetValue();          // "New text"
```

### Static Usage
```cpp
clsString::CountWords("Hello World"); // 2
```

### Methods

| Method | Type | Description |
|---|---|---|
| `CountWords()` | Instance | Returns word count of stored string |
| `CountWords(string S)` | Static | Returns word count of any string |
| `GetValue()` | Instance | Returns the stored string |
| `SetValue(string S)` | Instance | Sets the stored string |

---

## 🔢 clsMath

A utility class for common mathematical operations.

### Static Usage
```cpp
clsMath::Add(5, 3);       // 8
clsMath::Power(2, 10);    // 1024
clsMath::IsEven(4);       // true
```

### Methods

| Method | Type | Description |
|---|---|---|
| `Add(a, b)` | Static | Returns sum of two numbers |
| `Power(base, exp)` | Static | Returns base raised to exp |
| `IsEven(n)` | Static | Returns true if number is even |

---

## 📅 clsDate

A utility class for date manipulation and formatting.

### Instance Usage
```cpp
clsDate date(1, 1, 2024);
date.Print();              // 01/01/2024
date.AddDays(10);          // moves date forward 10 days
```

### Static Usage
```cpp
clsDate::IsLeapYear(2024); // true
clsDate::DaysBetween(d1, d2);
```

### Methods

| Method | Type | Description |
|---|---|---|
| `Print()` | Instance | Prints formatted date |
| `AddDays(n)` | Instance | Adds n days to the date |
| `IsLeapYear(year)` | Static | Returns true if leap year |
| `DaysBetween(d1, d2)` | Static | Returns days between two dates |

---

## ⚙️ How to Use

1. Clone the repo
```bash
git clone https://github.com/yourusername/cpp-utility-libraries.git
```

2. Include the header you need
```cpp
#include "clsString.h"
#include "clsMath.h"
#include "clsDate.h"
```

3. Use static methods directly or create an instance

---

## 🛠️ Built With

- C++17
- Visual Studio 2022

---
