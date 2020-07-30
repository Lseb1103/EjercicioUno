#include <iostream>

using namespace std;

int main()
{
    int a[100], b[100], i, k=0, t;

cout<<"Ingrese el tamaño del arreglo: ";
cin>>t;

for(i=0;i<t;i++)
{
cout<<"\nIngrese a["<<i<<"]=";
cin>>a[i];
}

for(i=0;i<t;i++)
{
if(a[i]%2==0)
{
  b[k]=a[i];
  k++;
}
}

cout<<"Los pares son:"<<endl;
for(i=0;i<k;i++)
{
cout<<endl<<"b["<<i<<"]="<<b[i];
}


return 0;
}
