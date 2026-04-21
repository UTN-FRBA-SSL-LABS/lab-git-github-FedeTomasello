#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(const a, const b)
{
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b)
{
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
// A partir de dos numeros enteros, la funcion retornara la multiplicacion de los mismos.
int multiplicar(int a, int b)
{
    return a * b;
}

int esPar(int n)
{
    return (n % 2) == 0;
}
