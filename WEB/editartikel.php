<?php
include 'koneksi.php';
  session_start();
  if(!isset($_SESSION['username'])){
  header("location:loginadmin.php");
}
$dir = "contoh/";
$tambahan1 = $dir.basename($_FILES['tambahan1']['name']);
$temp_file	= $_FILES['tambahan1']['tmp_name'];

$file2 = $dir.basename($_FILES['file2']['name']);
$temp_file2	= $_FILES['file2']['tmp_name'];

$file3 = $dir.basename($_FILES['file3']['name']);
$temp_file3	= $_FILES['file3']['tmp_name'];

$file4 = $dir.basename($_FILES['file4']['name']);
$temp_file4	= $_FILES['file4']['tmp_name'];

$file5 = $dir.basename($_FILES['file5']['name']);
$temp_file5	= $_FILES['file5']['tmp_name'];

$file6 = $dir.basename($_FILES['file6']['name']);
$temp_file6	= $_FILES['file6']['tmp_name'];

$file7 = $dir.basename($_FILES['file7']['name']);
$temp_file7	= $_FILES['file7']['tmp_name'];

$file8 = $dir.basename($_FILES['file8']['name']);
$temp_file8	= $_FILES['file8']['tmp_name'];

$a = move_uploaded_file($temp_file, $tambahan1);
$b = move_uploaded_file($temp_file2, $file2);
$c = move_uploaded_file($temp_file3, $file3);
$d = move_uploaded_file($temp_file4, $file4);
$e = move_uploaded_file($temp_file5, $file5);
$f = move_uploaded_file($temp_file6, $file6);
$g = move_uploaded_file($temp_file7, $file7);
$h = move_uploaded_file($temp_file8, $file8);

if($a&&$b&&$c&&$d&&$e&&$f&&$g&&$h)
{
	$sql = "update hukumtajwid set namahukum='$_POST[namahukum]',
									tingkat='$_POST[tingkat]',
									tambahan='$_POST[tambahan]',
									penjelasan='$_POST[penjelasan]',
									tambahan1= '$tambahan1',
									contoh1 = '$file2',
									contoh2 = '$file3',
									contoh3 = '$file4',
									suara1 = '$file5',
									suara2 = '$file6',
									suara3 = '$file7',
									suara4 = '$file8'
									where id= '$_POST[id]'";
	$dbh->exec($sql);
}
else{
	$sql = "update hukumtajwid set namahukum='$_POST[namahukum]',
									tingkat='$_POST[tingkat]',
									tambahan='$_POST[tambahan]',
									penjelasan='$_POST[penjelasan]',
									tambahan1= '$tambahan1',
									contoh1 = '$file2',
									contoh2 = '$file3',
									contoh3 = '$file4',
									suara1 = '$file5',
									suara2 = '$file6',
									suara3 = '$file7',
									suara4 = '$file8'
									where id= '$_POST[id]'";
	$dbh->exec($sql);
}
header ("location: admin.php");
?>