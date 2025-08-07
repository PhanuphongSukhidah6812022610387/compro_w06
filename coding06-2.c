#include <stdio.h>

int main() {
    // ตัวแปรจำนวนเต็ม
    int i = 1, j = 2, k;

    // ตัวแปรทศนิยม
    double x = 1.0, y = 2.0, z;

    // ------------------ ตาราง i, j, k ------------------
    printf("+----+---+---+---+\n");
    printf("| Ln | i | j | k |\n");
    printf("+----+---+---+---+\n");

    printf("|  1 | %d | %d |   |\n", i, j);          // Line 1

    k = i + j;
    printf("|  2 | %d | %d | %d |\n", i, j, k);      // Line 2

    i = i * (k + j);
    printf("|  3 | %d | %d | %d |\n", i, j, k);      // Line 3

    j = j / 2;
    printf("|  4 | %d | %d | %d |\n", i, j, k);      // Line 4

    k = i % 2;
    printf("|  5 | %d | %d | %d |\n", i, j, k);      // Line 5

    i = k - j;
    printf("|  6 | %d | %d | %d |\n", i, j, k);      // Line 6

    printf("+----+---+---+---+\n\n");

    // ------------------ ตาราง x, y, z ------------------
    // เซ็ตค่าตัวแปรเริ่มต้นใหม่ให้เหมือนกับกระบวนการจริง
    i = 1; j = 2; k = i + j;
    x = 1.0; y = 2.0;

    printf("+----+-----+-----+--------+\n");
    printf("| Ln |  x  |  y  |   z    |\n");
    printf("+----+-----+-----+--------+\n");

    printf("|  1 | %.1f | %.1f |        |\n", x, y);        // Line 1

    x = x + 5.0;
    printf("|  2 | %.1f | %.1f |        |\n", x, y);        // Line 2

    y = x / 2.0;
    printf("|  3 | %.1f | %.1f |        |\n", x, y);        // Line 3

    z = (x * 3.0) + 4.0;
    printf("|  4 | %.1f | %.1f | %.1f |\n", x, y, z);      // Line 4

    x = -0.5 * y;
    printf("|  5 | %.1f | %.1f | %.1f |\n", x, y, z);      // Line 5

    z = x * y * z;
    printf("|  6 | %.1f | %.1f | %.1f |\n", x, y, z);      // Line 6

    printf("+----+-----+-----+--------+\n");

    return 0;
}
