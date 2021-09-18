_Bool IsPowerOf2(int num)
{
	static char bin[33];
	int count = 0;
	for(int i=0; i<32;i++)
	{
		count = (num & 0x80000000)? count+1:count;
		num <<=1;
	}
	return (count == 1);
}
