# Alphabetize #

## About ##
Compares two strings, character by character. At the first pair of characters that aren't equal, it returns a 1 if the first string comes first, or a 2 if the second string comes first. If the trings are equal it returns a 0. Ignores case. 

## Usage ##
    Alphabetize("Hello", "world") // -> 1
    Alphabetize("world", "Hello") // -> 2
    Alphabetize("hello", "hello") // -> 0
    Alphabetize("hello", "Hello") // -> 0
