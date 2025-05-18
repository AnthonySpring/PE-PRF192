#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "students.txt"

char maSV[100][10];
char tenSV[100][50];
float diem[100];
int soSV = 0;

void HienThiMenu();
void ThemSinhVienMoi();
void HienThiDanhSachSinhVien();
void TimKiemSinhVienTheoMaSo();
void TinhDiemTrungBinh();
void SapXepSinhVienGiamDanTheoDiem();
void LuuDanhSachSinhVienVaoFile();
void DocDanhSachSinhVienTuFile(); 
void XoaSinhVienTheoMaSo();
void TimSinhVienXuatSac();
void TimSinhVienQuaMon();
void PhanLoaiSinhVienTheoDiem();
void TiLeSinhVienQuaMon();
void TiLeSinhVienTachMon();
int main() 
{
    DocDanhSachSinhVienTuFile();
    HienThiMenu();
    int luaChon;
    int hopLe;
    do 
	{
        hopLe = 1; 
        printf("\nNhap lua chon cua ban: ");
        if (scanf("%d", &luaChon) != 1) 
		{
            hopLe = 0; 
        }
        while (getchar() != '\n'); 

        if (hopLe) 
		{
        	
            switch (luaChon) 
			{
                case 1: 
				ThemSinhVienMoi(); 
				break;
                case 2: 
				HienThiDanhSachSinhVien(); 
				break;
                case 3: 
				TimKiemSinhVienTheoMaSo(); 
				break;
                case 4: 
				TinhDiemTrungBinh(); 
				break;
                case 5: 
				SapXepSinhVienGiamDanTheoDiem(); 
				break;
                case 6: 
				LuuDanhSachSinhVienVaoFile(); 
				break;
				case 7:
				XoaSinhVienTheoMaSo();
				break; 
				case 8:
				TimSinhVienXuatSac();
				break;
				case 9:
				TimSinhVienQuaMon();
				break;
				case 10:
				PhanLoaiSinhVienTheoDiem();
				break;
				case 11:
				TiLeSinhVienQuaMon();
				break;
				case 12:
				TiLeSinhVienTachMon();
				break;
                case 0: 
				printf("Thoat chuong trinh\n"); 
				break;
                default: 
                hopLe = 0;             
			}
		}	 
		else
			{
            	printf("Lua chon khong hop le. Vui long nhap lai!\n");
			}
	} 
	while (luaChon != 0);
    return 0;
}
//ham menu
void HienThiMenu() 
{
    printf("------- MENU -------\n");
    printf("1. Them sinh vien moi\n");
    printf("2. Hien thi danh sach sinh vien\n");
    printf("3. Tim kiem sinh vien theo ma so\n");
    printf("4. Tinh diem trung binh\n");
    printf("5. Sap xep sinh vien giam dan theo diem\n");
    printf("6. Luu danh sach sinh vien vao file\n");
    printf("7. Xoa sinh vien theo ma so\n");
    printf("8.Tim sinh vien xuat sac\n");
    printf("9.Tim sinh vien qua mon\n");
    printf("10. Phan loai sinh vien theo diem(Gioi,Kha,TB)\n");
    printf("11. Ti le sinh vien qua mon\n");
    printf("12. Ti le sinh vien tach mon\n");
    printf("0. Thoat chuong trinh\n");
    printf("--------------------\n");
}
//doc danh sach sinh vien
void DocDanhSachSinhVienTuFile() 
{
    FILE *file = fopen(FILE_NAME, "r");
    if (file == NULL) 
	{
        printf("Khong the mo file hoac file khong ton tai.\n");
        return;
    }

    char buffer[100];
    while(fgets(buffer, 100, file) != NULL) 
	{
        char *token = strtok(buffer, ",");
        if (token != NULL) 
		{
            strcpy(maSV[soSV], token); 
            token = strtok(NULL, ",");
            if (token != NULL) 
			{
                strcpy(tenSV[soSV], token);
                token = strtok(NULL, ",");
                if (token != NULL) 
				{
                    diem[soSV] = atof(token);
                    soSV++;
                }
            }
        }
    }
    fclose(file);
}

//them sinh vien moi
void ThemSinhVienMoi() 
{
    if (soSV >= 100) 
	{
        printf("Khong the them sinh vien moi vi da toi gioi han toi da.\n");
        return;
    }

    printf("Nhap ma so sinh vien: ");
    scanf("%9s", maSV[soSV]);
    while(getchar() != '\n');

    printf("Nhap ten sinh vien: ");
    scanf(" %49[^\n]", tenSV[soSV]);
    while(getchar() != '\n');

    printf("Nhap diem sinh vien: ");
    scanf(" %f", &diem[soSV]);
    while(getchar() != '\n');

    soSV++;
    printf("Sinh vien moi da duoc them vao danh sach.\n");
}

//danh sach sinh vien
void HienThiDanhSachSinhVien() 
{
    if (soSV == 0) 
	{
        printf("Danh sach sinh vien trong.\n");
        return;
    }

    printf("Danh sach sinh vien:\n");
    printf("%-10s %-20s %-10s\n", "Ma SV", "Ten", "Diem");
 	int i;
    for (i = 0; i < soSV; i++) 
	{
    	printf("%-8s %-20s %-10.2f\n", maSV[i], tenSV[i], diem[i]);
    }
}
//tim sinh vien theo ma so
void TimKiemSinhVienTheoMaSo() 
{
    char maSo[10];
    printf("Nhap ma so sinh vien can tim: ");
    scanf("%9s", maSo);
    while(getchar() != '\n');
    
	int i;
    int found = 0;
    for (i = 0; i < soSV; i++) 
	{
        if (strcmp(maSV[i], maSo) == 0) 
		{
            printf("Sinh vien tim thay:\n");
            printf("Ma sinh vien: %-10s\n", maSV[i]);
            printf("Ten sinh vien: %-30s\n", tenSV[i]);
            printf("Diem sinh vien: %-10.2f\n", diem[i]);
            found = 1;
            break;
        }
    }
    if (!found) 
	{
        printf("Khong tim thay sinh vien voi ma so %s.\n", maSo);
    }
}

