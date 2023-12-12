#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include"HamPhu.cpp"
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

void ThemBanDoc(vector<BanDoc> &banDocList, vector<Sach> &sachList, vector<BangQLMuonSach> &muonsachList)
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
        BangQLMuonSach l;
        int k;
	    cout<< "Ban co muon muon sach k(1. co, 2. khong):";
	    cin>>k;
	    if(k == 1)
	        {
	        	taokhungchoBDmuonSach();
	        	for (int j = 0; j < sachList.size(); j++) 
				{
			        cout << setw(20) << left << sachList[j].getMaSach() << setw(20) << left << sachList[j].getTenSach();
					cout << setw(20) << left << sachList[j].getGia() <<"\n";
			    }
			    int ms;
			    cout<< "nhap STT:";
			    cin>>ms;
			    muonsachList[i].setSach(sachList[ms]);
	        	muonsachList[i].NhapNgayMuon();
	        	muonsachList[i].NhapNgayTra();
			}
		else
			continue;
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
void HienThiBangMuonSach(vector<BangQLMuonSach> &muonsachList)
{
	for(int i = 0; i < muonsachList.size(); i++)
	{
		muonsachList[i].hienThiThongTinMuonSach();
	}
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
				ThemBanDoc(banDocList, sachList, muonsachList);
				break;
			case 3:
				HienThiSach(sachList);
				break;
			case 4:
				HienThiBanDoc(banDocList);
				break;
			case 5:
				HienThiBangMuonSach(muonsachList);
				break;
				
		}	
	}while(n!=0);
	system("pause");
    return 0;
}
