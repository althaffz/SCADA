<?PHP

$conn_error = 'could not connect!';

$mysql_host = "mysql7.000webhost.com";
$mysql_user = "a1768673_dsi";
$mysql_pass = "123456abc";

$mysql_db = "a1768673_dsi";

if (mysql_connect($mysql_host, $mysql_user, $mysql_pass)){
	if(mysql_select_db(mysql_db)){
		echo 'ok.';
	}
}else {
	die($conn_error);
}
?>