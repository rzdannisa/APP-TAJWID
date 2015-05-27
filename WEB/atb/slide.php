<script language="javascript">
					var image1=new Image()
					image1.src="atb/img/t3.jpg"
					var image2=new Image()
					image2.src="atb/img/t4.jpg"
					var image3=new Image()
					image3.src="atb/img/t5.jpeg"
					var image4=new Image()
					image4.src="atb/img/t7.jpg"
					var image4=new Image()
					image4.src="atb/img/t1.jpg"
					</script>
					</head>
					<body>
					<center>
					<img class="slides" src="img/1.jpg" name="slide">
					<script>
					var step=1
					function slideit(){
					if (!document.images)
					return
					document.images.slide.src=eval("image"+step+".src")
					if (step<5)
					step++
					else
					step=1
					setTimeout("slideit()",5000)
					}
					slideit()
</script>