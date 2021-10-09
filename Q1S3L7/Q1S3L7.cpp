#include <iostream>
#include <vector>
#include "StudentsGroup.h"

using namespace std;

int main()
{
    {
        StudentsGroup sg;

        vector<int> evals1{ 4, 4, 5, 4, 4 };
        sg.addStudent(evals1, "Daniil", "Ivanov");

        vector<int> evals2{ 4, 5, 5, 5, 4 };
        sg.addStudent(evals2, "Andre", "Maltuguev", "Alexeevich");

        sg.Save();
    }

    {
        StudentsGroup sg;
        sg.Open();
        cout << sg.GetAllInfo() << "===\n";
        cout << "Daniil's average: " << sg.GetAverageScore(*sg.genFN("Daniil", "Ivanov")) << endl << endl;
        cout << "Daniil's info:\n\n" << sg.GetAllInfo(*sg.genFN("Daniil", "Ivanov"));
    }
    return 0;
}