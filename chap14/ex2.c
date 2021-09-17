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


}
