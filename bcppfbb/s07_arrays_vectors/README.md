# Arrays & Vectors


## Arrays

### How does it work?
- The name of the array represents the location of the first element in the array.
- The [index] represents the offset from the beginning of the array.
- C++ simply performs a calculation to find the correct element.

### Declaring
```
Element_Type array_name [constant number of elements];
```

```cpp
int test_scores [5];

int high_score_per_level [10];

const int days_in_year {365};
double hi_temperatures [days_in_year];
```

### Initialization
```
Element_Type array_name [number of elements] {init list}
```

```cpp
int test_scores [5] {100, 95, 99, 87, 88};

// init to 3, 5 , and remaining to 0
int high_score_per_level [10] {3, 5};

// init all to zero
const double days_in_year {365};
double hi_temperatures [days_in_year] {0};

// size automatically calculated
int another_array [] {1, 2, 3, 4, 5};
```

### Accessing array elements
```
array_name[element_index]
```

```cpp
test_scores[1]
```

### Changing the contents of array elements
```
array_name[element_index]
```

```
int test_scores [5] {100, 95, 99, 87, 88};

std::cin >> test_scores[0];
std::cin >> test_scores[1];
std::cin >> test_scores[2];
std::cin >> test_scores[3];
std::cin >> test_scores[4];

// assignment statement
test_scores[0] = 90;
```

### Accessing array elements in multi-dimensional arrays
```cpp
std::cin >> movie_rating[1][2];
std::cout << movie_rating[1][2];
```

### Initializing multi-dimensional arrays

```cpp
int movie_rating[3][4]
{
    {0, 4, 3, 5},
    [2, 3, 3, 5],
    {1, 4, 4, 5}
};
```

## Vectors
### What is a vector?
- Container in the C++ Standard Template Library
- An array that can grow and shrink in size at execution time
- Provides similar semantics and syntax as arrays
- Very efficient
- Can provide bounds checking
- Can use lots of cool functions like sort, reverse, find, and more.

### Characteristics
- Dynamic size
- Elements are all the same type
- Stored contiguously in memory
- Individual elements can be accessed by their position or index

- First element is at index 0
- Last element is at index size-1

- [] - no checking to see if you are out of bounds
- Provides many useful functions that do bounds check

- Elements initialized to 0
- Iteration is often used to process

### Declaring

```cpp
#include <vector>

std::vector <char> vowels (5);
std::vector <int> test_scores (10);
```

### Initializing
```cpp
std::vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
std::vector <int> test_scores {100, 98, 89, 85, 93};

// 360 -> number of elements, 80.0 -> initial values
std::vector <double> hi_temperatures (365, 80.0);
```

### Accessing vector elements
```
vector_name [element_index]

test_scores[1]
```

```
vector_name.at(element_index)

test_scores.at(1)
```

### Changing the contents of vector elements
```
vector_name.at(element_index)
```

```cpp
std::vector <int> test_scores {100, 95, 99, 87, 88};

std::cin >> test_scores.at(0);

// assignment statement
test_scores.at(0) = 90;
```

```
vector_name.push_back(element)
```

```cpp
std::vector <int> test_scores {100, 95, 99};

test_scores.push_back(95);
```
