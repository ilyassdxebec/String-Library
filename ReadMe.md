# 🧵 clsString — C++ String Utility Library

A C++ class that extends `std::string` with a collection of useful string manipulation methods. Each method is available as both a **static method** (use on any string) and an **instance method** (use on the object's stored value).

---

## ⚙️ How to Use

1. Clone the repo
2. Include the header
```cpp
#include "clsString.h"
```
3. Create an instance or use static methods directly

```cpp
// Instance
clsString str("Hello World");
str.CountWords(); // 2

// Static
clsString::CountWords("Hello World"); // 2
```

---

## 📋 Methods Example (there are lots more): 

| Method | Type | Description |
|---|---|---|
| `CountWords()` | Instance | Returns word count of stored string |
| `CountWords(string S)` | Static | Returns word count of any string |
| `GetValue()` | Instance | Returns the stored string |
| `SetValue(string S)` | Instance | Sets the stored string |


---

## 🛠️ Built With

- C++17
- Visual Studio 2022

---
