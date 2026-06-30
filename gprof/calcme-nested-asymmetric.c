
int spinme(long looplen)
{
	long i, z;
	for (i = 0; i <= looplen; i++)
	{
		z = z * i;
	}
	return z;
}

int calcme1(int i)
{
	long z, innerloop = 10;
	z = spinme(innerloop);
	return (i * z);
}

int calcme2(int i)
{
	long z, innerloop = 10;
	z = spinme(innerloop);
	return (i * z);
}

int main()
{
	int i, res = 0, total = 0;
	long int iterations = 500000000;
	for (i = 0; i <= iterations; i++)
	{
		if (i % 3 == 0) {
			res = calcme1(i);
		}
		else
		{
			res = calcme2(i);
		}
	}
	total = total + res;
}

