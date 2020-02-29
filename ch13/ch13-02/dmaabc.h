#ifndef DMAABC_H_
#define DMAABC_H_
#include <iostream>

/***********************
	ABCDMA
************************/
class ABCDMA {
protected:
	char* label;
	int rating;

public:
	ABCDMA(const char* l = "null", int r = 0);
	ABCDMA(const ABCDMA& rs);
	virtual ~ABCDMA();
	virtual void view() = 0;
	friend std::ostream& operator<<(std::ostream& os, const ABCDMA& rs);
};

/***********************
	baseDMA
************************/
class baseDMA : public ABCDMA{
public:
    baseDMA(const char* l = "null", int r = 0);
    baseDMA(const baseDMA& rs);
    virtual ~baseDMA();
    virtual void view();
    baseDMA& operator=(const baseDMA& rs);
    friend std::ostream& operator<<(std::ostream& os, const baseDMA& rs);
};

/***********************
	lacksDMA
************************/
class lacksDMA :  public ABCDMA{
private:
    enum { COL_LEN = 40 };
    char color[COL_LEN];
public:
    lacksDMA(const char* c = "blank", const char* l = "null", int r = 0);
    lacksDMA(const char* c, const baseDMA& rs);
    virtual ~lacksDMA() {}
    virtual void view();
	friend std::ostream& operator<<(std::ostream& os, const lacksDMA& rs);
};

/***********************
	hasDMA
************************/
class hasDMA : public ABCDMA {
private:
	char* style;
public:
	hasDMA(const char* s = "none", const char* l = "null", int r = 0);
	hasDMA(const char* s, const baseDMA& rs);
	hasDMA(const hasDMA& hs);
	virtual ~hasDMA();
	virtual void view();
	hasDMA& operator=(const hasDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const hasDMA& rs);
};
#endif //DMAAB_H_