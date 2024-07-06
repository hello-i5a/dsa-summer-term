/*
1. Infix notation:                                  a+b
2. Postfix notation (Reverse Polish notation):      ab+
3. Prefix notation (Polish notation):               +ab

Operand: numbers/letters/variables
Operators: symbols (PEMDAS)
                    Priority
                    ( )   -> 4
                    ^     -> 3
                    * /   -> 2
                    + -   -> 1

Rules in Postfix:
1. No operator of the same priority can stay after one another in the stack unless separated by a `(`.
2. No lower priority operator can go after a higher priority operator in the stack unless separated by a `(`.

Rules in Prefix:
1. No lower priority operator can go after a higher priority operator in the stack unless separated by a `(`.
*/