Spin()
{
	web_rest("POST: https://nurgs.star9ad.com/ng/take-turn/",
		"URL=https://nurgs.star9ad.com/ng/take-turn/",
		"Method=POST",
		"EncType=raw",
		"Snapshot=t941977.inf",
		"Body={\r\n"
		"\"player_id\": \"{player_id}\",\r\n"
		"\"partner_code\": \"{partner_code}\",\r\n"
		"\"game_code\": \"NG-0063\",\r\n"
		"\"action\": \"SPIN\",\r\n"
		"\"session_token\": \"{rgs_session_token}\",\r\n"
		"\"state_tag\":\"{state_tag}\",\r\n"
		"\"bet_denom_index\": 1\r\n"
		"}",
		HEADERS,
		"Name=Content-Type", "Value=application/json", ENDHEADER,
		LAST);

	return 0;
}
