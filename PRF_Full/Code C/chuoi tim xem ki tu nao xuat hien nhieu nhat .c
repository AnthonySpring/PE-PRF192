#include <stdio.h>
#include <string.h>

char tim_ky_tu_nhieu_nhat(char *chuoi) {
	int i;
    int dem[256] = {0}; // M?ng d?m t?n su?t xu?t hi?n c?a t?ng k� t? trong chu?i
    int max = 0; // Bi?n luu s? l?n xu?t hi?n nhi?u nh?t c?a m?t k� t?
    char ky_tu_max; // Bi?n luu k� t? xu?t hi?n nhi?u nh?t

    // Duy?t qua chu?i v� d?m t?n su?t xu?t hi?n c?a t?ng k� t?
    for (i = 0; i < strlen(chuoi); i++) {
        dem[(int)chuoi[i]]++;
    }

    // T�m k� t? xu?t hi?n nhi?u nh?t
    for (i = 0; i < 256; i++) {
        if (dem[i] > max) {
            max = dem[i];
            ky_tu_max = (char)i;
        }
    }

    return ky_tu_max;
}

int main() {
    char chuoi[1000];

    printf("Nh?p chu?i: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0'; // Lo?i b? k� t? xu?ng d�ng n?u c�

    char ky_tu_nhieu_nhat = tim_ky_tu_nhieu_nhat(chuoi);

    printf("K� t? xu?t hi?n nhi?u nh?t trong chu?i l�: %c\n", ky_tu_nhieu_nhat);

    return 0;
}

