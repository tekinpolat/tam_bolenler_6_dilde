<?php 

function tam_bolenler($sayi){
    $sayi   = (int)$sayi;
    #$index  = (-1)*$sayi;
    $index = 1;
    $sonuc  = [];
    while($index <= $sayi){
        #echo $index."\n";
        if ($sayi%$index == 0){
            array_push($sonuc, $index, (-1)*$index);
        }
        $index++;
    }
    return $sonuc;
}

$fh = fopen('php://stdin','r') or die($php_errormsg); 
echo "Lütfen bir sayı giriniz:";
$sayi = fread($fh,20); 

$sonuc = tam_bolenler($sayi);
print_r($sonuc);
