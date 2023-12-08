#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include"Sach.cpp"
#include"BanDoc.cpp"
#include"MuonSach.cpp"


void ThemSach(vector<Sach> &sachList)
{
	int sls;
    cout << "Nhap so luong sach: ";
    cin >> sls;
    cin.ignore();

    for (int i = 0; i <sls; i++) 
	{
		Sach temp;
        temp.nhapSach();
        sachList.push_back(temp);
    }
}
void HienThiSach(vector<Sach> sachList)
{
	
    cout << "\n-------Danh sach sach-------\n";
    for (int i = 0; i < sachList.size(); i++) {
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
		BanDoc temp;
		temp.nhapBanDoc();
        banDocList.push_back(temp);
    }
}
void HienThiBanDoc(vector<BanDoc> banDocList)
{
	
	cout << "\n-------Danh sach ban doc-------\n";
    for (int i = 0; i < banDocList.size(); i++) {
        banDocList[i].hienThiThongTinBanDoc();
    }
}
int main()
{
	vector<Sach> sachList(0);
	vector<BanDoc> banDocList(0);
	
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
		}	
	}while(n!=0);
    
    //vector<BangQLMuonSach> muonSachList(slk);
    
    

    return 0;
}
