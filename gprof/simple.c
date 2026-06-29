int calcme(int i) {
	return(i*i);
}

int main() {
	int i,res=0,total=0;
	long int iterations=100000000;
	for (i=0 ; i <= iterations ; i++) {
		res=calcme(i);
		total=total+res;
	}
}

