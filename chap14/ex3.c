#include<stdio.h>
int main()
{
    struct record
	{
	char name[32];
	int age;
	float debt;
	};

	struct record bill = {
	"Bill",
	20,
	500
	};
	struct record mary = {
	"Mary",
	21,
	700
	};
	struct record dan = {
	"Dan",
	22,
	2600
	};
	struct record susie = {
	"Susie",
	23,
	1800
	};
struct record array_of_record[4];
    array_of_record[0] = bill;
    array_of_record[1] = mary;
    array_of_record[2] = dan;
    array_of_record[3] = susie;

}

