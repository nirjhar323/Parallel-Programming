//Performs a billion arithmetic operations both with parallelization(defualt openMP config) and no parallelization. Computes the time taken for each process. 

#include <iostream>
#include <ctime>

int main()

{

  time_t start_time,end_time;

  start_time = time(NULL);


  //Paralleliztion  
  #pragma omp parallel for
  for (long int i = 0; i < 10000000000; i++)
    i = i + 1;

   end_time = time(NULL);
 
  std::cout << "Calculation time with parallelization = " << end_time - start_time << " seconds\n" << std::endl;
 


  //No parallelization
  start_time = time(NULL);
  
for (long int i = 0; i < 10000000000; i++)
    i = i + 1;
 end_time = time(NULL);

 std::cout << "Calculation time without parallelization = " << end_time - start_time << " seconds\n" << std::endl;


  
}
