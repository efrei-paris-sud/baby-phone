<?php
$yourdata = null;
foreach ($_REQUEST as $key => $value)
{
	if ($key == "yourdata") {
		$yourdata = $value;
	}
}

// EDIT: Your mysql database account information
$db_host = 'localhost';
$db_user = 'root';
$db_pwd = '';
$database = 'little_dream_sound';
$table = 'sound';

// Check Connection to Database
$connection = mysqli_connect($db_host,$db_user,$db_pwd);
if ($connection)
  {
  	@mysqli_select_db($connection, $database) or die ("Unable to select database");

    // Next two lines will write into your table 'test_table_name_here' with 'yourdata' value from the arduino and will timestamp that data using 'now()'
    $query = "INSERT INTO $table VALUES ('',$yourdata,now(),'')";
  	$result = mysqli_query($connection,$query);
  } else {
  	die("Database connection failed");
  }

?>