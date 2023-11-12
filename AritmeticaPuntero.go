# La aritmética de punteros en Golang es una operación matemática que permite desplace o recorrer la memoria a la que apunta un puntero. Los punteros pueden apuntar a variables o elementos de un arreglo.


package main

import "fmt"

func main() {
    // Ejemplo 1: Incremento de un puntero
    arr1 := []int{1, 2, 3, 4, 5}
    ptr1 := &arr1[0]
    ptr1 = ptr1 + 1
    fmt.Println("Ejemplo 1:", *ptr1)

    // Ejemplo 2: Resta de punteros
    arr2 := []int{1, 2, 3, 4, 5}
    ptr2 := &arr2[0]
    ptr3 := &arr2[3]
    diff := ptr3 - ptr2
    fmt.Println("Ejemplo 2:", diff)

    // Ejemplo 3: Acceso a elementos mediante aritmética de punteros
    arr3 := []int{1, 2, 3, 4, 5}
    ptr4 := &arr3[0]
    for i := 0; i < len(arr3); i++ {
        fmt.Println("Ejemplo 3:", *ptr4)
        ptr4 = ptr4 + 1
    }
}
