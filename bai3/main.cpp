#include <iostream>
using namespace std;

const int minYear = 1900, maxYear = 10000;
int songay;
int KiemTraNamNhuan(int nam)
{
        return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}
void TimSoNgayTrongThang(int thang, int nam)
{
    switch(thang)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        songay=31;
        break;
    case 4: case 6: case 9 : case 11:
        songay=30;
        break;
    case 2:
        int Check = KiemTraNamNhuan(nam);
        if(Check == 1)
        {
            songay=29;
        }
        else
        {
            songay=28;
        }
    }
}

int main()
{
    int Thang, Nam;
    cin>>Thang;
   	cin>>Nam;
    if ((Thang < 1 || Thang > 12)||(Nam < minYear || Nam > maxYear)) songay = -1;
	else TimSoNgayTrongThang(Thang, Nam);
	cout<<songay;
    return 0;
}
