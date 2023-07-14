
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
 
void replowcase(char *str)
{
	int length = strlen(str);
	int i;
	bool isSpace = false;
	for (i = 0; i < length; i++)
	{
		// the first character of string
		if (i == 0 && str[i] != ' ' && str[i] != '\t')
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] = str[i] - 32;
			}
		}
		if (str[i] == ' ' || str[i] == '\t')
		{
			isSpace = true;
		}
		else if (isSpace)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
			str[i] = str[i] - 32;
			}
			isSpace = false;
		}
	}
}

int main(){
    cout << "Nhap do dai chuoi: ";
    int length;
    cin >> length;    

    char result[length + 1];
    srand(time(NULL));
 
    rand_text(length, result);
    cout << result<<endl;
    replowcase(result);
    cout<<result;
}