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

