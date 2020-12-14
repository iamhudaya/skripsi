<html>
<body>

<?php

$dbname = 'skripsi';
$dbuser = 'root';  
$dbpass = ''; 
$dbhost = 'localhost'; 

$connect = @mysqli_connect($dbhost,$dbuser,$dbpass,$dbname);

if(!$connect){
	echo "Error: " . mysqli_connect_error();
	exit();
}

$distance = $_GET["distance"]; 


$query = "INSERT INTO wifi (distance) VALUES ('$distance')";
$result = mysqli_query($connect,$query);

echo "Iloveyou " ."$distance". "<br><br>";

?>
</body>
</html>
