#include <stdio.h>// Chu The Duc HE194064
#include <string.h>
struct Employee {
    char code[9];   
    char name[21]; 
    double salary;
    double allowance;
};
void addEmployee(struct Employee employees[], int *count) {
	printf("Enter code: ");
    scanf("%s", employees[*count].code);
    printf("Enter name: ");
    scanf("%s", employees[*count].name);
    printf("Enter salary: ");
    scanf("%lf", &employees[*count].salary);
    printf("Enter allowance: ");
    scanf("%lf", &employees[*count].allowance);
    
    (*count)++;
}
void findEmployee(struct Employee employees[],int count,const char *name){
	printf("Employees with name '%s':\n", name);
	int i;
	for(i=0;i<count;i++){
		if(strcmp(employees[i].name,name)==0){
			printf("Code: %s, Name: %s, Salary: %.2f, Allowance: %.2f\n",  employees[i].code, employees[i].name, employees[i].salary, employees[i].allowance);	
		return;
	}
	}
	printf("Employee with name '%s' not found.\n",name);
}
void removeEmployee(struct Employee employees[],int *count,const char *code){
   int i,j;
   for(i=0;i<*count;i++){
   	if(strcmp(employees[i].code,code)==0){
   		for(j=i;j<*count-1;j++){
   			employees[j]=employees[j+1];
		   }
		   (*count)--;
		   printf("Employee with code '%s' removed.\n",code);
		   return;
	   }
   }
   printf("Employee with code '%s' not found.\n", code);
}
void sortEmployees(struct Employee employees[], int count) {
	int i,j;
    for ( i = 0; i < count - 1; i++) {
        for ( j = 0; j < count - i - 1; j++) {
            double sum1 = employees[j].salary + employees[j].allowance;
            double sum2 = employees[j + 1].salary + employees[j + 1].allowance;
            if (sum1 < sum2) {
                struct Employee temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }
}
void printEmployees(struct Employee employees[],int count){
	printf("Employees sorted by salary + allowance in descending order:\n");
	int i;
	for(i=0;i<count;i++){
		printf("Code: %s, Name: %s, Salary: %.2f, Allowance: %.2f\n",employees[i].code, employees[i].name, employees[i].salary, employees[i].allowance);				
	}
}
int main(){
	struct Employee employees[100];
	int count = 0;
	int choice;
	char name[21];
	char code[9];
	do{
		printf("\n1.Add Employees\n2.Find Employee by Name: \n3.Remove Employee by Code: \n4.Print Employees Sorted by Salary+Allowance: \n5.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				addEmployee(employees,&count);
				break;
			case 2:
				printf("Enter name: ");
				scanf("%s",name);
				findEmployee(employees,count,name);
				break;
			case 3:
				printf("Enter code to remove: ");
                scanf("%s", code);
                removeEmployee(employees, &count, code);
                break;
            case 4:
            	sortEmployees(employees, count);
                printEmployees(employees, count);
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
            	printf("Invalid choice. Please try again.\n");
		}
	}while(choice!=5);
	return 0;
}

