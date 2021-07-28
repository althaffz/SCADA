<?php

$result = mysql_connect("mysql7.000webhost.com", "a1768673_dsi", "123456abc");
$id = $_GET["id"];
$p_pairs = $_GET["p_pairs"];	//Production Pairs

$temp1 = $_GET["temp1"];		//Injected Temperature_1

$temp2 = $_GET["temp2"];		//Injected Temperature_2

$temp3 = $_GET["temp3"];		//Injected Temperature_3

$temp4 = $_GET["temp4"];		//Injected Temperature_4

$temp5 = $_GET["temp5"];		//Injected Temperature_5

$avg_current = $_GET["avg_current"];	//Average Current

$avg_voltage= $_GET["avg_voltage"];		//Average Voltage

$kw= $_GET["kw"];		//Wottage

$kwh= $_GET["kwh"];		//Power


$sqlt = "insert into a1768673_dsi.dsi_machine1 (id,p_pairs,temp1,temp2,temp3,temp4,temp5,avg_current,avg_voltage,kw,kwh) values ($id,$p_pairs,$temp1,$temp2,$temp3,$temp4,$temp5,$avg_current,$avg_voltage,$kw,$kwh)";

mysql_query($sqlt);
echo "sucesses"
?>
