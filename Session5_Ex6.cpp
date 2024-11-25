#include <stdio.h>
int main() {
    int choice;
    float num1, num2;
    printf("Nhap so thu nhat: ");
    scanf("%f", &num1);
    printf("Nhap so thu hai: ");
    scanf("%f", &num2);
    do {
        printf("CALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Tong: %.2f\n", num1 + num2);
                printf("\n");
                break;
            case 2:
                printf("Hieu: %.2f\n", num1 - num2);
                printf("\n");
                break;
            case 3:
                printf("Tich: %.2f\n", num1 * num2);
                printf("\n");
                break;
            case 4:
                if (num2 != 0) {
                    printf("Thuong: %.2f\n", num1 / num2);
                    printf("\n");
                } else {
                    printf("Khong the chia cho 0\n");
                    printf("\n");
                }
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le, thu lai\n");
        }
    } while (choice != 5);
    return 0;
}

