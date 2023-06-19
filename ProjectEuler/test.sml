fun isPrime(n: int): bool =
    let
        fun isDivisible(x: int, y: int): bool =
            x mod y = 0
    in
        if n < 2 then false
        else not (List.exists (fn i => isDivisible(n,i)) (List.tabulate (n - 2, fn i => i + 2)))
    end;

fun invertMod(n: int, p: int): int option =
    let
        fun loop(i: int): int option =
            if i >= p then NONE
            else if (n * i) mod p = 1 then SOME i
            else loop(i + 1)
    in
        loop 1
    end;

fun solve(a: int, b: int, k: int): int =
    let
        fun aux(p: int, total: int): int =
            if p >= a + b then total
            else if isPrime p then
                case invertMod(k - 1, p) of
                    SOME inverse => aux(p + 1, total + inverse)
                  | NONE => aux(p + 1, total)
            else
                aux(p + 1, total)
    in
        aux(a,0)
    end;
