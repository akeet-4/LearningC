# LearningC

A collection of beginner-level C programs for learning programming fundamentals.

## Programs

### 1. **Mad Libs Game** (`a_MADLIBSGAME.c`)
An interactive word game where the user provides adjectives, nouns, and verbs to create a funny story.

**Features:**
- User input for various word types
- String manipulation with `fgets()`
- Story generation and display

**How to run:**
```bash
gcc a_MADLIBSGAME.c -o madlibs
./madlibs
```

### 2. **Shopping Cart** (`a_SHOPPINGCART.c`)
A simple shopping cart program that calculates the total cost of items.

**Features:**
- Takes item name, price, and quantity as input
- Calculates total cost
- Displays formatted output with currency symbol

**How to run:**
```bash
gcc a_SHOPPINGCART.c -o shopping
./shopping
```

### 3. **Circle Calculator** (`a_zCIRCLECALCULATOR.c`)
Calculates geometric properties of a sphere given its radius.

**Features:**
- Calculates area, surface area, and volume
- Uses the `math.h` library for power calculations
- Formatted decimal output

**How to run:**
```bash
gcc a_zCIRCLECALCULATOR.c -o circle -lm
./circle
```

### 4. **Compound Interest Calculator** (`a_zCOMPOUNDINTEREST.c`)
Calculates compound interest with customizable parameters.

**Features:**
- Takes principal, interest rate, time period, and compounding frequency
- Uses compound interest formula: A = P(1 + r/n)^(nt)
- Displays final amount after specified time period

**How to run:**
```bash
gcc a_zCOMPOUNDINTEREST.c -o compound -lm
./compound
```

## Compilation

Compile all programs:
```bash
gcc a_MADLIBSGAME.c -o madlibs
gcc a_SHOPPINGCART.c -o shopping
gcc a_zCIRCLECALCULATOR.c -o circle -lm
gcc a_zCOMPOUNDINTEREST.c -o compound -lm
```

**Note:** Programs using `math.h` require the `-lm` flag to link the math library.

## Recent Fixes

- ✅ Fixed sphere volume formula (was r², now r³)
- ✅ Added output formatting to shopping cart total
- ✅ Added input validation to Mad Libs game

## Learning Topics Covered

- Basic I/O with `printf()` and `scanf()`
- String handling with `fgets()` and `string.h`
- Mathematical calculations with `math.h`
- Variable types and casting
- Control flow and input validation
