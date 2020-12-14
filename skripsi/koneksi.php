<?php 

$localhost = "localhost";
$user = "root";
$password = "";
$dbName = "skripsi";

$conn = mysqli_connect($localhost, $user, $password, $dbName);
if(!$conn){
	"Connection:Failed" .mysqli_connect_error();
}

?>