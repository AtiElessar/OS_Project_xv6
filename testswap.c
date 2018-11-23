#include "types.h"
#include "user.h"

int main(){
	//malloc(4104192);
	int s = 2818500;
	int *a;
	printf(1,"Mall\n");
	a = malloc(s);
	printf(1,"Mall\n");
	for (int i = 0; i<s/sizeof(int); i++){
		a[100] = 0;
		printf(1,"%d",i);
	}
	a[0] = 0;

	exit();

}