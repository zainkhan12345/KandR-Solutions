#include<stdio.h>
int main(){
	int lim=100;
	int c;
	for(int i=0;i<lim-1;i++){
		if((c=getchar()!='\n')){
			if(c!=EOF){
				//do something here
			}
		}
	}
}
