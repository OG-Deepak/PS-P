#include <stdio.h>
int main(){
int sqt=0;
int i=0;
int n=4;
do {
	printf("\nsqt of %d",i);
	if(i==2){
		i++;
		continue;
}
	sqt=i*i;
	printf(" =%d",sqt);
	i++;
}while(i<=n);
	printf("\n end of the code i = %d",i);
}
