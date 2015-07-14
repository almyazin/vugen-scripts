Action()
{

	web_url("WebTours", 
		"URL=http://localhost:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(1);

	web_submit_form("login.pl", 
		"Snapshot=t11.inf", 
		ITEMDATA, 
		"Name=username", "Value=qatest1", ENDITEM, 
		"Name=password", "Value=qatest1", ENDITEM, 
		"Name=login.x", "Value=47", ENDITEM, 
		"Name=login.y", "Value=5", ENDITEM, 
		LAST);

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t12.inf", 
		LAST);

	lr_think_time(1);

	web_submit_form("reservations.pl", 
		"Snapshot=t13.inf", 
		ITEMDATA, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=07/15/2015", ENDITEM, 
		"Name=arrive", "Value=Frankfurt", ENDITEM, 
		"Name=returnDate", "Value=07/16/2015", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=25", ENDITEM, 
		"Name=findFlights.y", "Value=6", ENDITEM, 
		LAST);

	lr_think_time(1);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t14.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=010;386;07/15/2015", ENDITEM, 
		"Name=reserveFlights.x", "Value=27", ENDITEM, 
		"Name=reserveFlights.y", "Value=6", ENDITEM, 
		LAST);

	lr_think_time(1);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t15.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Qa", ENDITEM, 
		"Name=lastName", "Value=Test1", ENDITEM, 
		"Name=address1", "Value=str", ENDITEM, 
		"Name=address2", "Value=cty", ENDITEM, 
		"Name=pass1", "Value=Qa, Test1", ENDITEM, 
		"Name=creditCard", "Value=12345678", ENDITEM, 
		"Name=expDate", "Value=12/17", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		"Name=buyFlights.x", "Value=7", ENDITEM, 
		"Name=buyFlights.y", "Value=7", ENDITEM, 
		LAST);

	web_image("Itinerary Button", 
		"Alt=Itinerary Button", 
		"Snapshot=t16.inf", 
		LAST);

	web_submit_form("itinerary.pl", 
		"Snapshot=t17.inf", 
		ITEMDATA, 
		"Name=1", "Value=<OFF>", ENDITEM, 
		"Name=removeAllFlights.x", "Value=51", ENDITEM, 
		"Name=removeAllFlights.y", "Value=11", ENDITEM, 
		LAST);

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t18.inf", 
		LAST);

	return 0;
}