#include <stdio.h>

int main() {
    // ประกาศตัวแปรและกำหนดค่าเริ่มต้น
    int a = 5, b = 17;
    float c = 8.5, d = 4.0;

    // 1. แสดงค่าตัวแปรทั้งหมด
    printf("1. a = %d, b = %d, c = %.1f, d = %.1f\n", a, b, c, d);
    // ไม่มี error เพราะใช้ %d กับ int และ %.1f กับ float ถูกต้อง

    // 2. d + a
    printf("2. d + a = %.1f\n", d + a);
    // float + int ได้ float เป็นผลลัพธ์ ถูกต้อง

    // 3. a - b
    printf("3. a - b = %d\n", a - b);
    // int - int ได้ผลลัพธ์เป็น int ไม่มีปัญหา

    // 4. c * d
    printf("4. c * d = %.2f\n", c * d);
    // float * float ได้ float เป็นผลลัพธ์ ถูกต้อง

    // 5. a * c
    printf("5. a * c = %.2f\n", a * c);
    // int * float ได้ float เป็นผลลัพธ์ ถูกต้อง

    // 6. c / d
    printf("6. c / d = %.2f\n", c / d);
    // float / float ได้ float เป็นผลลัพธ์ ถูกต้อง

    // 7. b / c
    printf("7. b / c = %.2f\n", b / c);
    // int / float ได้ float เป็นผลลัพธ์ ถูกต้อง

    // 8. a % b
    printf("8. a %% b = %d\n", a % b);
    // int % int ได้ int เป็นผลลัพธ์ ถูกต้อง

    // 9. (int)c % a
    printf("9. (int)c %% a = %d\n", ((int)c) % a);
    // แปลง c เป็น int แล้วใช้ % กับ a ได้ ไม่มีปัญหา

    // 10. (int)c % (int)d
    printf("10. (int)c %% (int)d = %d\n", ((int)c) % ((int)d));
    // แปลงทั้ง c และ d เป็น int แล้วใช้ % กันได้ ถูกต้อง

    return 0;
}
