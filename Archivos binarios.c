#include <stdio.h>
#include <string.h>

typedef struct
{
    int calificacion;
    char nombre[20];
} Alumno;
int main(int argc, char const *argv[])
{
    FILE *archivo;
    Alumno alumno, alumnoLeido;
    int i, n;
    int arr[5];

    strcpy(alumno.nombre, "Jimmy");
    alumno.calificacion = 10;

    archivo = fopen("alumno.dat", "wb");
    for(i=0; i<5; i++)
    {
        printf("Dame un nombre: ");
        scanf("%s", alumno.nombre);
        printf("Dame los puntos: ");
        scanf("%d", &alumno.calificacion);

        fwrite(&alumno, sizeof(Alumno), 1, archivo);
    }
    fclose(archivo);

    archivo = fopen("record.dat", "rb");
    arr = fread(&alumnoLeido, sizeof(Alumno), 5, archivo);
    fclose(archivo);

    Promedio(arr[n]);
    return 0;
}

float Promedio(arreglo[N])
{
    int i, suma=0, prom;
    for(i=0; i<N; i++)
    {
        suma = suma + arr[i];

    }
    prom = suma / i;

}
