def tam_bolenler(sayi):
    #index = (-1)*sayi
    index = 1
    sonuc = []
    while index <= sayi:
        if sayi % index == 0:
            sonuc.extend([index, (-1)*index])
        index += 1  

    return sonuc

sayi    = int(input("Lütfen tam bölenlerini görmek listediğiniz sayıyı giriniz:"))
sonuc   = tam_bolenler(sayi)
print(sonuc)