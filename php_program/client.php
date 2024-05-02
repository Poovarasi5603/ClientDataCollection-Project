<?php
$filePath = "E:\code\c++\client_data\data.txt";
$servername = "localhost";
$username   = "root";
$password   = "root";

$report = "";

function phpReadFile($filename){
$myfile = fopen($filename, "r") or die("Unable to open file!");
$filecontent = fread($myfile, filesize($filename));
fclose($myfile);
return $filecontent;
}

//echo nl2br(phpReadFile("shapes.txt"));



$report = "";
$report .= "<html><body>";
$report .= "<br>";
$report .= "Hi,</br></br><h3><pre>Below I have given the REPORT      </pre> ";

$report .= "<table border=2 bordercolor='red' align='center' bgcolor='pink' col width=600 width='5000000000000000000'>";
$report .= "<tr>";
$report .= "<tr>";
$report .= "<th bgcolor='#ffcccc'>Consolidated client details</th>";
$report .= "</tr>";
$report .= "<tr>";

$report .= "<tr>";

$report .= "<td align = 'center' bgcolor='#ccffff'>" . nl2br(phpReadFile($filePath)) . "</td>";
$report .= "</tr>";

		
$report .= "</table>";
$report .= "</body></html>";

 print $report;

 