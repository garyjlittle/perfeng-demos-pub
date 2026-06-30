int calcme(int i) {
        long z,innerloop=10;
        for (i=0 ; i <= innerloop ; i++) {
            z=i*i;
        }
	return(i*i*z);
}

int main() {
	int i,res=0,total=0;
	long int iterations=500000000;
	for (i=0 ; i <= iterations ; i++) {
		res=calcme(i);
		total=total+res;
	}
}

