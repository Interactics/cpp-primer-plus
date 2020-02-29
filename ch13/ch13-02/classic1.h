#ifndef CLASSIC1_H_
#define CLASSIC1_H_
// Cd Class 
class Cd{
private:
    char* performers;
    char* label;
    int selections;
    double playtime;
public:
    Cd(const char* l, const char* s2, const int n, const double x);
    Cd(const Cd& d);
    Cd();
    virtuasl ~Cd();
    virtual void Report() const;
    virtual Cd& operator=(const Cd& d);
};
//========
// Classic Class
class Classic : public Cd {
private:
	char* classicNum;
public:
	Classic(const char* l, const char* s2, const char* s3, const int n, const double x);
	Classic(const char* c, const Classic& d);
	Classic();
	~Classic();
	void Report() const;
	Classic& operator=(const Classic& d);
};

#endif // CLASSIC_H_