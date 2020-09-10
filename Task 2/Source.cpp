#include<iostream>
#include<fstream>
using namespace std;

void Show(int Entries, int Arr[])
{
	for (size_t i = 0; i < Entries; i++)
	{
		cout << Arr[i] << '\t';
		if (!(i % 10))
			cout << endl;
	}
 }
void readFromFile(char FileName[], int storage[], int &noOFEn)
{
	ifstream take(FileName);

	take >> noOFEn;
	for (int i = 0; i < noOFEn; i++) {
		take >> storage[i];
	}

}
int main()
{
	int count, stor[100];
	char filename[10] = { "Mahmoud.txt" };
	readFromFile(filename, stor, count);
	Show (count, stor);
	system("pause");
	return 0;

}