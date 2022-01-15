#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
static const char gen_str[]= "0123456789" "!@#$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ""0123456789" "abcdefghijklmnopqrstuvwxyz";
static const char gen_lettcaps[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
static const char gen_lettsmall[]="abcdefghijklmnopqrstuvwxyz";

int strLen=sizeof(gen_str)-1;
char GenRand()
{
return gen_str[rand()%strLen];
}
int main()
{
int n,count=0,spec=0;
srand(time(0));
cout<<"Enter the length of the desired password (minimum->12 and maximum->32):";
cin>>n;
cout<<n<<endl;
point: char C;
string pword;
for(int z=0; z < n; z++)
{
C=GenRand();
pword+=C;

if(isdigit(C))
{
count++;
}
//special char count
if(C=='!' || C=='@' || C=='$' || C=='%' || C=='^' || C=='&'|| C=='*'|| C=='#')
{
spec++;
}
}
if(n>2 && (spec==0 || count==0))
{
goto point ;
}
pword[0]=gen_lettsmall[rand()%strLen];
pword[n-1]=gen_lettcaps[rand()%strLen];
cout<<"Your Password is:"<<pword;
return 0;
}