
<!DOCTYPE html>
<html>

<?php
echo "Access OK";
echo "<br>"; //newline


if (isset($_GET['ketinggian'])){
	$ketinggian = $_GET['ketinggian'];
	echo $ketinggian;
}
else{
	echo "Data not received";
}

//Connect to database
include ("koneksi.php");
if ($conn->connect_error) {
die("Connection failed: " . $conn->connect_error);
}

$sql = "INSERT INTO wifi (ketinggian)
VALUES (now(),'".$_GET["ketinggian"]."')";

if ($conn->query($sql) === TRUE) {
echo "<script type= 'text/javascript'>alert('New record created successfully');</script>";
} else {
echo "<script type= 'text/javascript'>alert('Error: " . $sql . "<br>" . $conn->error."');</script>";
}

$conn->close();

?>

?>

</html>