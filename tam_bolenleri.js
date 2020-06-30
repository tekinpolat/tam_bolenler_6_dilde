function tam_bolenler(sayi){
    let index = 1;
    let sonuc = [];

    while(index <= sayi){
        if (sayi % index == 0){
            sonuc.push(index, (-1)*index);
        }
        index += 1;
    }
    return sonuc
}

const data = tam_bolenler(1000000000);
console.log(data);