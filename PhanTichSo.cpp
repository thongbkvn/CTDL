#include <iostream>
using namespace std;

#define S 6 //Phan tich S thanh tong cac so

int A[S+1],T[S+1];
void inkq(int n)
{
  int i;
  for (i=1;i<n;i++)
    cout<<A[i]<<'+';
  cout<<A[n]<<endl;
}

void Try(int k=1)
{
  int i;
  for (i=A[k-1];i<S;i++)
    {
      A[k]=i;
      T[k]=T[k-1]+i;
      if (T[k]==S)
	inkq(k);
      else
	{
	  if (T[k-1]<S)
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
  
