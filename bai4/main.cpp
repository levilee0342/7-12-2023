
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cstring>
using namespace std;

void rand_text(int length, char *result) {
    int i, rand_int;
    char char_set[] = "01234 56789 ABCDEF GHIJKL MNOPQRST UVWXYZ abcdef ghijklm nopqrstu vwxyz & quot ";
 
    for (i = 0; i <length; i++) {
        result[i] = char_set[rand() % sizeof(char_set)];
    }
    result[length] = 0;
}
 
int CountWord(char *str)
{
	int count = 0;
	int length = strlen(str);
	int i;
	bool isSpace = false;
	for (i = 0; i < length; i++)
	{
		if (i == 0 && str[i] != ' ' && str[i] != '\t')
		{
			count++;
		}
		if (str[i] == ' ' || str[i] == '\t')
		{
			isSpace = true;
		}
		else if (isSpace)
		{
			count++;
			isSpace = false;
		}
	}
	return count;
}

int main(){
    cout << "Nhap do dai chuoi: ";
    int length;
    cin >> length;    

    char result[length + 1];
    srand(time(NULL));
 
    rand_text(length, result);
    cout << result<<endl;
    cout<<CountWord(result);
}