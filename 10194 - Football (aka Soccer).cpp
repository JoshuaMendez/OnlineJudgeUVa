#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string aMinuscula(string cadena)
{
    for (int i = 0; i < cadena.length(); i++)
        cadena[i] = tolower(cadena[i]);
    return cadena;
}

class Equipo
{
private:
    // Atributos
    string nombre;
    int puntosTotalesGanados, numeroPartidos, partidosGanados, partidosEmpatados, partidosPerdidos, diferenciaGoles, golesAnotados, golesEnContra;

    // Operaciones
public:
    Equipo() {}
    Equipo(string nombre)
    {
        this->nombre = nombre;
        puntosTotalesGanados = 0;
        numeroPartidos = 0;
        partidosGanados = 0;
        partidosEmpatados = 0;
        partidosPerdidos = 0;
        diferenciaGoles = 0;
        golesAnotados = 0;
        golesEnContra = 0;
    }

    // Sobrecarga "<"
    bool operator<(const Equipo &Team)
    {
        bool ans;
        if (puntosTotalesGanados != Team.puntosTotalesGanados)
        {
            ans = puntosTotalesGanados > Team.puntosTotalesGanados;
        }
        else
        {
            if (partidosGanados != Team.partidosGanados)
            {
                ans = partidosGanados > Team.partidosGanados;
            }
            else
            {
                if (diferenciaGoles != Team.diferenciaGoles)
                {
                    ans = diferenciaGoles > Team.diferenciaGoles;
                }
                else
                {
                    if (golesAnotados != Team.golesAnotados)
                    {
                        ans = golesAnotados > Team.golesAnotados;
                    }
                    else
                    {
                        if (numeroPartidos != Team.numeroPartidos)
                        {
                            ans = numeroPartidos < Team.numeroPartidos;
                        }
                        else
                        {
                            if (nombre != Team.nombre)
                            {
                                ans = aMinuscula(nombre) < aMinuscula(Team.nombre);
                            }
                        }
                    }
                }
            }
        }
        return ans;
    }

    string getNombre()
    {
        return nombre;
    }
    int getPuntosTotalesGanados()
    {
        return puntosTotalesGanados;
    }
    int getNumeroPartidos()
    {
        return numeroPartidos;
    }
    int getPartidosGanados()
    {
        return partidosGanados;
    }
    int getPartidosEmpatados()
    {
        return partidosEmpatados;
    }
    int getPartidosPerdidos()
    {
        return partidosPerdidos;
    }
    int getDiferenciaGoles()
    {
        return diferenciaGoles;
    }
    int getGolesAnotados()
    {
        return golesAnotados;
    }
    int getGolesEnContra()
    {
        return golesEnContra;
    }

    void setAddPuntosTotalesGanados(int cuantosPuntos)
    {
        puntosTotalesGanados += cuantosPuntos;
    }
    void setAddNumeroPartidos(int cuantosPartidos)
    {
        numeroPartidos += cuantosPartidos;
    }
    void setAddPartidosGanados(int cuantosPartidosGanados)
    {
        partidosGanados += cuantosPartidosGanados;
    }
    void setAddPartidosEmpatados(int cuantosPartidosEmpatados)
    {
        partidosEmpatados += cuantosPartidosEmpatados;
    }
    void setAddPartidosPerdidos(int cuantosPartidosPerdidos)
    {
        partidosPerdidos += cuantosPartidosPerdidos;
    }
    void setAddDiferenciaGoles(int golesEquipo1, int golesEquipo2)
    {
        diferenciaGoles += (golesEquipo1 - golesEquipo2);
    }
    void setAddGolesAnotados(int cuantosGoles)
    {
        golesAnotados += cuantosGoles;
    }
    void setAddGolesEnContra(int cuantosGoles)
    {
        golesEnContra += cuantosGoles;
    }
};

