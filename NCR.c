#include<stdio.h>
int main()
{
int a,n,r,f=1,i,r1,nr,nr1,j,k,f1=1,f2=1,s;
int ncr,temp=1;
scanf("%d%d",&n,&s);
//scanf("%d",&a);
if(a<=10^9 && a<=n)
 {
  r=a;
 }
else{return 0;}
for(i=1;i<=n;i++)//n!
 {
  f=f*i;
  }
for(j=2;j<=r;j+=2)
  {
   if(n==j)
    {
     temp+=1;
     break;
    }
   else
    {
     r1=j;
     nr=n-r1;
for(s=1;s<=r1;s++)// r fact
{
f2=f2*s;
}
for(k=1;k<=nr;k++)// n-r fact
{
f1=f1*k;
}
ncr=f/(f2*f1);
temp=temp+ncr;
f1=1;f2=1;
}
}
printf("%d",temp);
return 0;
}
