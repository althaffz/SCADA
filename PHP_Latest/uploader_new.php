<?php

//http://dsi_scada.netne.net/uploader_new.php?id=0&date_time=20160107211000&p_pairs=45&temp1=105&temp2=230&temp3=100&temp4=2500&temp5=570&avg_current=100&avg_voltage=250&kw=1000.0&kwh=1024.0

$result = mysql_connect("mysql8.000webhost.com","a3477238_user","123456abc");
$id = $_GET["id"];
$date_time = $_GET["date_time"];
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


$sqlt = "insert into a3477238_data.machine1 (id,date_time,p_pairs,temp1,temp2,temp3,temp4,temp5,avg_current,avg_voltage,kw,kwh) values ($id,$date_time,$p_pairs,$temp1,$temp2,$temp3,$temp4,$temp5,$avg_current,$avg_voltage,$kw,$kwh)";

mysql_query($sqlt);
echo "sucesses"
?>
