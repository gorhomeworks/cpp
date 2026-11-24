class Airplane
{
private:
    char dir[20];
    int hour;
    int minute;

public:
    void set();
    void get();
    int get_hour();
    int get_minute();
};