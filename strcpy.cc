#include<iostream>
void my_strcpy(char *p_dest,char *p_src)
{
	while(*p_dest++=*p_src++);
}
int main()
{
	char src[30]="Rahul Sinare";
	char dest[30]={};
	my_strcpy(dest,src);
	std::cout<<"src:"<<src<<"\ndest:"<<dest<<std::endl;
	return 0;
}
