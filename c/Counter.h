#ifndef COUNTER_H
#define COUNTER_H


class Counter
{
    int v;
   public:
        void set(int a){
            v=a;
        }
        void count(){
            v++;
        }
        int getvalue() const{
            return v;
        }
};

#endif // COUNTER_H
