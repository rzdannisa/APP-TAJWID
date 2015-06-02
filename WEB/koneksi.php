<?php
$dsn = "mysql:dbname=nama_database;host=nama_host;charset=utf8";
$user = "nama_user";
$pass = "password_user";

try {
	$dbh= new PDO($dsn, $user, $pass);
} catch (PDOException $e) {
	echo "Koneksi ke database gagal :" .$e->getMessage();
}


$con = mysql_connect("nama_host","nama_user","password_user");
mysql_set_charset('utf8',$con);
mysql_select_db("nama_database",$con);

$mysqli = @new mysqli('nama_host', 'nama_user', 'password_user', 'nama_database');

if($mysqli->connect_errno) die('Connection Error!');
else{
    $mysqli->query("SET NAMES 'utf8'");
    $mysqli->query("SET CHARACTER SET utf8");
}


?>
