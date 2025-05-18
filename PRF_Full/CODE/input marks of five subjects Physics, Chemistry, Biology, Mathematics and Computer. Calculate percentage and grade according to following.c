// C12: Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
//Percentage >= 90% : Grade A
//Percentage >= 80% : Grade B
//Percentage >= 70% : Grade C
//Percentage >= 60% : Grade D
//Percentage >= 40% : Grade E
//Percentage < 40% : Grade F 


#include <stdio.h>

int main() {
	float Physics, Chemistry, Biology, Mathematics, Computer;
	float Percentage, Total;
	char Grade;
	printf("Enter marks of Physics, Chemistry, Biology, Mathematics and Computer: ");
	scanf("%f%f%f%f%f", &Physics, &Chemistry, &Biology, &Mathematics, &Computer);
	
	Total = Physics + Chemistry + Biology + Mathematics + Computer;
	Percentage = (Total / 500 ) * 100;
	
	if(Percentage >= 90) {
		Grade = 'A';
	}
	else if(Percentage >= 80) {
		Grade = 'B';
    }
	else if(Percentage >= 70) {
		Grade = 'C';
    }
	else if(Percentage >= 60) {
		Grade = 'D';
	}
	else if(Percentage >= 40) {
		Grade = 'E';
	}
	else {
		Grade = 'F';
	}
	printf("Total marks: %.2f\n", Total);
	printf("Percentage: %.2f%%\n", Percentage);
	printf("Grade: %c\n", Grade);
		
	return 0;
}

