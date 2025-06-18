# ft_printf

A reimplementation of the C standard library `printf` function—project #3 in the 42 curriculum.

---

## 📌 About

This project teaches:
- How to handle **variadic arguments** in C using `stdarg.h`
- Implementation of formatted output and specifier parsing
- Flag management, field width, precision, and return value tracking :contentReference[oaicite:1]{index=1}

---

## 🚀 Features

### 🔧 Mandatory Conversions
- `%c` — character
- `%s` — string
- `%p` — pointer (hexadecimal)
- `%d`, `%i` — signed integer
- `%u` — unsigned integer
- `%x`, `%X` — unsigned hexadecimal (lower/upper)
- `%%` — literal `%` :contentReference[oaicite:2]{index=2}

### 🌟 Bonus
- Support for flags: `-`, `0`, `.`, field width, and combinations :contentReference[oaicite:3]{index=3}
- Respect specifier rules: e.g., `0` ignored if `-` or precision is present :contentReference[oaicite:4]{index=4}

---

## 🛠️ Requirements

- Language: C (Norm‑compliant)
- Compiler: `gcc` (or `cc`) with `-Wall -Wextra -Werror`
- Only allowed functions: `malloc`, `free`, `write`, and `stdarg.h` macros :contentReference[oaicite:5]{index=5}

---

## 🔧 Usage

1. **Clone the repo**:
   ```bash
   git clone https://github.com/amakarem/ft_printf.git
   cd ft_printf
   ```
