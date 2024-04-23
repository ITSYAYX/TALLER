#include <stdio.h> 
#include <string.h> 
int mostrarParadas(char ruta[]) { 
    if (strcmp(ruta, "F19") == 0) { 

        printf("Paradas para la ruta F19:\n"); 

        printf("1. Estacion Portal Suba\n"); 

        printf("2. Estacion La Campiña\n"); 

        printf("3. Estacion Suba - TV. 91\n"); 

        printf("4. Estacion Gratamira\n"); 

        printf("5. Estacion 21 ángeles\n"); 

        printf("6. Estacion Suba - AV. Boyacá\n"); 

        printf("7. Estacion Suba - CL 100\n"); 

        printf("8. Estacion Suba - CL 95\n"); 

        printf("9. Estacion Calle 72\n"); 

        printf("10. Estacion Calle 63\n"); 

        printf("11. Estacion Marly\n"); 

        printf("12. Estacion Calle 34\n"); 

        printf("13. Estacion Calle 26\n"); 

        printf("14. Estacion Calle 19\n"); 

        printf("15. Estacion De La Sabana\n"); 

        printf("16. Estacion Ricaurte (CL 13)\n"); 

        printf("17. Estacion Zona Industrial\n"); 

        printf("18. Estacion Distrito Grafiti\n"); 

        printf("19. Estacion Marsella\n"); 

        printf("20. Estacion Mandalay\n"); 

        printf("21. Estacion Banderas\n"); 

        return 1; 

    } else if (strcmp(ruta, "G43") == 0) { 

        printf("Paradas para la ruta G43:\n"); 

        printf("1. Estacion Portal Eldorado\n"); 

        printf("2. Estacion Modelia\n"); 

        printf("3. Estacion Normandía\n"); 

        printf("4. Estacion El Tiempo - Cámara de Comercio\n"); 

        printf("5. Estacion Salitre - El Greco\n"); 

        printf("6. Estacion Gobernación\n"); 

        printf("7. Estacion Quinta Paredes\n"); 

        printf("8. Estacion Corferias\n"); 

        printf("9. Estacion CAD\n"); 

        printf("10. Estacion Ricaurte (NQS)\n"); 

        printf("11. Estacion General Santander\n"); 

        printf("12. Estacion Venecia\n"); 

        printf("13. Estacion La Despensa\n"); 

        printf("14. Estacion León XIII\n"); 

        printf("15. Estacion Terreros Hospital C.V.\n"); 

        printf("16. Estacion San Mateo - C.C. Unisur\n"); 

        return 1; 

    } else { 

        printf("Ruta de bus no encontrada.\n"); 

        return 0; 

    } 

} 


int mostrarRutasFeriados() { 

    printf("Rutas de buses que funcionan en feriados:\n"); 

    printf("1. Ruta F19\n"); 

    printf("2. Ruta G43\n"); 

    return 1; 

} 

  

int main() { 

    char opcion; 

    char ruta[4]; 

    int resultado; 

  

    do { 

        printf("\nMENU:\n"); 

        printf("(1) Digite la ruta de bus sobre la que desea conocer las paradas\n"); 

        printf("(2) Conocer rutas que funcionan en feriados\n"); 

        printf("(0) Salir\n"); 

        printf("Seleccione una opción: "); 

        scanf(" %c", &opcion); 

  

        switch (opcion) { 

            case '1': 

                printf("\nIngrese el número de ruta de bus (por ejemplo, F19): "); 

                scanf("%s", ruta); 

                resultado = mostrarParadas(ruta); 

                if (resultado == 0) { 

                    printf("Por favor, ingrese una ruta válida.\n"); 

                } 

                break; 

            case '2': 

                resultado = mostrarRutasFeriados(); 

                if (resultado == 0) { 

                    printf("No se encontraron rutas para mostrar.\n"); 

                } 

                break; 

            case '0': 

                printf("Saliendo del programa...\n"); 

                break; 

            default: 

                printf("Opción no válida. Por favor, seleccione una opción válida.\n"); 

        } 

    } while (opcion != '0'); 

  

    return 0; 

} 

 
