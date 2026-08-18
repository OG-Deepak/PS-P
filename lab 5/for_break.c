#include <stdio.h>
int main(){
int sqt;
int i;
int n=4;
for (i=0;i<=n;i++){
	printf("\nsqt of %d",i);
	if(i==2)
		break;
	sqt=i*i;
	printf(" =%d",sqt);
}
	printf("\n end of the code i = %d\n",i);

}
