
#include <semaphore>


using namespace std;

std::counting_semaphore<10> sem(1);



void resources (){
    sem.acquire();
    sem.release();
}