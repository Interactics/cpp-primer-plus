#ifndef header_h
#define header_h

struct chaff{
	char dross[20];
	int slag;
};

void setChaff(chaff& cha);
void displayChaff(const chaff& cha);

#endif // ! header_h