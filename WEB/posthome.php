<?php
session_start();
include 'koneksi.php';
if(isset($_SESSION['id'])){
if(isset($_GET['id'])){
$id=$_GET['id'];
}
if(empty($_GET['id'])){
$id=$_SESSION['id'];
}
?>

<html>
	<head>
		<link href="//netdna.bootstrapcdn.com/font-awesome/4.1.0/css/font-awesome.min.css" rel="stylesheet">
		<title>Belajar Tajwid - Admin Page</title>
		<link rel="stylesheet" href="css/css.css">
		<link rel="icon" type="image/png" href="atb/img/8.png">
	</head>
	<body>

	<div class="container">
	<div class="body">
		<div class="logo"><img src="css/bt.jpg"></div>
			<div class="header">
				<div class="menu-wrap">	
				<ul>
				<li><a href="tajwidt1.php">Hukum Tanwin & Nun Mati <i class="fa fa-chevron-down"></i></a>
					<ul>
					<li><a href="http://ariefsetya.com/p3m/atajwid/view.php?id=1">Ikhfa Haqiqi</a></li>
					<li><a href="http://ariefsetya.com/p3m/atajwid/view.php?id=21">Izhar Halqi</a></li>
					<li><a href="http://ariefsetya.com/p3m/atajwid/view.php?id=3">Izhar Mutlaq (Wajib)</a></li>
					<li><a href="http://ariefsetya.com/p3m/atajwid/view.php?id=4">Idgham Bighunnah</a></li>
					<li><a href="http://ariefsetya.com/p3m/atajwid/view.php?id=5">Idgham Bilaghunnah</a></li>
					<li><a href="http://ariefsetya.com/p3m/atajwid/view.php?id=6">Iqlab</a></li>
					</ul>
				</li>
				<li><a href="tajwidt2.php">Hukum Mad <i class="fa fa-chevron-down"></i></a>
					<ul>
					<li><a href="http://ariefsetya.com/p3m/atajwid/view.php?id=7">Mad Thobi'i</a></li>
					<li><a href="madfari.php">Mad Far'i</a>
					</li>
					</ul>
				</li>	
				<li><a href="tajwidt3.php">Hukum Mim Mati <i class="fa fa-chevron-down"></i></a>
					<ul>
					<li><a href="http://ariefsetya.com/p3m/atajwid/view.php?id=17">Ikhfa Syafawi</a></li>
					<li><a href="http://ariefsetya.com/p3m/atajwid/view.php?id=18">Izhar Syafawi</a></li>
					<li><a href="http://ariefsetya.com/p3m/atajwid/view.php?id=19">Idgham Mitslain (Mimi)</a></li>
					</ul>
				</li>	
				<li><a href="index.php">Home</a></li>
				<li><a href="about.php">About</a></li>
				<li><a href="update.php">Versi</a></li>
				<li><a href="logout.php">LogOut</a></li>
				<li><a href="posthome.php">Post</a></li>
				</ul>
			</div>

			<div class="body-ma">
				<form style="margin-left:70px;margin-top:40px;" action="savepost.php"  method="POST"  enctype="multipart/form-data">
					<br><br><br>
					Title <br>
					<input type="text" name="title" required/>
					</p><br>
					<p>
					Content 1<br>
					<textarea name="content1" cols="50" required></textarea>
					</p><br>
					<p>
					<p>
					Content 2<br>
					<textarea name="content2" cols="50" required></textarea>
					</p><br>
					<p>
					Content 3<br>
					<textarea name="content3" cols="50" required></textarea>
					</p><br>
					<p>
					<br>
					<td><input type="hidden" name="file1" /></td>
					</p>
					<p>
					<br>
					<td><input type="hidden" name="file2" /></td>
					</p>
					<p>
					<br>
					<td><input type="hidden" name="file3" /></td><br><br>
					</p>
					<button type="submit">Simpan </button>
					<button type="reset">Batal</button>
					</p><br>
				</form>
</div>
<br>
<div class="footer">
				<?php
				include 'atb/footer.php';
				?>	
</div>
</div>
</div>
</body>
</html>
<?php
}else{ 
header("Location:loginadmin.php"); 
}
?> 