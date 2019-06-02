#include <cstdlib>
#include <iostream>
#include <vector>

class Algorithm 
      {
      public:
             char* name = "Algorithm";
             std::vector<std::vector<int>> data;
             Algorithm();
             Algorithm(std::vector<std::vector<int>>);
             Algorithm(char*);
             bool LoadData(std::vector<std::vector<int>>);
             bool LoadData(char*);
             virtual void Run();
      protected:
                int GetStrCount();
                int GetColCount()'
                virtual bool validateData();
                
      };

int main(int argc, char *argv[])
{
    system("PAUSE");
    return EXIT_SUCCESS;
}
