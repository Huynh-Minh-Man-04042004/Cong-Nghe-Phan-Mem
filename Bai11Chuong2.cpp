#include<iostream>
#include<string.h>
#define SIZE 100
using namespace std;
void nhap(char A[], char B[]);
void xuat(char C[]);
void tinhtong(char A[], char B[], char C[]);
void chuanhoadodai(char A[], char B[]);
void thaydoi(char A[], int x);
void sosanh(char A[], char B[], char D[]);
void tinhhieu(char A[], char B[], char D[]);

int main()
{
	char A[SIZE],B[SIZE],C[SIZE],D[SIZE];
	nhap(A,B);
	chuanhoadodai(A,B);
	tinhtong(A,B,C);
	xuat(C);
//	sosanh(A,B,D);
//	xuat(D);
	return 0;
}
void tinhtong(char A[], char B[], char C[])
{
	strrev(A);
	strrev(B);
	int du=0;
	int n=strlen(A);
	for(int i=0; i<n; i++){
		int t=(A[i]-'0')+(B[i]-'0')+du;
		if(t<10){
			C[i]=t+'0';
			du=0;
		}
		else {
			C[i]=t-10 +'0';
			du=1;
		}
	}
	if(du==1){
		C[n]='1';
	}
	C[n+1]='\0';
	strrev(C);
}
//void sosanh(char A[], char B[], char D[])
//{
//	if(strcmp(A,B)>0){
//		tinhhieu(A,B,D);
//	}
//	else {
//		tinhhieu(B,A,D);
//		strrev(D);
//		int n3=strlen(D);
//		D[n3]='-';
//		D[n3+1]='\0';
//		strrev(D);
//	}
//}
//void tinhhieu(char A[], char B[], char D[])
//{
//	strrev(A);
//	strrev(B);
//	int thieu=0;
//	int n=strlen(A);
//	for(int i=0; i<n; i++){
//		int t = ( A[i] - '0' ) - ( B[i] - '0' ) - thieu;
//		if(t<0){
//			D[i]=t+10 +'0';
//			thieu=1;
//		}
//		else {
//			D[i]=t+'0';
//			thieu=0;
//		}
//	}
//	D[n]='\0';
//	strrev(D);
//}
void chuanhoadodai(char A[], char B[])
{
	int n1=strlen(A);
	int n2=strlen(B);
	if(n1>n2){
		thaydoi(B,n1-n2);
	}
	else {
		thaydoi(A,n2-n1);
	}
}
void thaydoi(char A[], int x)
{
	strrev(A);
	int a=strlen(A);
	for(int i=0; i<x; i++){
		A[a+i]='0';
	}
	A[a+x]='\0';
	strrev(A);
}
void nhap(char A[], char B[])
{
	gets(A);
	gets(B);
}
void xuat(char C[])
{
	puts(C);
}
