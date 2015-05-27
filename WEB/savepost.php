<?php
include "koneksi.php";
$title = $_POST['title'];
$content1 = $_POST['content1'];
$content2 = $_POST['content2'];
$content3 = $_POST['content3'];
$dir = "contoh/";
$file1 = $dir.basename($_FILES['file1']['name']);
$temp_file	= $_FILES['file1']['tmp_name'];

$file2 = $dir.basename($_FILES['file2']['name']);
$temp_file2	= $_FILES['file2']['tmp_name'];

$file3 = $dir.basename($_FILES['file3']['name']);
$temp_file3	= $_FILES['file3']['tmp_name'];


$a = move_uploaded_file($temp_file, $file1);
$b = move_uploaded_file($temp_file2, $file2);
$c = move_uploaded_file($temp_file3, $file3);


if($a&&$b&&$c)
{
	$sql = "INSERT INTO beranda values('','$title','$content1','$content2','$content3','$file1','$file2','$file3')";
	$dbh->exec($sql);
	header("Location:admin.php");
}
else{
	$sql = "INSERT INTO beranda values('','$title','$content1','$content2','$content3','$file1','$file2','$file3')";
	$dbh->exec($sql);
	header("Location:admin.php");
}
?>