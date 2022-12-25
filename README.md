# Base64.h
This is a C++ header file that provides functions for encoding and decoding strings using the Base64 encoding scheme.

# Functions
`bool is_base64(unsigned char c)`
Checks whether a given character is a valid Base64 character or not.

**Parameters**
- `c`: The character to be checked.

**Return value**<br>
Returns `true` if the character is a valid Base64 character (i.e., an uppercase or lowercase letter, a digit, or '+' or '/') and `false` otherwise.

`string base64_encode(const string &input)`<br>
Encodes a string using the Base64 encoding scheme.

**Parameters**
- `input`: The string to be encoded.

**Return value**<br>
Returns the Base64-encoded version of the input string.

`string base64_decode(const string &input)`<br>
Decodes a Base64-encoded string.

**Parameters**
- `input`: The Base64-encoded string to be decoded.

**Return value**<br>
Returns the decoded version of the input string.

# Example
```
#include "base64.h"
#include <iostream>

using namespace std;

int main()
{
    string input = "Hello, World!";
    string encoded = base64_encode(input);
    cout << "Encoded: " << encoded << endl;
    string decoded = base64_decode(encoded);
    cout << "Decoded: " << decoded << endl;
    return 0;
}
```

**Output:**
```
Encoded: SGVsbG8sIFdvcmxkIQ==
Decoded: Hello, World!
```
