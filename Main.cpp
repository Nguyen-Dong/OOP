#include<iostream>
#include<algorithm>
using namespace std;
#include"Sach.cpp"
#include"BanDoc.cpp"


int main()
{
	int sls;
	cout<<"Nhap so luong sach: ";
	cin>>sls;
	Sach *s = new Sach[sls];
	for(int i=0;i<sls;i++)
	{
		s[i].nhapSach();
	}
	int slk;
	cout<<"Nhap so luong ban doc: ";
	cin>>slk;
	BanDoc *banDoc = new BanDoc[slk];
	for (int i=0;i<slk;i++)
	{
		banDoc[i].nhapBanDoc();
	}
	cout << "\n-------Danh sach sach-------\n";
	for(int i=0;i<sls;i++)
	{
		s[i].hienThiThongTinSach();
	}
	cout << "\n-------Danh sach Ban doc-------\n";
	for(int i=0;i<slk;i++)
	{
		banDoc[i].hienThiThongTinBanDoc();
	}
}
