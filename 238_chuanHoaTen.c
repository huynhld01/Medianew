#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char s[100];
	gets(s);
	char *p;
	p = strtok(s," ");
     strlwr(p);
	p[0] -= 32;         //luong -> Luong
	
	int len = 0;
	char *str[100];
	str[len++] = p;
	
	// Tách tù và chuyen : huynh->Huynh
	while (p!=NULL){
		p = strtok(NULL," ");
		if(p!=NULL){
			strlwr(p);
			toupper(p[0]);
			str[len++] = p;
		}
	}
	// In két qua : dinh VAn HUY -> Huy,Dinh Van
	printf("%s, ",strupr(str[len-1]));
	for (int i = 0 ;i <len-1;i++) printf("%s ",str[i]);
	return 0;
}
