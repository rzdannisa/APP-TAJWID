<?php
include 'koneksi.php';

if(isset($_GET['id'])) {
	$dbh->exec("delete from hukumtajwid where id='$_GET[id]'");
}
header("location:admin.php");
?>