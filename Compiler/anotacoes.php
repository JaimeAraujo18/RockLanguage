<?php

# ECHO
grita('ab', 'c', 'de','f');
function grita(){
    $args = func_get_args();

    if($args){
        foreach($args as $arg){
            echo $arg;
        }
    }
}

echo PHP_EOL;

echo 'ab', 'c', 'de', 'f';