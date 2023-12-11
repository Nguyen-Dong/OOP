#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include"HamPhu.cpp"
#include"Sach.cpp"
#include"BanDoc.cpp"
#include"date.cpp"
#include"MuonSach.cpp"


void ThemSach(vector<Sach> &sachList)
{
	int sls;
    cout << "Nhap so luong sach: ";
    cin >> sls;
    cin.ignore();
    for (int i = 0; i <sls; i++) 
	{
		cout << "Sach thu " << i+1 << " : " << endl;
		Sach temp;
        temp.nhapSach();
        sachList.push_back(temp);
    }
}
void HienThiSach(vector<Sach> sachList)
{
    taokhungchobangsach();
    for (int i = 0; i < sachList.size(); i++) 
	{
        sachList[i].hienThiThongTinSach();
    }
}

void ThemBanDoc(vector<BanDoc> &banDocList)
{
	int slb;
    cout << "Nhap so luong ban doc: ";
    cin >> slb;
    cin.ignore();
    for (int i = 0; i <slb; i++) 
	{
		cout << "Ban Doc thu " << i+1 << " : " << endl;
		BanDoc temp;
		temp.nhapBanDoc();
        banDocList.push_back(temp);
        int k;
        cout<< "m co muon muon sach k:";
        if(k == 1)
        {
        	HienThiSach.sachList[i].hienthiThongTinSach();
        	BangQLMuonSach l;
        	l.NhapNgayMuon();
        	l.NhapNgayTra();
		}
    }
}
void HienThiBanDoc(vector<BanDoc> banDocList)
{
	taokhungchobangbandoc();
    for (int i = 0; i < banDocList.size(); i++) 
	{
        banDocList[i].hienThiThongTinBanDoc();
    }
}
void NhapBangMuonSach(vector<BangQLMuonSach> &muonsachList)
{
	cout << muonsachList.size();
	for(int i = 0; i < muonsachList.size(); i++)
}
int Sach::nextmaSach = 10000;
int BanDoc::nextmaBD = 20000;
int main()
{
	vector<Sach> sachList(0);
	vector<BanDoc> banDocList(0);
	vector<BangQLMuonSach> muonsachList(0);
	
	// them sach moi
	int n;
	do
	{
		cout<<"--------chon chuc nang---------\n";
		cout<<"0. Thoat\n";
		cout<<"1. Them sach moi\n";
		cout<<"2. Them ban doc\n";
		cout<<"3. Hien thi sach\n";
		cout<<"4. Hien thi ban doc\n";
		cout<<"5. Nhap thong tin vao bang muon sach\n";
		cout<<"Hay chon chuc nang ban muon: ";
		cin>>n;
		switch(n)
		{
			case 1: 
				ThemSach(sachList);
				break;
			case 2:
				ThemBanDoc(banDocList);
				break;
			case 3:
				HienThiSach(sachList);
				break;
			case 4:
				HienThiBanDoc(banDocList);
				break;
			case 5:
				NhapBangMuonSach(muonsachList);
				break;
				
		}	
	}while(n!=0);
	system("pause");
    return 0;
}
