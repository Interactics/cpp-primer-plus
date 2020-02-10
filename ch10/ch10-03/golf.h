#ifndef GOLF_H_
#define GOLF_H_

class golf {
private:
    static const int Len = 40;
    char fullname_[Len];
    int handicap_;
    
public:
    golf();
    golf(const char* name, int hc = 0);
    ~golf();
    
    void handicap(int hc);
    void showgolf() const;
};

#endif
