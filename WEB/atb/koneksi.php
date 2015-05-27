<?php
$dsn = "mysql:dbname=ariefset_arizda;host=174.120.70.217;charset=utf8";
$user = "ariefset_arizda";
$pass = "arizda";

try {
	$dbh= new PDO($dsn, $user, $pass);
} catch (PDOException $e) {
	echo "Koneksi ke database gagal :" .$e->getMessage();
}


$con = mysql_connect("174.120.70.217","ariefset_arizda","arizda");
mysql_set_charset('utf8',$con);
mysql_select_db("ariefset_arizda",$con);

$mysqli = @new mysqli('174.120.70.217', 'ariefset_arizda', 'arizda', 'ariefset_arizda');

if($mysqli->connect_errno) die('Connection Error!');
else{
    $mysqli->query("SET NAMES 'utf8'");
    $mysqli->query("SET CHARACTER SET utf8");
}


?>