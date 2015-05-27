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
			<div class="slide">
				<?php
				include 'atb/slide.php';
				?>
			</div>
			
			<div class="body-home">	
				<?php
				include 'atb/bodyhome.php';
				?>
			<div class="kisi">
				<div class="kisii">
					<h4>Hukum Tanwin dan Nun Mati</h4><br>
					Hukum tanwin dan nun mati merupakan hukum tajwid yang masih mendasar. Terdiri dari Iqlab, Idgham, Izhar, dan Ikhfa.<br><br>
					<br>
					<img class="ik" src="atb/img/nt.jpg">
				</div>
				<div class="kisii">
					<h4>Hukum Mad</h4><br>
					Hukum mad terbagi menjadi dua macam. Yaitu Mad Thobi'i dan Mad Far'i.<br><br><br>
					<br>
					<img class="ik" src="atb/img/mad.png">
				</div>
				<div class="kisii">
				<h4>Hukum Mim Mati</h4><br>
					Hukum Mim mati terdiri dari Ikhfa Syafawi, Izhar Syafawi dan Idgham Mitslain (Mimi).<br><br><br>
					<br>
					<img class="ik" src="atb/img/mim.png">
				</div>
			</div>

	</div>	
</body>
			
	</div><div class="footer">
				<?php
				include 'atb/footer.php';
				?>	
			</div>
	
</html>