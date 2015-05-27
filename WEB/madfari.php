<?php
include 'koneksi.php';
header('Content-type: text/html; charset=utf-8');
?>
<html>
	<head>
		<link href="//netdna.bootstrapcdn.com/font-awesome/4.1.0/css/font-awesome.min.css" rel="stylesheet">
		<title>Belajar Tajwid</title>
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
		<h2> Kategori : Mad Far'i</h2>
	<?php
	$sql = "select *from hukumtajwid where tingkat=2 && id!=7";
	foreach ($dbh->query($sql) as $data):
	?>
			<div class="mt2">
				<p><a class="nh" href="view.php?id=<?php echo $data['id']; ?>"><?php echo $data['namahukum'];?>
				<img class="gh" src="<?php echo $data['contoh2'];?>"></a></p><br><br>
				<p class="pj"><?php echo substr ($data['penjelasan'],0,300); echo  "....";?><br><br><br>
				<a class="mm" href="view.php?id=<?php echo $data['id']; ?>">Read More <i class="fa fa-angle-double-right"></i></a></p>
			</div><br>
	<?php
	endforeach;
	?>

	
	</div>

	<div class="footer">
				<?php
				include 'atb/footer.php';
				?>	
	</div>

	</div>
	</div>
	</div>
</html>