is_prime(N) :- N > 1, is_prime_aux(N, 2).

is_prime_aux(N, Divisor) :- Divisor > sqrt(N), !.
is_prime_aux(N, Divisor) :- Divisor =< sqrt(N),
                            Remainder is N mod Divisor,
                            (Remainder = 0 -> false ; NextDivisor is Divisor + 1, is_prime_aux(N, NextDivisor)).

invert_mod(N, P, Inverse) :- between(1, P, Inverse), 1 is (N * Inverse) mod P.

solve_aux(P, End, _, Total, Total) :- P > End.
solve_aux(A, End, K, Acc, Total) :- is_prime(A), invert_mod(K - 1, A, Inverse),
                                    NewAcc is Acc + Inverse,
                                    Next is A + 1,
                                    solve_aux(Next, End, K, NewAcc, Total).

solve_aux(A, End, K, Acc, Total) :- \+ is_prime(A), Next is A + 1, solve_aux(Next, End, K, Acc, Total).

solve(A, B, K, Total) :- End is A + B - 1, solve_aux(A, End, K, 0, Total).