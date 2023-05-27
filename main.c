#include <stdio.h>

int main() {
    int n, even[30], odd[30], a=0, b=0;
    printf("nhap so phan tu cua mang ");
    scanf("%d",&n);
    int c[n];
    for (int i = 0; i < n; ++i) {
        printf("nhap so phan tu %d la:",i+1);
        scanf("%d",&c[i]);

    }
    for (int i = 0; i < n ; ++i) {
        if (c[i] % 2 == 0) {
                even[a]=c[i];
                a++;

        } else{
            odd[b]=c[i];
            b++;
        }
    }
    printf("\ncac so chan la: ");
    for (int i = 0; i <= a; ++i) {
        printf("%d\t",even[i]);
    }
    printf("\ncac so le la: ");
    for (int i = 0; i < b; ++i) {
        printf("%d\t",odd[i]);
    }
    return 0;
}
