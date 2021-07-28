<?php

//http://dsi_scada.netne.net/realtime.php?start=00000000000000&ending=20160107211000


$mysql_host = "mysql8.000webhost.com";
$mysql_user = "a3477238_user";
$mysql_pass = "123456abc";
$mysql_db = "a3477238_data";

$query = "SELECT * FROM  `machine1` ORDER BY  `id` DESC LIMIT 1";

if (mysql_connect($mysql_host, $mysql_user, $mysql_pass) && mysql_select_db($mysql_db)){
	//works fine!!!
}else {
	die("Error");
}

if($query_run = mysql_query($query)){
	while($query_row = mysql_fetch_assoc($query_run)){
		$id = $query_row['id'];
		$p_pairs = $query_row['p_pairs'];	//Production Pairs
		$temp1 = $query_row['temp1'];		//Injected Temperature_1
		$temp2 = $query_row['temp2'];		//Injected Temperature_2
		$temp3 = $query_row['temp3'];		//Injected Temperature_3
		$temp4 = $query_row['temp4'];		//Injected Temperature_4
		$temp5 = $query_row['temp5'];		//Injected Temperature_5
		$avg_current = $query_row['avg_current'];	//Average Current
		$avg_voltage= $query_row['avg_voltage'];		//Average Voltage
		$kw= $query_row['kw'];		//Wottage
		$kwh= $query_row['kwh'];		//Power
		
		//echo 'Ok.';
		echo $p_pairs.','.$temp1.','.$temp2.','.$temp3.','.$temp4.','.$temp5.','.$avg_current.','.$avg_voltage.','.$kw.','.$kwh."\n";
	}
}
?>