//tinh diem trung binh
void TinhDiemTrungBinh() 
{
    if (soSV == 0) 
	{
        printf("Khong co sinh vien nao trong danh sach.\n");
        return;
    }
    
	int i;
    float tongDiem = 0;
    for (i = 0; i < soSV; i++) 
	{
        tongDiem += diem[i];
    }
    float diemTrungBinh = tongDiem / soSV;
    printf("Diem trung binh cua sinh vien la: %.2f\n", diemTrungBinh);
}

int compare(const void *a, const void *b) 
{
    float fa = *(const float*) a;
    float fb = *(const float*) b;
    return (fa < fb) - (fa > fb);
}

//sap xep sinh vien giam dan theo so diem
void SapXepSinhVienGiamDanTheoDiem() 
{
	int i,j;
    for (i = 0; i < soSV - 1; i++) 
	{
        for (j = i + 1; j < soSV; j++) 
		{
            if (diem[i] < diem[j]) 
			{
                float tempDiem = diem[i];
                diem[i] = diem[j];
                diem[j] = tempDiem;
                
                char tempID[10];
				strcpy(tempID, maSV[i]);
				strcpy(maSV[i], maSV[j]);
				strcpy(maSV[j], tempID);

                
                char tempName[50];
                strcpy(tempName, tenSV[i]);
                strcpy(tenSV[i], tenSV[j]);
                strcpy(tenSV[j], tempName);
            }
        }
    }
    printf("Danh sach sinh vien da duoc sap xep giam dan theo diem.\n");
}

//luu danh sach sinh vien
void LuuDanhSachSinhVienVaoFile() 
{
    FILE *file = fopen(FILE_NAME, "w");
    if (file == NULL) 
	{
        printf("Khong the mo file de ghi.\n");
        return;
    }
	int i;
    for (i = 0; i < soSV; i++) 
	{
        fprintf(file, "%s, %s, %.2f\n", maSV[i], tenSV[i], diem[i]);  
    
    }
    fclose(file);
    printf("Danh sach sinh vien da duoc luu vao file 'students.txt'!");
}
void XoaSinhVienTheoMaSo() {
    char maSo[10];
    printf("Nhap ma so sinh vien can xoa: ");
    scanf("%9s", maSo);
    while(getchar() != '\n');

    int i, found = -1;
    for (i = 0; i < soSV; i++) {
        if (strcmp(maSV[i], maSo) == 0) {
            found = i;
            break;
        }
    }

    if (found >= 0) {
        for (i = found; i < soSV - 1; i++) {
            strcpy(maSV[i], maSV[i+1]);
            strcpy(tenSV[i], tenSV[i+1]);
            diem[i] = diem[i+1];
        }
        soSV--;
        printf("Sinh vien voi ma so %s da duoc xoa.\n", maSo);
    } else {
        printf("Khong tim thay sinh vien voi ma so %s.\n", maSo);
    }
}
void TimSinhVienXuatSac() {
    printf("Danh sach sinh vien xuat sac:\n");
    printf("%-10s %-20s %-10s\n", "Ma SV", "Ten", "Diem");

    int i;
    for (i = 0; i < soSV; i++) {
        if (diem[i] >= 9) {
            printf("%-8s %-20s %-10.2f\n", maSV[i], tenSV[i], diem[i]);
        }
    }
}
void TimSinhVienQuaMon() {
    printf("Danh sach sinh vien qua mon:\n");
    printf("%-10s %-20s %-10s\n", "Ma SV", "Ten", "Diem");

    int i;
    for (i = 0; i < soSV; i++) {
        if (diem[i] >= 5) {
            printf("%-8s %-20s %-10.2f\n", maSV[i], tenSV[i], diem[i]);
        }
    }
}

//11. Phan loai sinh vien theo diem
void PhanLoaiSinhVienTheoDiem() {
    int i;
    printf("Phan loai sinh vien theo diem:\n");
    for (i = 0; i < soSV; i++) {
        printf("Ma SV: %-10s, Ten: %-20s, Diem: %-10.2f, Phan loai: ", maSV[i], tenSV[i], diem[i]);
        if (diem[i] >= 8.5) {
            printf("Gioi\n");
        } else if (diem[i] >= 6.5) {
            printf("Kha\n");
        } else {
            printf("Trung binh\n");
        }
    }
}

//12. Ti le sinh vien qua mon
void TiLeSinhVienQuaMon() {
    int i, count = 0;
    for (i = 0; i < soSV; i++) {
        if (diem[i] >= 5) {
            count++;
        }
    }
    float TiLeSinhVienQuaMon = (float)count / soSV * 100;
    printf("Ti le sinh vien qua mon: %.2f%%\n", TiLeSinhVienQuaMon);
}

//13. Ti le sinh vien tach mon
void TiLeSinhVienTachMon() {
    int i, count = 0;
    for (i = 0; i < soSV; i++) {
        if (diem[i] < 5) {
            count++;
        }
    }
    float tiLeTachMon = (float)count / soSV * 100;
    printf("Ti le sinh vien tach mon: %.2f%%\n", tiLeTachMon);
}


