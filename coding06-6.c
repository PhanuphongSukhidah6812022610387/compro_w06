#include <stdio.h>

int main() {
    // กำหนดค่าตัวแปรเริ่มต้น
    int a = 5, b = 2;
    float x = 3.0, y = 4.5;
    // 1. int r1 = a++ * b + (int)y % 3;
    // a++ = 5 (ใช้ค่าก่อนเพิ่ม), b=2, (int)y=4, 4%3 = 1
    // r1 = 5*2 + 1 = 10 + 1 = 11, แล้วค่อยเพิ่ม a เป็น 6
    int r1 = a++ * b + (int)y % 3;
    // 2. int r2 = (a > b) && ((int)x / b < 2);
    // (a > b) = true (6 > 2)
    // ((int)x / b) = 3 / 2 = 1 < 2 → true
    // r2 = true && true = true (1)
    int r2 = (a > b) && ((int)x / b < 2);
    // 3. float r3 = ++x * y - a / 2;
    // ++x = 4.0 (เพิ่มก่อนใช้), y = 4.5, a = 6
    // r3 = 4.0 * 4.5 - 6 / 2 = 18.0 - 3 = 15.0
    float r3 = ++x * y - a / 2;
    // 4. float r4 = ((x += 1.5) > y) || (b-- > 0);
    // x = 4.0, b = 2
    // x += 1.5 → x = 5.5
    // (x > y) → 5.5 > 4.5 = true
    // (b-- > 0) ไม่ถูกตรวจเพราะ OR short-circuit (เจอ true แล้วพอเลย)
    // r4 = true (1), b ลดเหลือ 1 หลังจากนี้
    float r4 = ((x += 1.5) > y) || (b-- > 0);
    // แสดงผลลัพธ์ (float แสดงทศนิยม 2 ตำแหน่ง)
    printf("r1 = %d\n", r1);
    printf("r2 = %d\n", r2);
    printf("r3 = %.2f\n", r3);
    printf("r4 = %.2f\n", r4);  // true/false แสดงเป็น 1 หรือ 0
    // แสดงค่าตัวแปรหลังเปลี่ยนค่าจาก post/pre increment/decrement
    printf("a = %d, b = %d, x = %.2f, y = %.2f\n", a, b, x, y);

    return 0;
}
