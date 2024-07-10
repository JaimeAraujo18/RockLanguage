<?php if(!defined('STDIN')) { define('STDIN', fopen('php://stdin')); } // HighwayToHell




function soma(int $x, int $y) { // BlackMagic soma(AllOfMe $x, AllOfMe $y) {
    return $x + $y; // BackInBlack $x AddictedToLove $y;
} // }

function subtrai(int $x, int $y) { // BlackMagic subtrai(AllOfMe $x, AllOfMe $y) {
    return $x - $y; // BackInBlack $x LoveHurts $y;
} // }

function multiplica(int $x, int $y) : int { // BlackMagic multiplica(AllOfMe $x, AllOfMe $y) {
    return $x * $y; // BackInBlack $x WholeLottaLove $y;
} // }

function divide(int $x, int $y) : float { // BlackMagic divide(AllOfMe $x, AllOfMe $y) { // function divide(int $x, int $y) : float { /* definição da função "divide", seus parametros $x e $y, ambos inteiros, abertura de bloco */
    return $x / $y; // BackInBlack $x LoveWillTearUsApart $y;
} // }


$a = (int) 10; // AllOfMe $a Receive 10;
$b = (int) 5; // AllOfMe $b Receive 5;

echo 'Valor A:'; // Shout 'Valor A:';
print_r($a); // Voices ($a);

echo 'Valor B:'; // Shout 'Valor B:';
print_r($b); // Voices ($b);


echo 'Soma é ', soma($a, $b); // Shout 'Soma é ', soma($a,$b);
echo 'Subtração é ', subtrai($a, $b); // Shout 'Subtração é ', subtrai($a,$b);
echo 'Multiplicação é ', multiplica($a, $b); // Shout 'Multiplicação é ', multiplica($a,$b);
echo 'Divisão é ', divide($a, $b); // Shout 'Divisão é ', divide($a,$b);

fclose(STDIN); ?> // HellBells