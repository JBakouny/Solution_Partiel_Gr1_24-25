#include <iostream>
#include <vector>
using namespace std;

vector<double> SaisieTemperatures(int count) {
    vector<double> temperatures(count);
    for (int i = 0; i < count; ++i) {
        cout << "Entrez la temperature " << i + 1 << " : ";
        cin >> temperatures[i];
    }
    return temperatures;
}

double CalculerMoyenne(const vector<double>& tempVect) {
    double somme = 0.0;
    for (double temp : tempVect) {
        somme += temp;
    }
    return tempVect.size() == 0 ? 0.0 : somme / tempVect.size();
}

void TrouverExtremes(const vector<double>& tempVect, double& minTemp, double& maxTemp) {
    if (tempVect.empty()) return;
    minTemp = maxTemp = tempVect[0];
    for (double temp : tempVect) {
        if (temp < minTemp) minTemp = temp;
        if (temp > maxTemp) maxTemp = temp;
    }
}

int main()
{
    int count;
    cout << "Entrez le nombre de temperatures : ";
    cin >> count;
    vector<double> temperatures =
        SaisieTemperatures(count);

    if (temperatures.size() != 0)
    {
        double moyenne =
            CalculerMoyenne(temperatures);
        cout << "La moyenne des temperatures : ";
        cout << moyenne << endl;

        double minTemp, maxTemp;
        TrouverExtremes(temperatures, minTemp, maxTemp);
        cout << "Temperature minimale : ";
        cout << minTemp << endl;
        cout << "Temperature maximale : ";
        cout << maxTemp << endl;
    }
    else
    {
        cout << "Aucune temperature saisie." << endl;
    }

    return 0;
}