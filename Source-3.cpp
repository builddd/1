#include<iostream>
using namespace std;
int main()
{
int a[10] = {0,1,2,3,4,5,6,7,8,9};//�}�C
int odd_number = 0;//�_���`�M
int even_number = 0;//�����`�M

int odd[10] = {};//�_�ư}�C
int o = 0;
int even[10] = {};//���ư}�C
int e = 0;

for (int i = 0; i < 10; i++)
{
	if (a[i] % 2 == 1) //�p�G�O�_��
	{
		odd_number += a[i];
		odd[o] = a[i];
		o++;
	}
	else
	{
		even_number += a[i];
		even[e] = a[i];
		e++;
	}
}

int minus = odd_number - even_number;//�_��-���ƫ᪺���G
cout << "�_���`�M=" << odd_number<<endl;
cout << "�����`�M=" << even_number <<endl;
cout << "�_���`�M - �����`�M=" << minus << endl;

cout << "�_�ƭȰ}�C=";//��X�}�C
for (int i = 0; i <o ; i++) {
	cout << odd[i]<<" ";
	}
cout << endl;

cout << "���ƭȰ}�C=";
for (int i = 0; i < e; i++) {
	cout << even[i] << " ";
}
cout << endl;
}