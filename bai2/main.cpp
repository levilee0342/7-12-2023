#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
#include <iostream>
using namespace std;
void nhap (int a[], int &n)
{
    do
    {
        cin>>n;
    }while(n <= 0 || n > MAX);
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}

void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
}

void HoanVi(int &a, int &b)
{
    int tam = a;
    a = b;
    b = tam;
}

void DaoMang(int a[], int n)
{
    for(int i = 0, j = n - 1; i < j; i++, j--)
    {
        HoanVi(a[i], a[j]);
    }
}
int main()
{
    int n;
    int a[MAX];
    nhap(a, n);
    DaoMang(a, n);
    xuat(a, n);
    return 0;
}