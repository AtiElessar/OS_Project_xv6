#include "types.h"
#include "user.h"

int main(){
	//malloc(4104192);
	int s = 3080000;
	int *a;
	a = malloc(s);
	for (int i = 0; i<s/sizeof(int); i++){
		a[i] = 0;
		printf(1,"%d\n",i);
	}
	exit();

}