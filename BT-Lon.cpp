// BAI 1: QUAN LY MUON SACH THU VIEN
#include<iostream>
#include<algorithm>
using namespace std;
class BanDoc
{
	public:
		string maBD;
		string HoTen;
		string DiaChi;
		string LoaiBD;		
};
class Sach
{
	public:
		string maSach;
		string TenSach;
		string TacGia;
		string Gia;
		int NamXB; 		
};

void nhapSach(Sach *l,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"\nnhap sach thu "<<i+1<<endl;
        cout<<"Ten Sach: ";
		fflush(stdin);
		getline(cin,l[i].TenSach);
        cout<<"Ten Tac Gia : ";
		fflush(stdin);
		getline(cin,l[i].TacGia);
		cout<<"Gia Ban : ";
		fflush(stdin);
		getline(cin,l[i].Gia);
        cout<<"Nam XB : ";
		cin>>l[i].NamXB;
		cout<<"Ma Sach : ";
		fflush(stdin);
        getline(cin,l[i].maSach);
    }
}
void hienThiThongTinSach(const Sach *l, int n)
{
    cout << "\n-------Danh sach sach-------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Ma Sach: " << l[i].maSach << ", ";
        cout << "Ten sach: " << l[i].TenSach << ", ";
        cout << "Tac gia: " << l[i].TacGia << ", ";
        cout << "Gia Ban: " << l[i].Gia << ", ";
        cout << "Nam XB: " << l[i].NamXB << ".\n";
        
    }
}
void nhapBanDoc(BanDoc *h,int x)
{
    for(int i=0;i<x;i++)
    {
        cout<<"\nBan Doc thu "<<i+1<<endl;
        cout<<"Ho Ten : ";
		fflush(stdin);
		getline(cin,h[i].HoTen);
        cout<<"Dia chi : ";
		fflush(stdin);
		getline(cin,h[i].DiaChi);
		cout<<"Loai ban doc : ";
		fflush(stdin);
		getline(cin,h[i].LoaiBD);
        cout<<"Ma ban doc : ";
        fflush(stdin);
        getline(cin,h[i].maBD);
    }
}
void hienThiThongTinBanDoc(const BanDoc *h, int x)
{
    cout << "\n-------Danh sach Ban doc-------\n";
    for (int i = 0; i < x; i++)
    {
        cout << "Ma Ban Doc: " << h[i].maBD << ", ";
		cout << "Ho Ten: " << h[i].HoTen << ", ";
        cout << "Dia Chi: " << h[i].DiaChi << ", ";
        cout << "Loai Ban Doc: " << h[i].LoaiBD << ".\n";
    }
}

int main()
{
    Sach l[100];
    BanDoc h[100];
   
    int n;
    cout<<"nhap so loai sach:";
	cin>>n;
    nhapSach(l,n);
    int x;
    cout<<"\nnhap so ban doc:";
	cin>>x;
	nhapBanDoc(h,x);
    hienThiThongTinSach(l, n);
    hienThiThongTinBanDoc(h,x);
    return 0;
}

