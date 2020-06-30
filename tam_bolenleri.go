package main

import (
	"fmt"
)

func tam_bolenler(sayi int) [] int{
	var sonuc []int

	for index := 1; index <= sayi; index++{
		if  sayi % index == 0{
			sonuc = append(sonuc, index, (-1)*index)
		}
	}
	return sonuc
}

func main(){
	fmt.Print("Lütfen tam bölenlerini görmek listediğiniz sayıyı giriniz:")
	var sayi int
	_, err := fmt.Scanf("%d", &sayi)
	if err != nil{
		fmt.Println("sayi giriniz..")
	}
	sonuc := tam_bolenler(sayi)
	fmt.Println(sonuc)
}