int main()
{
    int N, i, e, j;
    cin >> N;
    cin.ignore();
    for (i = 0; i < N; i++)
    {
        vector<Equipo> vecEquipos;
        string equipoNombre;
        string nombreTorneo;
        getline(cin, nombreTorneo);

        int equiposNumero;
        cin >> equiposNumero;
        cin.ignore();
        for (e = 0; e < equiposNumero; e++)
        {
            getline(cin, equipoNombre);
            vecEquipos.push_back(Equipo(equipoNombre));
        }
        int partidosJugados;
        string resultadoPartido;
        cin >> partidosJugados;
        cin.ignore();
        for (e = 0; e < partidosJugados; e++)
        {
            getline(cin, resultadoPartido);

            int encontrarArroba;
            encontrarArroba = resultadoPartido.find("@");

            // Divido en @
            string resultadoEquipo1, resultadoEquipo2;
            for (j = 0; j < encontrarArroba; j++)
            {
                resultadoEquipo1 += resultadoPartido[j];
            }
            for (j = (encontrarArroba + 1); j < resultadoPartido.size(); j++)
            {
                resultadoEquipo2 += resultadoPartido[j];
            }

            int encontrarHashtag;
            encontrarHashtag = resultadoEquipo1.find("#");

            // Divido en #
            string nombreEquipo1, nombreEquipo2;
            int golesEquipo1 = 0, golesEquipo2 = 0;
            for (j = 0; j < encontrarHashtag; j++)
            {
                nombreEquipo1 += resultadoEquipo1[j];
            }
            // Lo pasa en ascii
            golesEquipo1 += resultadoEquipo1[encontrarHashtag + 1] - 48;

            encontrarHashtag = resultadoEquipo2.find("#");
            golesEquipo2 += resultadoEquipo2[encontrarHashtag - 1] - 48;
            for (j = (encontrarHashtag + 1); j < resultadoEquipo2.size(); j++)
            {
                nombreEquipo2 += resultadoEquipo2[j];
            }

            // Añado Goles
            int flag = 0;
            j = 0;
            while (j < vecEquipos.size() && flag == 0)
            {
                if (vecEquipos[j].getNombre() == nombreEquipo1)
                {
                    vecEquipos[j].setAddNumeroPartidos(1);
                    vecEquipos[j].setAddGolesAnotados(golesEquipo1);
                    vecEquipos[j].setAddGolesEnContra(golesEquipo2);
                    if (golesEquipo1 > golesEquipo2)
                    {
                        vecEquipos[j].setAddPuntosTotalesGanados(3);
                        vecEquipos[j].setAddPartidosGanados(1);
                    }
                    else if (golesEquipo1 == golesEquipo2)
                    {
                        vecEquipos[j].setAddPuntosTotalesGanados(1);
                        vecEquipos[j].setAddPartidosEmpatados(1);
                    }
                    else if (golesEquipo1 < golesEquipo2)
                    {
                        vecEquipos[j].setAddPartidosPerdidos(1);
                    }
                    vecEquipos[j].setAddDiferenciaGoles(golesEquipo1, golesEquipo2);
                    flag = 1;
                }
                j++;
            }

            flag = 0;
            j = 0;
            while (j < vecEquipos.size() && flag == 0)
            {
                if (vecEquipos[j].getNombre() == nombreEquipo2)
                {
                    vecEquipos[j].setAddNumeroPartidos(1);
                    vecEquipos[j].setAddGolesAnotados(golesEquipo2);
                    vecEquipos[j].setAddGolesEnContra(golesEquipo1);
                    if (golesEquipo2 > golesEquipo1)
                    {
                        vecEquipos[j].setAddPuntosTotalesGanados(3);
                        vecEquipos[j].setAddPartidosGanados(1);
                    }
                    else if (golesEquipo1 == golesEquipo2)
                    {
                        vecEquipos[j].setAddPuntosTotalesGanados(1);
                        vecEquipos[j].setAddPartidosEmpatados(1);
                    }
                    else if (golesEquipo2 < golesEquipo1)
                    {
                        vecEquipos[j].setAddPartidosPerdidos(1);
                    }
                    vecEquipos[j].setAddDiferenciaGoles(golesEquipo2, golesEquipo1);
                    flag = 1;
                }
                j++;
            }
        }

        sort(vecEquipos.begin(), vecEquipos.end());
        if (i != 0)
        {
            cout << endl;
        }
        cout << nombreTorneo << endl;
        for (int u = 0; u < vecEquipos.size(); ++u)
        {
            printf("%d) %s %dp, %dg (%d-%d-%d), %dgd (%d-%d)\n", (u + 1), vecEquipos[u].getNombre().c_str(), vecEquipos[u].getPuntosTotalesGanados(), vecEquipos[u].getNumeroPartidos(), vecEquipos[u].getPartidosGanados(), vecEquipos[u].getPartidosEmpatados(), vecEquipos[u].getPartidosPerdidos(), vecEquipos[u].getDiferenciaGoles(), vecEquipos[u].getGolesAnotados(), vecEquipos[u].getGolesEnContra());
        }
    }
    return 0;
}