Login()
{
	web_reg_save_param_json(
		"ParamName=rgs_session_token",
		"QueryString=$.state.session_token",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);
	web_reg_save_param_json(
		"ParamName=state_tag",
		"QueryString=$.state.state_tag",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);
	web_reg_save_param_json(
		"ParamName=player_id",
		"QueryString=$.state.player_id",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);
	web_reg_save_param_json(
		"ParamName=partner_code",
		"QueryString=$.state.partner_code",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	web_rest("POST: https://nurgs.star9ad.com/ng/sessions/",
		"URL=https://nurgs.star9ad.com/ng/sessions/",
		"Method=POST",
		"EncType=raw",
		"Snapshot=t154723.inf",
		"Body={\r\n"
		"\"partner_token\": \"{partner_token}\",\r\n"
		"\"player_token\": \"{session_token}\",\r\n"
		"\"game_code\": \"NG-0063\",\r\n"
		"\"device\": \"DESKTOP\"\r\n"
		"}",
		HEADERS,
		"Name=Content-Type", "Value=application/json", ENDHEADER,
		"Name=Content-Type", "Value=application/json", ENDHEADER,
		LAST);

	return 0;
}