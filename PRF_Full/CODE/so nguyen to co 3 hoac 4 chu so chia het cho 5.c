//so nguyen to co 3 hoac 4 chu so chia het cho 5  

int checkPrime(int m){
	int i;
	if (m<=1) return 0;
	for (i=2; i*i <= m; i++)
	{	if (m%i == 0) return 0;
	}
	return 1; }
	int tong(int n){
		int sum=0;
		int k=0;
		while (n!=0){
		k = n%10;
		sum = sum +k;
		n = n/10;
	} return sum; }
main(){
	int n,i;
	printf("nhap n ");
	scanf("%d", &n);
	for (i=100; i<n; i++){   
	if (tong(i)% 5 == 0){
		if (checkPrime(i)==1){
			printf("%d ", i);
		}
	}
}
}
