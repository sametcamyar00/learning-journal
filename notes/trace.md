# Session 1

## Exercise 1

| x | y |
| --- | --- |
| 4 | 7 |
| 11 | 4 |
| 7 | 4 |

- Output: 7 4

## Exercise 2

| a | b |
| --- | --- |

- Output: 3 2

## Exercise 3

| a | b | i |
| --- | --- | --- |
| - | - | 5 |
| 5 | - | 6 |
| 5 | 7 | 7 |

- Output: 5 7 7

## Exercise 4

| sum |
| --- |
| 0 |
| 1 |
| 3 |
| 6 |
| 10 |

- Output: 10

## Exercise 5

| n |
| --- |
| 10 |
| 7 |
| 4 |
| 1 |

- Output: 1

## Exercise 6

| x |
| --- |
| 8 |
| 3 |
| 13 |

- Output: 13

## Exercise 7

| i |
| --- |
| 0 |
| 0 3 |
| 0 3 6 |
| 0 3 6 9 |

- Output: 0 3 6 9

## Exercise 8

| a |
| --- |
| 2 |
| 5 |
| 20 |
| 14 |
| 3 |

- Output: 3

## Exercise 9

| count |
| --- |
| 1 |
| 2 |
| 3 |
| 4 |
| 5 |
| 6 |

- Output: 6

## Exercise 10

| c |
| --- |
| 'A' |
| 'C' |

- Output: C 67



# Session 2

## Exercise 1

| x | Output |
| --- | - |
| 1 | - |
| 1 | 1 |
| 3 | 1 |
| 3 | 1 \| 3 |

- Output: 1 | 3

## Exercise 2

| i | Output |
| --- | --- |
| 1 | 1 |
| 2 | 1 |
| 3 | 1 3 |
| 4 | 1 3 |
| 5 | 1 3 |

- Output: 1 3

## Exercise 3

- Output: -3 -1

## Exercise 4

- Output: 3.00

## Exercise 5

| n | Output |
| --- | - |
| 5 | - |
| 10 (geçici) | in: 10 |
| 5 | out: 5 |

- Output:

    in: 10
    out: 5

## Exercise 6

| a | b | c |
| --- | --- | --- |
| 3 | 16 | 10 |

- Output: 16 10

## Exercise 7

| i | total |
| --- | --- |
| 0 | 0 |
| 0 | 1 |
| 1 | 3 |
| 2 | 3 |
| 3 | 7 |
| 4 | 12 |
| 5 | 12 |

- Output: 5 12

## Exercise 8

| x | output |
| --- | --- |
| 5 | five six  |

- Output: five six 

- Hata muhtemelen case'lere break yazılmadığı için verilecek.

## Exercise 9

| i | j | out1 | new_line_out2 |
| --- | --- | --- | --- |
| 3 | 0 | * | - |
| 3 | 1 | ** | - |
| 3 | 2 | *** | true (\n) |
| 2 | 0 | ***\n* | - |
| 2 | 1 | ***\n**\n | true (\n) |
| 1 | 0 | ***\n**\n* | true (\n) |

- Output:

    ***
    **
    *

## Exercise 10

| n | sum |
| --- | --- |
| 1234 | 0 |
| 123 | 4 |
| 12 | 7 |
| 1 | 9 |
| 0 | 10 | 

- Output: 10 0



# Session 3

## Exercise 1

| condition | i |
| --- | --- |
| true | 0 |
| true | 1 |
| true | 2 |
| false | 2 |

- Output: 2

## Exercise 2

| condition | i_ilk | i_son |
| --- | --- | --- |
| - | 10 | - |
| true | 10 | 6 |
| true | 6 | 2 |
| true | 2 | -2 |
| false | -2 | -2 |

- Output: -2

## Exercise 3

| condition | i_ilk | i_son | count |
| --- | --- | --- | --- |
| - | - | - | 0 |
| true | 1 | 2 | 1 |
| true | 2 | 4 | 2 |
| true | 4 | 8 | 3 |
| true | 8 | 16 | 4 |
| false | 16 | 16 | 4 |

- Output: 4

## Exercise 4

- Output: 3.0 3.5

## Exercise 5

| a | b | r | q |
| --- | --- | --- | --- |
| 5 | 2 | - | - |
| 5.0 | 2 | 2.5 | 2 |

- Output: 2.50 2

## Exercise 6

| condition | x_ilk | x_son |
| --- | --- | --- |
| - | 1 | - |
| true | 1 | 3 |
| true | 3 | 9 |
| true | 9 | 27 |
false | 27 | 27 |

- Output: 27

## Exercise 7

| condition | i_ilk | i_son | output |
| --- | --- | --- | --- |
| - | 0 | - | - |
| true | 0 | 1 | 1 |
| true | 1 | 2 | 1 2 |
| true | 2 | 3 | 1 2 3 |
| false | 3 | 3 | 1 2 3 \| 3 |

- Output: 1 2 3 | 3

## Exercise 8

| condition | i_ilk | i_son | sum |
| --- | --- | --- | --- |
| - | - | - | 0 |
| true | 1 | 4 | 1 |
| true | 4 | 7 | 5 |
| true | 7 | 10 | 12 |
| true | 10 | 13 | 22 |

- Output: 22 13

## Exercise 9

| condition | n_ilk | f | n_son |
| --- | --- | --- | --- |
| - | 5 | 1 | - |
| true | 5 | 5 | 4 |
| true | 4 | 20 | 3 |
| true | 3 | 60 | 2 |
| true | 2 | 120 | 1 |
| false | 1 | 120 | 1 |

- Output: 120 1

- Bu döngü n! işlemini hesaplar.

## Exercise 10

| a_ilk | a_son | b |
| --- | --- | --- |
| 10 | 8 | 2 |

- Output: 8 2 10
