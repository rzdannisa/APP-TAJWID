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
header('Content-type: text/html; charset=utf-8');
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
				<li><a href="tajwidt1.php">H. Tanwin & Nun Mati <i class="fa fa-chevron-down"></i></a>
					<ul>
					<li><a href="http://ariefsetya.com/p3m/atajwid/view.php?id=1">Ikhfa Haqiqi</a></li>
					<li><a href="http://ariefsetya.com/p3m/atajwid/view.php?id=21">Izhar Halqi</a></li>
					<li><a href="http://ariefsetya.com/p3m/atajwid/view.php?id=3">Izhar Mutlaq (Wajib)</a></li>
					<li><a href="http://ariefsetya.com/p3m/atajwid/view.php?id=4">Idgham Bighunnah</a></li>
					<li><a href="http://ariefsetya.com/p3m/atajwid/view.php?id=5">Idgham Bilaghunnah</a></li>
					<li><a href="http://ariefsetya.com/p3m/atajwid/view.php?id=6">Iqlab</a></li>
					</ul>
				</li>
				<li><a href="tajwidt2.php">H. Mad <i class="fa fa-chevron-down"></i></a>
					<ul>
					<li><a href="http://ariefsetya.com/p3m/atajwid/view.php?id=7">Mad Thobi'i</a></li>
					<li><a href="madfari.php">Mad Far'i</a>
					</li>
					</ul>
				</li>	
				<li><a href="tajwidt3.php">H. Mim Mati <i class="fa fa-chevron-down"></i></a>
					<ul>
					<li><a href="http://ariefsetya.com/p3m/atajwid/view.php?id=17">Ikhfa Syafawi</a></li>
					<li><a href="http://ariefsetya.com/p3m/atajwid/view.php?id=18">Izhar Syafawi</a></li>
					<li><a href="http://ariefsetya.com/p3m/atajwid/view.php?id=19">Idgham Mitslain (Mimi)</a></li>
					</ul>
				</li>	
				<li><a href="index.php">Home</a></li>
				<li><a href="about.php">About</a></li>
				<li><a href="update.php">Versi</a></li>
				<li><a href="posthome.php">Post</a></li>
				<li><a href="logout.php">LogOut</a></li>				
				</ul>
				</div>
			</div>
			
<div class="body-ma">
<table>
<thead>
	<tr>
	<th>No</th>
	<th>Nama Hukum</th>
	<th>Tingkat</th>
	<th>Penjelasan</th>
	<th>Image</th>
	<th>Action</th>
	</tr>
</thead>

<tbody>
<?php
$sql = "select *from hukumtajwid order by id";
$no=1;
foreach ($dbh->query($sql) as $data) :
?>
<tr>
<td><?php echo $no++;?></td>
<td><?php echo $data['namahukum'];?></td>
<td><?php echo $data['tingkat'];?></td>
<td><?php echo substr($data['penjelasan'], 0, 50); echo "....";?></td>
<td><img style="width:50px; heigth: 45px;" src="<?php echo $data['contoh1'];?>"></td>
<td align="center">
<a class="mm" href="delete.php?id=<?php echo $data['id'];?>"onclick="return confirm('Hapus Data?')"><i style="color: #999999; font-size: 12pt;" class="fa fa-trash-o"> </i></a>
<a class="mm" href="edit.php?id=<?php echo $data['id'];?>"><i style="color: #999999; font-size: 12pt;"class="fa fa-pencil"> </i></a>
<a class="mm" href="view.php?id=<?php echo $data['id'];?>"><i style="color: #999999; font-size: 12pt;" class="fa fa-eye"> </i></a>
</td>
</tr>
<?php
endforeach;
?>
</tbody>
</table>
<div style="margin-left:30px;margin-top:30px;" class="mk">
<h3>Buat artikel baru...</h3><br>
<?php
include'makeartikel.php';
?>
</div><br>

</div>
</div>

<div class="footer">
<?php
include 'atb/footer.php';
?>	
</div></div>
</div>
</body>
</html>
<?php
}else{ 
header("Location:loginadmin.php"); 
}
?> 