#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std; 
// Dinh nghia kieu sinh vien
struct Student 
{ 
 	string	name;  	
	int 	yearOfBirth; 
 	double 	gpa; 
};  
// Ham nhap 1 sinh vien 
void inputStudent(struct Student &s) 
{   
  cout << "Name: "; getline(cin, s.name);   
  cout << "Year of birth: "; cin >> s.yearOfBirth;   
  cout << "GPA: "; cin >> s.gpa; 
} 
// Ham in 1 sinh vien 
void printStudent(struct Student s) 
{ 
	cout << "Name: " << s.name << endl;
	cout << "Year of birth: " << s.yearOfBirth << endl;
	cout << "GPA: " << s.gpa << endl; 
} 
// Ham nhap mang n sinh viên 
void inputListOfStudent(struct Student list[], int n) 
{         
	int i;         
	for(i = 0; i < n; i++)
	{
		fflush(stdin);
		inputStudent(list[i]);
	} 
} 
// Ham in mang n sinh vien 
void printListOfStudent(struct Student list[], int n) 
{         
	int i;         
	for(i = 0; i < n; i++)
		printStudent(list[i]); 
}
// Ham tim sinh vien theo ho ten  
int findStudent(struct Student list[], int n, string name) 
{ 
 	int i; 
 	for(i = 0; i < n; i++)  	   
		if(list[i].name == name) 
 	 		return i; 
 	return -1; 	 
} 

// Ham ghi mang sinh vien ra tep
void writeToFile(struct Student list[], int n, string fname)
{
	fstream out;
	out.open(fname, ios::out);
	for(int i = 0; i < n; i++)
		out << list[i].name << ", " << list[i].yearOfBirth << ", " << list[i].gpa << endl;
	out.close();	
}
int readFromFile(char *fname, struct Student list[])
{
	fstream fin;
	string s;
	int m, n, k = 0;
	fin.open(fname);
	while (getline(fin, s))
	{
		n = s.find(',');
		list[k].name = s.substr(0, n);
		m = s.find(',', n+1);
		list[k].yearOfBirth = stoi(s.substr(n+2, m-n-2));
		n = s.find(',', m+1);
		list[k].gpa = stof(s.substr(m+2, n-m-2));
		k++;
	}	
	fin.close();
	return k;
}
void writeToBinaryFile(struct Student list[], int n, char* fname)
{
	ofstream out;
	out.open(fname, ios::binary);
	//for(int i = 0; i < n; i++)
	out.write((char*)list, sizeof(list));
	out.close();	
}

int readFromBinaryFile(const char* fname, struct Student list[])
{
	ifstream fin;
	fin.open(fname, ios::in|ios::binary);
	int size;
	size = fin.tellg();
	int k=0;
	while (fin.read((char*)&list[k++], sizeof(Student)));
	fin.close();
	return k;
}
// Ham main 
int main() 
{ 
	struct Student m[2];  
	string name; 
	int k; 
 	/*
	inputListOfStudent(m, 2);  	
	printListOfStudent(m, 2); 
	fflush(stdin);
 	cout << "Input name for find: "; getline(cin, name); 
 	k = findStudent(m, 2, name);  	
	 if (k == -1) 
 	 	cout << "Not found!";  	
	else 
 	 	printStudent(m[k]);
	writeToFile(m, 2, "G:\\THC\\Bai 1\\listOfStudent.txt");
	*/
	//k = readFromFile("G:\\THC\\Bai 1\\listOfStudent.txt", m) ;
	//printListOfStudent(m, k);
	//writeToBinaryFile(m, k, "G:\\THC\\Bai 1\\listOfStudent.dat");
	k = readFromBinaryFile("G:\\THC\\Bai 1\\listOfStudent.dat", m);
	printListOfStudent(m, 2);
	cout << k;
} 

