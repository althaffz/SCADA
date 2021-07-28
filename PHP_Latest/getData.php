<?php

//http://dsi_scada.netne.net/getData.php?start=00000000000000&ending=20160107211000


define('HOST','mysql8.000webhost.com');
define('USER','a3477238_user');
define('PASS','123456abc');
define('DB','a3477238_data');

if($_SERVER['REQUEST_METHOD']=='GET'){
 $start = $_GET['start'];
 $ending  = $_GET['ending'];
}
 
$con = mysqli_connect(HOST,USER,PASS,DB);

	$sql = "select * from machine1 WHERE date_time between '$start' and '$ending'" ;
	$res = mysqli_query($con,$sql);
 
$result = array();//
while($row = mysqli_fetch_array($res)){
array_push($result,array('id'=>$row[0],'p_pairs'=>$row[1],'temp1'=>$row[2]  ,'temp2'=>$row[3],'temp3'=>$row[4],'temp4'=>$row[5],'temp5'=>$row[6],'avg_current'=>$row[7],'avg_voltage'=>$row[8],'kw'=>$row[9],'kwh'=>$row[10]));
}
 
echo json_encode(array("result"=>$result));
 
mysqli_close($con);

 
?>
