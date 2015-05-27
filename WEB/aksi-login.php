<?php
	session_start(); 		
	include 'koneksi.php'; 		
	$username=$_POST['username']; 	
	$password=$_POST['password']; 	
 
	$query=mysql_query("SELECT * from admin where username='$username' and password='$password'");	 
	$dbh=mysql_num_rows($query);	 
  	if(mysql_num_rows($query)==1){
	$hasil=mysql_fetch_array($query);
	$_SESSION['id'] = $hasil['id'];
	$_SESSION['username'] = $hasil['username'];
	$_SESSION['password'] = $hasil['password'];
		header("location:admin.php");     
	}else{   				
		
		?>
		<?php
		echo "gagal";
	}
?>