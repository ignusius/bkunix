#ifndef __pdp11__
#define printhex(a)	printf ("%04x", (unsigned short) a)
#endif

void test (a, b, msg)
	long a, b;
	char *msg;
{
	long c;

	c = a % b;
	printhex ((int) (a >> 16)); printhex ((int) a);
	printf (" % ");
	printhex ((int) (b >> 16)); printhex ((int) b);
	printf (" = ");
	printhex ((int) (c >> 16)); printhex ((int) c);
	printf (" -- expected ");
	printf (msg);
	printf ("\n");
}

int main ()
{
	int a, b, c;

	printf ("Testing signed long remainder.\n");
	test (1234567L, 456789L, "0004e5dd");
	test (-1234567L, 456789L, "fffb1a23");
	test (1234567L, -456789L, "0004e5dd");
	test (-1234567L, -456789L, "fffb1a23");
	test (1234567L, 56L, "0000002f");
	test (1234L, 56L, "00000002");
	printf ("Done.\n");
	return 0;
}
