#pragma once
#pragma once

class arry
{
public:
    void makeArry(int arrySize);

    float highest(float* m_arry[]);
    float lowest(float* m_arry[]);
    void print(float* m_arry[]);



private:
    static int arrySize;
    static float temp;
    float m_arry;


};

