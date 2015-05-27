<?php
include 'koneksi.php';
  session_start();
  if(!isset($_SESSION['username'])){
  header("location:loginadmin.php");
}
header('Content-type: text/html; charset=utf-8');
?>
<?php
	include 'koneksi.php';
		if (isset($_GET['id'])) {
			$sql = $dbh->query("SELECT *FROM hukumtajwid where id = '$_GET[id]'");
			$data = $sql->fetch(PDO::FETCH_ASSOC);
								}
		else {
			echo "Post Tidak Ditemukan";
			}
?>
<html>
	<head>
		<link href="//netdna.bootstrapcdn.com/font-awesome/4.1.0/css/font-awesome.min.css" rel="stylesheet">
		<title>Edit Artikel</title>
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
				</ul>
				</div>
				<form class="searchh" method="POST" action="search.php">
			    <input class="search" type="text" name="search" PlaceHolder="    Cari. . . .">
			    </form>
			</div>
		<div class="body-m">
			<form action="editartikel.php"  method="POST"  enctype="multipart/form-data">
					<input type="hidden" name="id" value="<?php echo $_GET['id']; ?>">
					Nama Hukum <br>
					<input type="text" name="namahukum" required value="<?php echo $data['namahukum'];?>"/>
					</p><br>
					<p>
					Tingkat <br>
					<input type="text" name="tingkat" required value="<?php echo $data['tingkat'];?>"/>
					</p><br>
					<p>
					Tambahan<br>
					<textarea name="tambahan" cols="30" required><?php echo $data['tambahan'];?></textarea>
					</p><br>
					<p>
					<p>
					Penjelasan<br>
					<textarea name="penjelasan" cols="50" required><?php echo $data['penjelasan'];?></textarea>
					</p><br><br>
					<p>
					Tambahan<br>
					<img class="img-e" src="<?php echo $data['tambahan1'];?>"><br>
					<td><input type="file" name="tambahan1" required value="<?php echo $data['tambahan1'];?>"/></td><br><br>
					</p>
					<p>
					Contoh<br>
					<img class="img-e" src="<?php echo $data['contoh1'];?>"><br>
					<td><input type="file" name="file2" value="<?php echo $data['contoh1'];?>"><br></td><br>
					</p>
					<p>
					Contoh<br>
					<img class="img-e" src="<?php echo $data['contoh2'];?>"><br>
					<td><input type="file" name="file3" value="<?php echo $data['contoh2'];?>"/></td><br>
					</p><br>
					<p>
					Contoh<br>
					<td><input type="file" name="file4" value="<?php echo $data['contoh3'];?>"/></td>
					</p>
					<p><br>
					Suara<br><br>
					<audio class="au" controls><source src="<?php echo $data['suara1'];?>" type="audio/mp3"></audio><br><br>
					<td><input type="file" name="file5" value="<?php echo $data['suara1'];?>"></td>
					</p>
					<p><br>
					Suara<br><br>
					<audio class="au" controls><source src="<?php echo $data['suara2'];?>" type="audio/mp3"></audio><br><br>
					<td><input type="file" name="file6" /></td><br>
					</p>
					<p><br>
					Suara<br>
					<td><input type="file" name="file7" /></td>
					</p>
					<p>
					Suara<br>
					<td><input type="file" name="file8" /></td>
					</p>
					<br>
					<p>
					<button type="submit">Simpan </button>
					<button type="reset"><a href="admin.php">Batal</a></button>
					</p><br>
				</form>
				</div>
				</div>
<div class="footer">
				<?php
				include 'atb/footer.php';
				?>	
</div>
</html>