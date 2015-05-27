<?php
		include 'koneksi.php';
		if (isset($_GET['id'])) {
			$sql = $dbh->prepare("SELECT *FROM hukumtajwid where id = '$_GET[id]'");
			$sql->execute();
			$data = $sql->fetch(PDO::FETCH_ASSOC);
		}else
			{
			header("Location:error.php");
		}if($data===false)
			{
				header("Location:error.php");
		}else if(!isset($_GET['id'])){
		header("location:error.php");
			}
			header('Content-type: text/html; charset=utf-8');
?>	
<html>
	<head>
		<link href="//netdna.bootstrapcdn.com/font-awesome/4.1.0/css/font-awesome.min.css" rel="stylesheet">
		<title>Belajar Tajwid - <?php echo $data['namahukum'];?></title>
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
				<p><a class="nh" href="view.php?id=<?php echo $data['id']; ?>"><?php echo $data['namahukum'];?></a></p><br><br>
				<p class="pju"><?php echo $data['penjelasan'];?><br><br>
				<center><h4><?php echo $data['tambahan'];?></h4><br><img class="gu" src="<?php echo $data['tambahan1'];?>"></center>
				<br><br>
				<h3>Contoh <?php echo $data['namahukum'];?></h3><br>
				<p><img class="g" src="<?php echo $data['contoh1'];?>"><br><br>
				<center><audio controls><source src="<?php echo $data['suara1'];?>" type="audio/mp3"></audio></center><br>
				<img class="g" src="<?php echo $data['contoh2'];?>">
				<center><audio controls><source src="<?php echo $data['suara2'];?>" type="audio/mp3"></audio></center><br>
				</p>
			<br>
	
	</div>
	<div class="footer">
				<?php
				include 'atb/footer.php';
				?>	
			</div>
	
</html>