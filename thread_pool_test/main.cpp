#include <iostream>
#include "thread_pool.h"
using namespace std;

int main()
{
    int n=0;
    auto fun=[&n](){
        cout << "Hello World!" << endl;
        ++n;
    };
    auto fun2=[&n](){
        for(int i=0;i<100000000;++i);
        //cout << "你好世界！" << endl;
        //++n;
    };

    Thread_pool*pool=new Thread_pool(50,10,0.5,10,10);
    for(int i=0;i<100;++i)
    {
        pool->AddTask(fun);
        pool->AddTask(fun2);
    }

    system("pause");
    cout<<"test number:"<<n;
    delete pool;
    return 0;
}

