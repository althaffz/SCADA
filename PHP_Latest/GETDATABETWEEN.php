<?php
define('HOST','mysql7.000webhost.com');
define('USER','a1768673_dsi');
define('PASS','123456abc');
define('DB','a1768673_dsi');

if($_SERVER['REQUEST_METHOD']=='GET'){
 //trackit.host22.com/get_data_api/getData.php?start=14037&ending=16000
 $start = $_GET['start'];
 $ending  = $_GET['ending'];
}
 
$con = mysqli_connect(HOST,USER,PASS,DB);
 
//$sql = "select * from device_1 WHERE date between '2015-12-09 10:12:44' and '2015-12-09 10:15:45'" ;/BUGGERRR/.DF,LSDGL;SDGKOSDKGP
	$sql = "select * from device_1 WHERE date_time between '$start' and '$ending'" ;
	$res = mysqli_query($con,$sql);
 
$result = array();//
while($row = mysqli_fetch_array($res)){
array_push($result,array('id'=>$row[0],'p_pairs'=>$row[1],'temp1'=>$row[2]  ,'temp2'=>$row[3],'temp3'=>$row[4],'temp4'=>$row[5],'temp5'=>$row[6],'avg_current'=>$row[7],'avg_voltage'=>$row[8],'kw'=>$row[9],'kwh'=>$row[10]));
}
 
echo json_encode(array("result"=>$result));
 
mysqli_close($con);






 
?>
