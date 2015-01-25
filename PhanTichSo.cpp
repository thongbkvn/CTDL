#include <iostream>
using namespace std;

#define S 9 //Phan tich S thanh tong cac so

int A[S+1]; //Luu cac so trong chuoi tong
int T[S+1]; //T[i] Luu tong cac so tu A[1] den A[i]

//Ham in ket qua
void inkq(int n)
{
  int i;
  for (i=1;i<n;i++)
    cout<<A[i]<<'+';
  cout<<A[n]<<endl;
}

//Ham phan tich tong theo phuong phap quay lui
void Try(int k=1)
{
  int i;
  for (i=A[k-1];i<=S-T[k-1];i++) //Moi gia tri co the thu
    {
      A[k]=i; //Thu cho A[k]=i
      T[k]=T[k-1]+i;  //Cap nhat tong A[k]
      if (T[k]==S) //Neu thoa man thi in ket qua
	inkq(k);
      else //Neu chua phai la ket qua
	{
	  if (T[k-1]<S) //Neu van con kha nang tim ra ket qua thi thu tiep
	    Try(k+1);
	}	   	
    }
}

int main()
{
  A[0]=1;
  Try();
  cout<<endl;
  return 0;
}
  
