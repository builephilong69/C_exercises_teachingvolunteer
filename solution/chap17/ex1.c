char* binbin(int num)
{
	static char bin[33];
	for(int i =0; i<32;i++)
	{
		bin[i] = (num & 0x80000000) ? '1':'0'; /*0x80000000 = 10000000 00000000 00000000 00000000*/ 
		num <<=1; /*shiftleft 1 bit*/
	}
	bin[32] = '\0';
	return bin;
}
