Get_Wallet_Session_Token()
{
	web_reg_save_param_json(
		"ParamName=session_token",
		"QueryString=$.session_token",
		"SelectAll=No",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	
	web_rest("GET: https://krug-gw-colo.star9ad.com/m4/wallet/balance...",
		"URL=https://krug-gw-colo.star9ad.com/m4/wallet/balance/{player_id}",
		"Method=GET",
		"Snapshot=t839631.inf",
		HEADERS,
		"Name=X-Genesis-PartnerToken", "Value={partner_token}", ENDHEADER,
		"Name=X-Genesis-Secret", "Value={secert_key}", ENDHEADER,
		"Name=Content", "Value=application/json", ENDHEADER,
		LAST);

	return 0;
}
