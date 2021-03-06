#ifndef CLASSIC_H_
#define CLASSIC_H_
// Cd Class 
class Cd{
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
public:
    Cd(const char* l, const char* s2, const int n, const double x);
    Cd(const Cd& d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;
    virtual Cd& operator=(const Cd& d);
};
//========
// Classic Class
class Classic : public Cd {
private:
	char classicNum[50];
public:
	Classic(const char* l, const char* s2, const char* s3, const int n, const double x);
	Classic(const char* c, const Classic& d);
	Classic();
	~Classic();
	void Report() const;
	Classic& operator=(const Classic& d);
};

#endif // CLASSIC_H_