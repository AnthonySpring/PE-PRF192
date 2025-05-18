// 9: Write a C program to calculate the Taxi fee with the number of km entering from keyboard, where: The first km : $9, From 2km to 5km: $5/km, From 6km to 19km: $3/km, From 20km: $2/km

#include <stdio.h>

int main() {
	float km, Taxi_fee;
	printf("Enter number_of_km: ");
	scanf("%1f", &km);
	
	if(km == 1) {
		Taxi_fee = 9;
	}
	if(km >= 2 || km <= 5) {
		Taxi_fee = 9 + (km - 1) * 5;
	}
	if(km >= 6 || km <= 19 ) {
		Taxi_fee = 9 + 4 * 5 + (km-5) * 3;
	}
	if(km >= 20) {
		Taxi_fee = 9 + 4 * 5 + 14 * 3 + (km-19) *2;
	}
	printf("Total taxi fee for %1f km is $%2f", km, Taxi_fee);
}
