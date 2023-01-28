#include <iostream>
using namespace std;

//Ham nhap mang n so nguyen 

void inputArr(int a[], int n) 
{  
 	for(int i = 0; i < n; i++)  
 	{ 
  		cout << "Nhap so thu " << i << ": " ; 
		cin >> a[i]; 
	}
}	 

//Ham in mang n so nguyen

void outputArr(int a[], int n) 
{ 
	for(int i = 0; i < n; i++) 
		cout << a[i] << " ";
	cout << endl;  
} 

// Ham tim so lon nhat cua mang a co n so 

int maxArr(int a[], int n) 
{ 
 	int i, max; 
 	max = a[0]; 
	for(i = 1; i < n; i++)  	
		if(max < a[i]) max = a[i]; 
	return max; 
} 

int evenArr(int a[], int n, int b[]) 
{ 
 	int i, k;  	
	k=0; 
 	for(i = 0; i < n; i++) 
 	 	if(a[i]%2 == 0) 
 	 	{ 
 	 	 	b[k] = a[i];  
			k++; 
		}		 
 	return k; 
} 


// Ham main

int main()
{
	int x[10], m;
	inputArr(x, 5);
	cout << "Mang da nhap: "; 
	outputArr(x, 5);
	m = maxArr(x, 5);
	cout << "So lon nhat cua mang la: " << m << endl;
	
	int y[10], n;
	n = evenArr(x, 5, y);
	cout << "Mang cac so chan gom " << n << " so: ";
	outputArr(y, n);
	return 0;
}
