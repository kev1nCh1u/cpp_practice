#include <iostream>

int main()
{
    while (1)
    {

        clock_t beginTime = clock();

        for(int i=0; i<1000; i++)
        {
            for(int j=0; j<10; j++)
            {

            }
        }

        clock_t endTime = clock();
        clock_t deltaTime = endTime - beginTime;
        
        int fps = (1.f / deltaTime * 1000);
        std::cout << fps << "\n";
    }

}