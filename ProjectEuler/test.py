# como descrito no enunciado, tem que calcular a soma de todos
# os d(p,n,k), que é a soma dos inversos multiplicativos de n mod p
# e fazer isso para todo k até n. 
# Nos 3 codigos são criadas funções auxiliares para calcular se um 
# número é primo e para calcular o inverso multiplicativo.

import math

def is_prime(n):
    if n < 2:
        return False
    # se nao for encontrado nenhum divisor menor que a raiz do numero, 
    # entao não há nenhum outro divisor alem de 1 e ele mesmo
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

def invert_mod(n, p):
    for i in range(1, p):
        if (n * i) % p == 1:
            return i
    return None

def solve(a, b, k):
    total = 0
    for p in range(a, a + b):
        if is_prime(p):
            inverse = invert_mod(k - 1, p)
            if inverse is not None:
                total += inverse
    return total
    
print(solve(10**9, 10**5, 10**5))