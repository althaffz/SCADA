<?PHP
require 'connect.inc.php';

$query = "SELECT 'p_pairs', 'temp1', 'temp2', 'temp3', 'temp4', 'temp5', 'avg_current', 'avg_voltage', 'kw', 'kwh' FROM 'machine1' ORDER BY 'id' DESC";

if($query_run = mysql_query($query)){
	while($query_row = mysql_fetch_assoc($query_run)){
		$p_pairs = $query_row('p_pairs');
		$temp1 = $query_row('temp1');
		$temp2 = $query_row('temp2');
		$temp3 = $query_row('temp3');
		$temp4 = $query_row('temp4');
		$temp5 = $query_row('temp5');
		$avg_current = $query_row('avg_current');
		$avg_voltage = $query_row('avg_voltage');
		$kw= $_GET["kw"];
		$kwh= $_GET["kwh"];
		
		echo 'p_pairs = ' .$p_pairs. ' temp1 = ' .$temp1. ' temp2 = ' .$temp2. ' temp3 = ' .$temp3. ' temp4 = ' .$temp4. ' temp5 = ' .$temp5. ' avg_current = ' .$avg_current. ' avg_voltage = ' .$avg_voltage. ' kw = ' .$kw. ' kwh = ' .$kwh. '<br>';
	}
}else{
	echo "Not connected.";
}
?>