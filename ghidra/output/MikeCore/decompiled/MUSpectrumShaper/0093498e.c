// Function: FUN_0093498e
// Address: 0093498e
// Size: 11843 bytes
// Class: MUSpectrumShaper
// String references:
//   "publisherId"
//   "authId"
//   "issuerId"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "The AuthChain from the caller is empty"
//   "verifyAuth requires an encrypted channel setup with openLicenseDaemonEncryptedChannel or openQuickL...
//   "The AuthChain's internalReference (the license database uuid string) is empty"
//   "Can't verify an authChain that is marked as not authorized."
//   "iLok1 VerifyAuth: Not authorized"
//   "Not Authorized & MasterTime for location %s//%X is ahead of the computer time."
//   "void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuth...
//   "Could not get a vector of Licenses"
//   "The target auth (uuid: %s) was not found in any license"
//   "The target auth (uuid: %s) was found in multiple licenses"
//   "Could not get a pointer to the License for the target auth (uuid: %s) "
//   "The license containing the target auth (uuid: %s) has a signature that does not verify"
//   "The license containing the target auth (uuid: %s) was signed by an invalid issuer (ID:0x%08X)"
//   "The license containing the target auth (uuid: %s) was not found in the license"
//   "An external parent auth (a:0x%08X, p:0x%08X, i:0x%08X) was not found in any license"
//   "Could not get a pointer to the License for the auth (a:0x%08X, p:0x%08X, i:0x%08X)"
//   ... +9 more


void FUN_0093498e(undefined8 param_1,string *param_2,longlong param_3,undefined **param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  string *psVar7;
  char *pcVar8;
  undefined8 *puVar9;
  char *pcVar10;
  string *psVar11;
  longlong lVar12;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_res8;
  longlong *local_res10;
  longlong *local_res18;
  undefined8 local_2dd0;
  undefined *local_2dc0;
  string *local_2db8;
  code *local_2db0;
  undefined8 local_2da8;
  undefined8 local_2da0;
  uint local_2d98;
  undefined4 uStack_2d94;
  undefined4 local_2d90;
  undefined4 uStack_2d8c;
  undefined4 local_2d88;
  undefined4 uStack_2d84;
  undefined4 local_2d80;
  undefined4 uStack_2d7c;
  uint local_2d78;
  undefined4 uStack_2d74;
  undefined4 local_2d70;
  undefined4 uStack_2d6c;
  undefined4 local_2d68;
  undefined4 uStack_2d64;
  undefined4 local_2d60;
  undefined4 uStack_2d5c;
  undefined8 local_2d58;
  undefined8 local_2d50;
  undefined8 local_2d48;
  undefined8 local_2d40;
  undefined1 local_2d38;
  undefined4 local_2d34;
  undefined *local_2d30;
  undefined8 local_2d28;
  undefined8 local_2d20;
  undefined8 local_2d18;
  undefined8 local_2d10;
  undefined8 local_2d08;
  undefined8 local_2d00;
  undefined4 local_2cf8;
  undefined8 local_2cf0;
  undefined8 local_2ce8;
  undefined8 local_2ce0;
  undefined8 local_2cd8;
  undefined8 local_2cd0;
  undefined8 local_2cc8;
  undefined8 local_2cc0;
  undefined8 local_2cb8;
  undefined8 local_2cb0;
  undefined8 local_2ca8;
  undefined8 local_2ca0;
  undefined8 local_2c98;
  undefined8 local_2c90;
  undefined4 local_2c88;
  undefined8 local_2c80;
  undefined8 local_2c78;
  undefined8 local_2c70;
  undefined8 local_2c68;
  undefined8 local_2c60;
  undefined8 local_2c58;
  undefined8 local_2c50;
  undefined8 local_2c48;
  undefined8 local_2c40;
  undefined8 local_2c38;
  undefined8 local_2c30;
  undefined1 local_2c28;
  undefined4 local_2c20;
  undefined1 local_2c1c;
  undefined8 local_2c18;
  undefined8 local_2c10;
  undefined8 local_2c08;
  undefined8 local_2c00;
  undefined *local_2bf8;
  undefined8 local_2bf0;
  undefined8 local_2be8;
  undefined8 local_2be0;
  undefined8 local_2bd8;
  undefined8 local_2bd0;
  undefined8 local_2bc8;
  undefined8 local_2bc0;
  undefined8 local_2bb8;
  undefined8 local_2bb0;
  undefined8 local_2ba8;
  undefined8 local_2ba0;
  undefined8 local_2b98;
  undefined8 local_2b90;
  undefined2 local_2b88;
  undefined1 local_2b86;
  undefined4 local_2b85;
  undefined2 local_2b81;
  undefined1 local_2b7f;
  undefined8 local_2b78;
  undefined8 local_2b70;
  undefined8 local_2b68;
  undefined8 local_2b60;
  undefined8 local_2b58;
  undefined7 uStack_2b50;
  undefined1 local_2b49;
  undefined7 uStack_2b48;
  undefined8 local_2b41;
  undefined4 local_2b39;
  undefined *local_2b30;
  undefined8 local_2b28;
  undefined8 local_2b20;
  undefined8 local_2b18;
  undefined4 local_2b10;
  undefined *local_1200;
  undefined *local_11f8;
  undefined8 local_11f0;
  undefined8 local_11e8;
  undefined8 local_11e0;
  undefined2 local_11d8;
  undefined1 local_11d6;
  undefined *local_1130;
  undefined *local_1128;
  undefined8 local_1120;
  undefined8 local_1118;
  undefined8 local_1110;
  undefined8 *local_1108;
  undefined8 local_1100;
  undefined8 local_10f8;
  undefined4 local_10f0;
  undefined2 local_10ec;
  undefined1 local_10ea;
  undefined8 local_10e8;
  undefined8 local_10e0;
  undefined8 local_10d8;
  undefined2 local_10d0;
  undefined *local_10c8;
  undefined *local_10c0;
  undefined8 local_10b8;
  undefined8 local_10b0;
  undefined8 local_10a8;
  undefined8 *local_10a0;
  undefined8 local_1098;
  undefined8 local_1090;
  undefined4 local_1088;
  undefined2 local_1084;
  undefined1 local_1082;
  undefined8 local_1080;
  undefined8 local_1078;
  undefined8 local_1070;
  undefined2 local_1068;
  undefined *local_1060;
  undefined *local_1058;
  undefined8 local_1050;
  undefined8 local_1048;
  undefined8 local_1040;
  undefined8 *local_1038;
  undefined8 local_1030;
  undefined8 local_1028;
  undefined4 local_1020;
  undefined2 local_101c;
  undefined1 local_101a;
  undefined8 local_1018;
  undefined8 local_1010;
  undefined8 local_1008;
  undefined2 local_1000;
  undefined *local_ff8;
  undefined *local_ff0;
  undefined8 local_fe8;
  undefined8 local_fe0;
  undefined8 local_fd8;
  undefined8 *local_fd0;
  undefined8 local_fc8;
  undefined8 local_fc0;
  undefined4 local_fb8;
  undefined2 local_fb4;
  undefined1 local_fb2;
  undefined8 local_fb0;
  undefined8 local_fa8;
  undefined8 local_fa0;
  undefined2 local_f98;
  undefined *local_f90;
  undefined *local_f88;
  undefined8 local_f80;
  undefined8 local_f78;
  undefined8 local_f70;
  undefined8 *local_f68;
  undefined8 local_f60;
  undefined8 local_f58;
  undefined4 local_f50;
  undefined2 local_f4c;
  undefined1 local_f4a;
  undefined8 local_f48;
  undefined8 local_f40;
  undefined8 local_f38;
  undefined2 local_f30;
  undefined *local_f28;
  undefined *local_f20;
  undefined8 local_f18;
  undefined8 local_f10;
  undefined8 local_f08;
  undefined8 *local_f00;
  undefined8 local_ef8;
  undefined8 local_ef0;
  undefined4 local_ee8;
  undefined2 local_ee4;
  undefined1 local_ee2;
  undefined8 local_ee0;
  undefined8 local_ed8;
  undefined8 local_ed0;
  undefined2 local_ec8;
  undefined *local_ec0;
  undefined *local_eb8;
  undefined8 local_eb0;
  undefined8 local_ea8;
  undefined8 local_ea0;
  undefined8 *local_e98;
  undefined8 local_e90;
  undefined8 local_e88;
  undefined4 local_e80;
  undefined2 local_e7c;
  undefined1 local_e7a;
  undefined8 local_e78;
  undefined8 local_e70;
  undefined8 local_e68;
  undefined2 local_e60;
  undefined *local_e58;
  undefined *local_e50;
  undefined8 local_e48;
  undefined8 local_e40;
  undefined8 local_e38;
  undefined8 *local_e30;
  undefined8 local_e28;
  undefined8 local_e20;
  undefined4 local_e18;
  undefined2 local_e14;
  undefined1 local_e12;
  undefined8 local_e10;
  undefined8 local_e08;
  undefined8 local_e00;
  undefined2 local_df8;
  undefined *local_df0;
  undefined *local_de8;
  undefined8 local_de0;
  undefined8 local_dd8;
  undefined8 local_dd0;
  undefined8 *local_dc8;
  undefined8 local_dc0;
  undefined8 local_db8;
  undefined4 local_db0;
  undefined2 local_dac;
  undefined1 local_daa;
  undefined8 local_da8;
  undefined8 local_da0;
  undefined8 local_d98;
  undefined2 local_d90;
  undefined *local_d88;
  undefined *local_d80;
  undefined8 local_d78;
  undefined8 local_d70;
  undefined8 local_d68;
  undefined8 *local_d60;
  undefined8 local_d58;
  undefined8 local_d50;
  undefined4 local_d48;
  undefined2 local_d44;
  undefined1 local_d42;
  undefined8 local_d40;
  undefined8 local_d38;
  undefined8 local_d30;
  undefined2 local_d28;
  undefined *local_d20;
  undefined *local_d18;
  undefined8 local_d10;
  undefined8 local_d08;
  undefined8 local_d00;
  undefined8 *local_cf8;
  undefined8 local_cf0;
  undefined8 local_ce8;
  undefined4 local_ce0;
  undefined2 local_cdc;
  undefined1 local_cda;
  undefined8 local_cd8;
  undefined8 local_cd0;
  undefined8 local_cc8;
  undefined2 local_cc0;
  undefined *local_cb8;
  undefined *local_cb0;
  undefined8 local_ca8;
  undefined8 local_ca0;
  undefined8 local_c98;
  undefined8 *local_c90;
  undefined8 local_c88;
  undefined8 local_c80;
  undefined4 local_c78;
  undefined2 local_c74;
  undefined1 local_c72;
  undefined8 local_c70;
  undefined8 local_c68;
  undefined8 local_c60;
  undefined2 local_c58;
  undefined *local_c50;
  undefined *local_c48;
  undefined8 local_c40;
  undefined8 local_c38;
  undefined8 local_c30;
  undefined8 *local_c28;
  undefined8 local_c20;
  undefined8 local_c18;
  undefined4 local_c10;
  undefined2 local_c0c;
  undefined1 local_c0a;
  undefined8 local_c08;
  undefined8 local_c00;
  undefined8 local_bf8;
  undefined2 local_bf0;
  undefined *local_be8;
  undefined *local_be0;
  undefined8 local_bd8;
  undefined8 local_bd0;
  undefined8 local_bc8;
  undefined8 *local_bc0;
  undefined8 local_bb8;
  undefined8 local_bb0;
  undefined4 local_ba8;
  undefined2 local_ba4;
  undefined1 local_ba2;
  undefined8 local_ba0;
  undefined8 local_b98;
  undefined8 local_b90;
  undefined2 local_b88;
  undefined *local_b80;
  undefined *local_b78;
  undefined8 local_b70;
  undefined8 local_b68;
  undefined8 local_b60;
  undefined8 *local_b58;
  undefined8 local_b50;
  undefined8 local_b48;
  undefined4 local_b40;
  undefined2 local_b3c;
  undefined1 local_b3a;
  undefined8 local_b38;
  undefined8 local_b30;
  undefined8 local_b28;
  undefined2 local_b20;
  undefined *local_b18;
  undefined *local_b10;
  undefined8 local_b08;
  undefined8 local_b00;
  undefined8 local_af8;
  undefined8 *local_af0;
  undefined8 local_ae8;
  undefined8 local_ae0;
  undefined4 local_ad8;
  undefined2 local_ad4;
  undefined1 local_ad2;
  undefined8 local_ad0;
  undefined8 local_ac8;
  undefined8 local_ac0;
  undefined2 local_ab8;
  undefined *local_ab0;
  undefined *local_aa8;
  undefined8 local_aa0;
  undefined8 local_a98;
  undefined8 local_a90;
  undefined8 *local_a88;
  undefined8 local_a80;
  undefined8 local_a78;
  undefined4 local_a70;
  undefined2 local_a6c;
  undefined1 local_a6a;
  undefined8 local_a68;
  undefined8 local_a60;
  undefined8 local_a58;
  undefined2 local_a50;
  undefined *local_a48;
  undefined *local_a40;
  undefined8 local_a38;
  undefined8 local_a30;
  undefined8 local_a28;
  undefined8 *local_a20;
  undefined8 local_a18;
  undefined8 local_a10;
  undefined4 local_a08;
  undefined2 local_a04;
  undefined1 local_a02;
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined8 local_9f0;
  undefined2 local_9e8;
  undefined *local_9e0;
  undefined *local_9d8;
  undefined8 local_9d0;
  undefined8 local_9c8;
  undefined8 local_9c0;
  undefined8 *local_9b8;
  undefined8 local_9b0;
  undefined8 local_9a8;
  undefined4 local_9a0;
  undefined2 local_99c;
  undefined1 local_99a;
  undefined8 local_998;
  undefined8 local_990;
  undefined8 local_988;
  undefined2 local_980;
  undefined *local_978;
  undefined *local_970;
  undefined8 local_968;
  undefined8 local_960;
  undefined8 local_958;
  undefined8 *local_950;
  undefined8 local_948;
  undefined8 local_940;
  undefined4 local_938;
  undefined2 local_934;
  undefined1 local_932;
  undefined8 local_930;
  undefined8 local_928;
  undefined8 local_920;
  undefined2 local_918;
  undefined *local_910;
  undefined *local_908;
  undefined8 local_900;
  undefined8 local_8f8;
  undefined8 local_8f0;
  undefined8 *local_8e8;
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined4 local_8d0;
  undefined2 local_8cc;
  undefined1 local_8ca;
  undefined8 local_8c8;
  undefined8 local_8c0;
  undefined8 local_8b8;
  undefined2 local_8b0;
  undefined *local_8a8;
  undefined *local_8a0;
  undefined8 local_898;
  undefined8 local_890;
  undefined8 local_888;
  undefined8 *local_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined4 local_868;
  undefined2 local_864;
  undefined1 local_862;
  undefined8 local_860;
  undefined8 local_858;
  undefined8 local_850;
  undefined2 local_848;
  undefined *local_840;
  undefined *local_838;
  undefined8 local_830;
  undefined8 local_828;
  undefined8 local_820;
  undefined8 *local_818;
  undefined8 local_810;
  undefined8 local_808;
  undefined4 local_800;
  undefined2 local_7fc;
  undefined1 local_7fa;
  undefined8 local_7f8;
  undefined8 local_7f0;
  undefined8 local_7e8;
  undefined2 local_7e0;
  undefined *local_7d8;
  undefined *local_7d0;
  undefined8 local_7c8;
  undefined8 local_7c0;
  undefined8 local_7b8;
  undefined8 *local_7b0;
  undefined8 local_7a8;
  undefined8 local_7a0;
  undefined4 local_798;
  undefined2 local_794;
  undefined1 local_792;
  undefined8 local_790;
  undefined8 local_788;
  undefined8 local_780;
  undefined2 local_778;
  undefined *local_770;
  undefined *local_768;
  undefined8 local_760;
  undefined8 local_758;
  undefined8 local_750;
  undefined8 *local_748;
  undefined8 local_740;
  undefined8 local_738;
  undefined4 local_730;
  undefined2 local_72c;
  undefined1 local_72a;
  undefined8 local_728;
  undefined8 local_720;
  undefined8 local_718;
  undefined2 local_710;
  undefined *local_708;
  undefined *local_700;
  undefined8 local_6f8;
  undefined8 local_6f0;
  undefined8 local_6e8;
  undefined8 *local_6e0;
  undefined8 local_6d8;
  undefined8 local_6d0;
  undefined4 local_6c8;
  undefined2 local_6c4;
  undefined1 local_6c2;
  undefined8 local_6c0;
  undefined8 local_6b8;
  undefined8 local_6b0;
  undefined2 local_6a8;
  undefined *local_6a0;
  undefined *local_698;
  undefined8 local_690;
  undefined8 local_688;
  undefined8 local_680;
  undefined8 *local_678;
  undefined8 local_670;
  undefined8 local_668;
  undefined4 local_660;
  undefined2 local_65c;
  undefined1 local_65a;
  undefined8 local_658;
  undefined8 local_650;
  undefined8 local_648;
  undefined2 local_640;
  undefined *local_638;
  undefined *local_630;
  undefined8 local_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined8 *local_610;
  undefined8 local_608;
  undefined8 local_600;
  undefined4 local_5f8;
  undefined2 local_5f4;
  undefined1 local_5f2;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined2 local_5d8;
  undefined *local_5d0;
  undefined *local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 *local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined4 local_590;
  undefined2 local_58c;
  undefined1 local_58a;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined2 local_570;
  undefined *local_568;
  undefined *local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 *local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined4 local_528;
  undefined2 local_524;
  undefined1 local_522;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined2 local_508;
  string *local_500;
  undefined *local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 *local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined2 local_4bc;
  undefined1 local_4ba;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined2 local_4a0;
  undefined1 local_498;
  undefined4 uStack_497;
  undefined3 uStack_493;
  undefined2 local_490;
  undefined8 local_48e;
  undefined8 local_486;
  undefined7 local_47e;
  undefined1 uStack_477;
  undefined7 uStack_476;
  undefined4 local_468;
  undefined2 local_464;
  undefined *local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined *local_440;
  undefined4 local_438;
  undefined8 local_430;
  undefined4 local_428;
  undefined2 local_424;
  undefined1 local_422;
  undefined2 local_420;
  longlong *local_418;
  undefined1 local_410;
  longlong local_408;
  longlong local_400;
  longlong local_3f0;
  longlong local_3e8;
  longlong local_3d8;
  longlong lStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 *local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined *local_398;
  undefined *puStack_390;
  undefined8 local_388;
  uint local_360;
  uint uStack_35c;
  undefined4 local_358;
  undefined1 uStack_354;
  code *local_340;
  code *local_338;
  undefined8 local_330;
  code *local_328;
  code *local_320;
  undefined8 local_318;
  undefined8 local_310;
  code *local_308;
  undefined *local_300;
  undefined *local_2f8;
  undefined *local_2f0;
  undefined *local_2e8;
  undefined *local_2e0;
  undefined *local_2d8;
  undefined *local_2d0;
  undefined *local_2c8;
  undefined *local_2c0;
  undefined *local_2b8;
  undefined *local_2b0;
  undefined *local_2a8;
  undefined *local_2a0;
  undefined *local_298;
  undefined *local_290;
  undefined *local_288;
  undefined *local_280;
  undefined *local_278;
  undefined *local_270;
  undefined *local_268;
  undefined *local_260;
  undefined *local_258;
  undefined *local_250;
  undefined *local_248;
  undefined *local_240;
  undefined *local_238;
  undefined *local_230;
  undefined *local_228;
  undefined *local_220;
  undefined *local_218;
  undefined *local_210;
  undefined *local_208;
  undefined *local_200;
  undefined *local_1f8;
  string *local_1f0;
  undefined **local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong *plStack_1d0;
  undefined8 local_1c8;
  longlong *plStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  longlong local_198;
  longlong *local_190;
  longlong local_188;
  longlong *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  ulonglong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong local_138;
  longlong lStack_130;
  undefined8 local_128;
  string *local_118;
  longlong local_110;
  longlong local_108;
  longlong lStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  string *local_b8;
  undefined **local_b0;
  ulonglong local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  undefined *local_90;
  longlong local_88;
  int local_7c;
  code *local_78;
  undefined8 local_64;
  uint local_5c;
  undefined8 local_58;
  uint local_4c;
  code *local_48;
  code *pcStack_40;
  code *local_38;
  
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  local_1a8 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_c8 = 0;
  local_d8 = 0;
  lStack_d0 = 0;
  local_3b8 = &local_3b0;
  local_3a8 = 0;
  local_3b0 = 0;
  local_3d8 = 0;
  lStack_3d0 = 0;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_64._6_1_ = '\0';
  local_64._7_1_ = '\x01';
  local_98 = (undefined1 *)0x0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_148 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_7c = 0;
  local_1e0 = param_1;
  local_110 = param_3;
  local_b8 = param_2;
  local_b0 = param_4;
  if (*(longlong *)(unaff_RSI + 0x10) == *(longlong *)(unaff_RSI + 8)) {
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                          ,0x3cb2);
    FUN_009bd14b(uVar13,uVar6);
  }
  if (*(char *)(unaff_RSI + 0x20) == '\0') {
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                          ,0x3cb9);
    FUN_009bd14b(uVar13,uVar6);
  }
  if ((local_b8[0xf] != (string)0x0) &&
     ((FUN_0092e102(), *(char *)((longlong)unaff_RDI + 0x195) == '\0' ||
      (*(char *)((longlong)unaff_RDI + 0x17b) == '\0')))) {
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                          ,0x3cc2);
    FUN_009bd14b(uVar13,uVar6);
  }
  local_460 = &DAT_02517678;
  psVar7 = (string *)0x0;
  local_458 = 0;
  local_450 = 0;
  local_448 = 0;
  local_440 = &DAT_0251cd00;
  local_430 = 0;
  local_424 = 1;
  local_422 = 1;
  local_438 = 1;
  local_428 = 0;
  local_420 = 0;
  psVar11 = (string *)(local_res18[1] - *local_res18);
  if (psVar11 == (string *)0x0) {
    FUN_008911e2();
    std::string::operator=(psVar7,psVar11);
  }
  else {
    std::string::assign((char *)0x0,(ulong)psVar11);
  }
  local_418 = unaff_RDI + 3;
  local_410 = 0;
  FUN_009b4e10();
  if (unaff_RDI[0xe] == 0) {
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                          ,0x3cdd);
    FUN_009bd14b(uVar13,uVar6);
  }
  local_198 = unaff_RDI[1];
  local_190 = (longlong *)unaff_RDI[2];
  if (local_190 != (longlong *)0x0) {
    LOCK();
    local_190[1] = local_190[1] + 1;
    UNLOCK();
  }
  pcVar8 = (char *)(ulonglong)*(uint *)(unaff_RDI + 0xd);
  local_188 = unaff_RDI[0xe];
  local_180 = (longlong *)unaff_RDI[0xf];
  if (local_180 != (longlong *)0x0) {
    LOCK();
    local_180[1] = local_180[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_00975dba(pcVar8,&local_460,&local_188);
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_180 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*local_180 + 0x10))();
      uVar13 = std::__shared_weak_count::__release_weak();
    }
  }
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_190 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*local_190 + 0x10))();
      uVar13 = std::__shared_weak_count::__release_weak();
    }
  }
  FUN_008ce95a(uVar13,local_2dd0);
  lVar12 = *(longlong *)(*(longlong *)(unaff_RSI + 8) + 0x20) -
           *(longlong *)(*(longlong *)(unaff_RSI + 8) + 0x18);
  if (lVar12 == 0) {
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    pcVar8 = 
    "void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
    ;
    uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                          ,0x3cee);
    FUN_009bd14b(uVar13,uVar6);
  }
  std::string::assign(pcVar8,(ulong)lVar12);
  local_4c = 0;
  local_5c = 0;
  local_64._0_4_ = 0;
  local_e8 = FUN_0094c1c0();
  local_398 = (undefined *)CONCAT44(local_398._4_4_,0xfffffffe);
  local_1200 = (undefined *)0x7ffffffffffffffe;
  pcVar8 = (char *)&local_1200;
  FUN_00953fa0(extraout_XMM0_Da,(string *)&local_1200);
  local_90 = local_2dc0;
  local_300 = &DAT_0251a230;
  local_2f8 = &DAT_0251a298;
  local_2f0 = &DAT_02529a68;
  local_2e8 = &DAT_02528fc0;
  local_2e0 = &DAT_02528f58;
  local_2d8 = &DAT_02529018;
  local_2d0 = &DAT_02529070;
  local_2c8 = &DAT_025290c8;
  local_2c0 = &DAT_02529120;
  local_2b8 = &DAT_02529178;
  local_2b0 = &DAT_025291d0;
  local_2a8 = &DAT_02529228;
  local_2a0 = &DAT_02529280;
  local_298 = &DAT_025292d8;
  local_290 = &DAT_02529330;
  local_288 = &DAT_02529388;
  local_280 = &DAT_025293e0;
  local_278 = &DAT_02529438;
  local_270 = &DAT_02529490;
  local_268 = &DAT_025294e8;
  local_260 = &DAT_02529540;
  local_258 = &DAT_02529598;
  local_250 = &DAT_025295f0;
  local_248 = &DAT_02529648;
  local_240 = &DAT_025296a0;
  local_238 = &DAT_025296f8;
  local_230 = &DAT_02529750;
  local_228 = &DAT_025297a8;
  local_220 = &DAT_02529800;
  local_218 = &DAT_02529858;
  local_210 = &DAT_025298b0;
  local_208 = &DAT_02529908;
  local_200 = &DAT_02529960;
  local_1f8 = &DAT_025299b8;
  local_1f0 = (string *)&DAT_02529a10;
  *(undefined1 *)(unaff_RSI + 0x20) = 1;
  *(undefined4 *)(unaff_RSI + 0x24) = 100;
  local_118 = (string *)&puStack_390;
  local_1e8 = &local_11f8;
  local_58 = 0;
  local_f0 = 0;
  do {
    psVar7 = local_118;
    local_398 = local_300;
    *(undefined4 *)(local_118 + 0x3f) = 0;
    *(undefined **)(psVar7 + 0x38) = (undefined *)0x0;
    *(undefined **)(psVar7 + 0x30) = (undefined *)0x0;
    *(undefined **)(psVar7 + 0x28) = (undefined *)0x0;
    *(undefined **)(psVar7 + 0x20) = (undefined *)0x0;
    *(undefined **)(psVar7 + 0x18) = (undefined *)0x0;
    *(undefined **)(psVar7 + 0x10) = (undefined *)0x0;
    *(undefined **)(psVar7 + 8) = (undefined *)0x0;
    *(undefined **)psVar7 = (undefined *)0x0;
    local_1200 = local_2f8;
    local_11f8 = local_2f0;
    ___bzero();
    local_1130 = local_2e8;
    local_1128 = local_2e0;
    local_1110 = 0;
    local_1118 = 0;
    local_1120 = 0;
    local_1108 = &local_1100;
    local_10f8 = 0;
    local_1100 = 0;
    local_10f0 = 100;
    local_10ec = 0;
    local_10ea = 1;
    local_10e0 = 0;
    local_10d8 = 0;
    local_10d0 = 0;
    local_10e8 = 0;
    local_10c8 = local_2d8;
    local_10c0 = local_2e0;
    local_10a8 = 0;
    local_10b0 = 0;
    local_10b8 = 0;
    local_10a0 = &local_1098;
    local_1090 = 0;
    local_1098 = 0;
    local_1088 = 100;
    local_1084 = 0;
    local_1082 = 1;
    local_1078 = 0;
    local_1070 = 0;
    local_1068 = 0;
    local_1080 = 0;
    local_1060 = local_2d0;
    local_1058 = local_2e0;
    local_1040 = 0;
    local_1048 = 0;
    local_1050 = 0;
    local_1038 = &local_1030;
    local_1028 = 0;
    local_1030 = 0;
    local_1020 = 100;
    local_101c = 0;
    local_101a = 1;
    local_1010 = 0;
    local_1008 = 0;
    local_1000 = 0;
    local_1018 = 0;
    local_ff8 = local_2c8;
    local_ff0 = local_2e0;
    local_fd8 = 0;
    local_fe0 = 0;
    local_fe8 = 0;
    local_fd0 = &local_fc8;
    local_fc0 = 0;
    local_fc8 = 0;
    local_fb8 = 100;
    local_fb4 = 0;
    local_fb2 = 1;
    local_fa8 = 0;
    local_fa0 = 0;
    local_f98 = 0;
    local_fb0 = 0;
    local_f90 = local_2c0;
    local_f88 = local_2e0;
    local_f70 = 0;
    local_f78 = 0;
    local_f80 = 0;
    local_f68 = &local_f60;
    local_f58 = 0;
    local_f60 = 0;
    local_f50 = 100;
    local_f4c = 0;
    local_f4a = 1;
    local_f40 = 0;
    local_f38 = 0;
    local_f30 = 0;
    local_f48 = 0;
    local_f28 = local_2b8;
    local_f20 = local_2e0;
    local_f08 = 0;
    local_f10 = 0;
    local_f18 = 0;
    local_f00 = &local_ef8;
    local_ef0 = 0;
    local_ef8 = 0;
    local_ee8 = 100;
    local_ee4 = 0;
    local_ee2 = 1;
    local_ed8 = 0;
    local_ed0 = 0;
    local_ec8 = 0;
    local_ee0 = 0;
    local_ec0 = local_2b0;
    local_eb8 = local_2e0;
    local_ea0 = 0;
    local_ea8 = 0;
    local_eb0 = 0;
    local_e98 = &local_e90;
    local_e88 = 0;
    local_e90 = 0;
    local_e80 = 100;
    local_e7c = 0;
    local_e7a = 1;
    local_e70 = 0;
    local_e68 = 0;
    local_e60 = 0;
    local_e78 = 0;
    local_e58 = local_2a8;
    local_e50 = local_2e0;
    local_e38 = 0;
    local_e40 = 0;
    local_e48 = 0;
    local_e30 = &local_e28;
    local_e20 = 0;
    local_e28 = 0;
    local_e18 = 100;
    local_e14 = 0;
    local_e12 = 1;
    local_e08 = 0;
    local_e00 = 0;
    local_df8 = 0;
    local_e10 = 0;
    local_df0 = local_2a0;
    local_de8 = local_2e0;
    local_dd0 = 0;
    local_dd8 = 0;
    local_de0 = 0;
    local_dc8 = &local_dc0;
    local_db8 = 0;
    local_dc0 = 0;
    local_db0 = 100;
    local_dac = 0;
    local_daa = 1;
    local_da0 = 0;
    local_d98 = 0;
    local_d90 = 0;
    local_da8 = 0;
    local_d88 = local_298;
    local_d80 = local_2e0;
    local_d68 = 0;
    local_d70 = 0;
    local_d78 = 0;
    local_d60 = &local_d58;
    local_d50 = 0;
    local_d58 = 0;
    local_d48 = 100;
    local_d44 = 0;
    local_d42 = 1;
    local_d38 = 0;
    local_d30 = 0;
    local_d28 = 0;
    local_d40 = 0;
    local_d20 = local_290;
    local_d18 = local_2e0;
    local_d00 = 0;
    local_d08 = 0;
    local_d10 = 0;
    local_cf8 = &local_cf0;
    local_ce8 = 0;
    local_cf0 = 0;
    local_ce0 = 100;
    local_cdc = 0;
    local_cda = 1;
    local_cd0 = 0;
    local_cc8 = 0;
    local_cc0 = 0;
    local_cd8 = 0;
    local_cb8 = local_288;
    local_cb0 = local_2e0;
    local_c98 = 0;
    local_ca0 = 0;
    local_ca8 = 0;
    local_c90 = &local_c88;
    local_c80 = 0;
    local_c88 = 0;
    local_c78 = 100;
    local_c74 = 0;
    local_c72 = 1;
    local_c68 = 0;
    local_c60 = 0;
    local_c58 = 0;
    local_c70 = 0;
    local_c50 = local_280;
    local_c48 = local_2e0;
    local_c30 = 0;
    local_c38 = 0;
    local_c40 = 0;
    local_c28 = &local_c20;
    local_c18 = 0;
    local_c20 = 0;
    local_c10 = 100;
    local_c0c = 0;
    local_c0a = 1;
    local_c00 = 0;
    local_bf8 = 0;
    local_bf0 = 0;
    local_c08 = 0;
    local_be8 = local_278;
    local_be0 = local_2e0;
    local_bc8 = 0;
    local_bd0 = 0;
    local_bd8 = 0;
    local_bc0 = &local_bb8;
    local_bb0 = 0;
    local_bb8 = 0;
    local_ba8 = 100;
    local_ba4 = 0;
    local_ba2 = 1;
    local_b98 = 0;
    local_b90 = 0;
    local_b88 = 0;
    local_ba0 = 0;
    local_b80 = local_270;
    local_b78 = local_2e0;
    local_b60 = 0;
    local_b68 = 0;
    local_b70 = 0;
    local_b58 = &local_b50;
    local_b48 = 0;
    local_b50 = 0;
    local_b40 = 100;
    local_b3c = 0;
    local_b3a = 1;
    local_b30 = 0;
    local_b28 = 0;
    local_b20 = 0;
    local_b38 = 0;
    local_b18 = local_268;
    local_b10 = local_2e0;
    local_af8 = 0;
    local_b00 = 0;
    local_b08 = 0;
    local_af0 = &local_ae8;
    local_ae0 = 0;
    local_ae8 = 0;
    local_ad8 = 100;
    local_ad4 = 0;
    local_ad2 = 1;
    local_ac8 = 0;
    local_ac0 = 0;
    local_ab8 = 0;
    local_ad0 = 0;
    local_ab0 = local_260;
    local_aa8 = local_2e0;
    local_a90 = 0;
    local_a98 = 0;
    local_aa0 = 0;
    local_a88 = &local_a80;
    local_a78 = 0;
    local_a80 = 0;
    local_a70 = 100;
    local_a6c = 0;
    local_a6a = 1;
    local_a60 = 0;
    local_a58 = 0;
    local_a50 = 0;
    local_a68 = 0;
    local_a48 = local_258;
    local_a40 = local_2e0;
    local_a28 = 0;
    local_a30 = 0;
    local_a38 = 0;
    local_a20 = &local_a18;
    local_a10 = 0;
    local_a18 = 0;
    local_a08 = 100;
    local_a04 = 0;
    local_a02 = 1;
    local_9f8 = 0;
    local_9f0 = 0;
    local_9e8 = 0;
    local_a00 = 0;
    local_9e0 = local_250;
    local_9d8 = local_2e0;
    local_9c0 = 0;
    local_9c8 = 0;
    local_9d0 = 0;
    local_9b8 = &local_9b0;
    local_9a8 = 0;
    local_9b0 = 0;
    local_9a0 = 100;
    local_99c = 0;
    local_99a = 1;
    local_990 = 0;
    local_988 = 0;
    local_980 = 0;
    local_998 = 0;
    local_978 = local_248;
    local_970 = local_2e0;
    local_958 = 0;
    local_960 = 0;
    local_968 = 0;
    local_950 = &local_948;
    local_940 = 0;
    local_948 = 0;
    local_938 = 100;
    local_934 = 0;
    local_932 = 1;
    local_928 = 0;
    local_920 = 0;
    local_918 = 0;
    local_930 = 0;
    local_910 = local_240;
    local_908 = local_2e0;
    local_8f0 = 0;
    local_8f8 = 0;
    local_900 = 0;
    local_8e8 = &local_8e0;
    local_8d8 = 0;
    local_8e0 = 0;
    local_8d0 = 100;
    local_8cc = 0;
    local_8ca = 1;
    local_8c0 = 0;
    local_8b8 = 0;
    local_8b0 = 0;
    local_8c8 = 0;
    local_8a8 = local_238;
    local_8a0 = local_2e0;
    local_888 = 0;
    local_890 = 0;
    local_898 = 0;
    local_880 = &local_878;
    local_870 = 0;
    local_878 = 0;
    local_868 = 100;
    local_864 = 0;
    local_862 = 1;
    local_858 = 0;
    local_850 = 0;
    local_848 = 0;
    local_860 = 0;
    local_840 = local_230;
    local_838 = local_2e0;
    local_820 = 0;
    local_828 = 0;
    local_830 = 0;
    local_818 = &local_810;
    local_808 = 0;
    local_810 = 0;
    local_800 = 100;
    local_7fc = 0;
    local_7fa = 1;
    local_7f0 = 0;
    local_7e8 = 0;
    local_7e0 = 0;
    local_7f8 = 0;
    local_7d8 = local_228;
    local_7d0 = local_2e0;
    local_7b8 = 0;
    local_7c0 = 0;
    local_7c8 = 0;
    local_7b0 = &local_7a8;
    local_7a0 = 0;
    local_7a8 = 0;
    local_798 = 100;
    local_794 = 0;
    local_792 = 1;
    local_788 = 0;
    local_780 = 0;
    local_778 = 0;
    local_790 = 0;
    local_770 = local_220;
    local_768 = local_2e0;
    local_750 = 0;
    local_758 = 0;
    local_760 = 0;
    local_748 = &local_740;
    local_738 = 0;
    local_740 = 0;
    local_730 = 100;
    local_72c = 0;
    local_72a = 1;
    local_720 = 0;
    local_718 = 0;
    local_710 = 0;
    local_728 = 0;
    local_708 = local_218;
    local_700 = local_2e0;
    local_6e8 = 0;
    local_6f0 = 0;
    local_6f8 = 0;
    local_6e0 = &local_6d8;
    local_6d0 = 0;
    local_6d8 = 0;
    local_6c8 = 100;
    local_6c4 = 0;
    local_6c2 = 1;
    local_6b8 = 0;
    local_6b0 = 0;
    local_6a8 = 0;
    local_6c0 = 0;
    local_6a0 = local_210;
    local_698 = local_2e0;
    local_680 = 0;
    local_688 = 0;
    local_690 = 0;
    local_678 = &local_670;
    local_668 = 0;
    local_670 = 0;
    local_660 = 100;
    local_65c = 0;
    local_65a = 1;
    local_650 = 0;
    local_648 = 0;
    local_640 = 0;
    local_658 = 0;
    local_638 = local_208;
    local_630 = local_2e0;
    local_618 = 0;
    local_620 = 0;
    local_628 = 0;
    local_610 = &local_608;
    local_600 = 0;
    local_608 = 0;
    local_5f8 = 100;
    local_5f4 = 0;
    local_5f2 = 1;
    local_5e8 = 0;
    local_5e0 = 0;
    local_5d8 = 0;
    local_5f0 = 0;
    local_5d0 = local_200;
    local_5c8 = local_2e0;
    local_5b0 = 0;
    local_5b8 = 0;
    local_5c0 = 0;
    local_5a8 = &local_5a0;
    local_598 = 0;
    local_5a0 = 0;
    local_590 = 100;
    local_58c = 0;
    local_58a = 1;
    local_580 = 0;
    local_578 = 0;
    local_570 = 0;
    local_588 = 0;
    local_568 = local_1f8;
    local_560 = local_2e0;
    local_548 = 0;
    local_550 = 0;
    local_558 = 0;
    local_540 = &local_538;
    local_530 = 0;
    local_538 = 0;
    local_528 = 100;
    local_524 = 0;
    local_522 = 1;
    local_518 = 0;
    local_510 = 0;
    local_508 = 0;
    local_520 = 0;
    local_500 = local_1f0;
    local_4f8 = local_2e0;
    local_4e0 = 0;
    local_4e8 = 0;
    local_4f0 = 0;
    local_4d8 = &local_4d0;
    local_4c8 = 0;
    local_4d0 = 0;
    local_4c0 = 100;
    local_4bc = 0;
    local_4ba = 1;
    local_4b0 = 0;
    local_4a8 = 0;
    local_4a0 = 0;
    local_4b8 = 0;
    local_498 = 1;
    uStack_493 = 0;
    uStack_497 = 0;
    local_490 = 0x101;
    local_486 = 0;
    local_47e = 0;
    uStack_477 = 0;
    uStack_476 = 0;
    local_48e = 0;
    local_468 = 4;
    local_464 = 0x100;
    psVar7 = local_1f0;
    std::string::string(local_1f0,(string *)CONCAT71((int7)((ulonglong)pcVar8 >> 8),1));
    if (((ulonglong)puStack_390 & 1) != 0) {
      operator_delete(psVar7);
    }
    psVar7 = local_118;
    *(code **)(local_118 + 0x10) = local_2db0;
    *(string **)(psVar7 + 8) = local_2db8;
    *(undefined **)psVar7 = local_2dc0;
    std::string::operator=(local_2db8,psVar7);
    local_360 = local_4c;
    uStack_35c = local_5c;
    local_358 = (undefined4)local_64;
    uStack_354 = 1;
    local_128 = 0;
    local_138 = 0;
    lStack_130 = 0;
    local_f8 = 0;
    local_108 = 0;
    lStack_100 = 0;
    FUN_00947aad(0,1);
    uVar13 = FUN_00928f8a(&local_108,&local_138);
    FUN_009513c9(uVar13,(string *)&local_1200);
    FUN_0092e080();
    pcVar8 = (char *)0x0;
    FUN_009b98d4();
    if (((ulonglong)local_48 & 1) != 0) {
      operator_delete(pcVar8);
    }
    FUN_00a34558();
    if (local_e0 == 0) {
      FUN_00925fd0();
      FUN_00926010();
      pcVar8 = 
      "void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
      ;
      FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                   ,&DAT_00003d29);
      FUN_009bd14b();
    }
    lVar12 = FUN_00a35332();
    if (local_4c == 0) {
      if (lVar12 == 0) {
        FUN_00925fd0();
        FUN_00926010();
        local_48 = (code *)&local_a8;
        pcStack_40 = FUN_009b6370;
        local_38 = FUN_0094ef70;
        FUN_00983230();
        pcVar8 = 
        "void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
        ;
        FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                     ,&DAT_00003d3f);
        FUN_009bd14b();
      }
      else if (lVar12 != 1) {
        FUN_00925fd0();
        FUN_00926010();
        local_48 = (code *)&local_a8;
        pcStack_40 = FUN_009b6370;
        local_38 = FUN_0094ef70;
        FUN_00983230();
        pcVar8 = 
        "void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
        ;
        FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                     ,&DAT_00003d48);
        FUN_009bd14b();
      }
      psVar7 = (string *)0x0;
      FUN_00a34c64();
      local_78 = local_48;
      if (local_48 == (code *)0x0) {
        FUN_00925fd0();
        psVar7 = (string *)FUN_00926010();
        local_48 = (code *)&local_a8;
        pcStack_40 = FUN_009b6370;
        local_38 = FUN_0094ef70;
        FUN_00983230();
        pcVar8 = 
        "void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
        ;
        FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                     ,&LAB_00003d51);
        FUN_009bd14b();
      }
      (**(code **)(*(ulonglong *)local_78 + 0x48))();
      std::string::operator=((string *)pcVar8,psVar7);
      cVar4 = FUN_00a54e10();
      if (cVar4 == '\0') {
        FUN_00925fd0();
        uVar6 = FUN_00926010();
        local_48 = (code *)&local_a8;
        pcStack_40 = FUN_009b6370;
        local_38 = FUN_0094ef70;
        FUN_00983230();
        uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                              ,&DAT_00003d5f);
        FUN_009bd14b(uVar13,uVar6);
      }
      iVar5 = uStack_3c0._4_4_;
      uVar13 = FUN_00a521fe();
      FUN_009bafbc(uVar13,"issuerId");
      lVar12 = FUN_00a521fe();
      if (iVar5 != *(int *)(lVar12 + 0xb8)) {
        FUN_00925fd0();
        uVar6 = FUN_00926010();
        local_48 = (code *)&local_a8;
        pcStack_40 = FUN_009b6370;
        local_38 = FUN_0094ef70;
        FUN_00983230();
        local_48 = (code *)((longlong)&uStack_3c0 + 4);
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                              ,&DAT_00003d69);
        FUN_009bd14b(uVar13,uVar6);
      }
      local_7c = uStack_3c0._4_4_;
      if (uStack_3c0._4_4_ == 1) {
        local_7c = 0;
      }
      local_340 = local_78;
      FUN_00946922(&local_d8,&local_a8);
      local_88 = lStack_d0 - local_d8;
      if (local_88 == 0) {
        FUN_00925fd0();
        uVar6 = FUN_00926010();
        local_48 = (code *)&local_a8;
        pcStack_40 = FUN_009b6370;
        local_38 = FUN_0094ef70;
        FUN_00983230();
        uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                              ,&DAT_00003d8f);
        FUN_009bd14b(uVar13,uVar6);
      }
      local_338 = local_78;
      local_1d8 = 0;
      plStack_1d0 = (longlong *)0x0;
      FUN_009515e4();
      puVar9 = &local_1d8;
      FUN_00947d1c(puVar9,&local_2dc0,&local_e8,&local_90,local_b8);
      if (local_408 != 0) {
        local_400 = local_408;
        operator_delete(puVar9);
      }
      if (plStack_1d0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_1d0 + 1;
        lVar12 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plStack_1d0 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
      local_88 = local_88 >> 3;
      lVar12 = local_88;
      if (local_110 != 0) {
        FUN_0092e102();
        local_330 = *(undefined8 *)(local_d8 + -8 + local_88 * 8);
        FUN_00941e38(local_110,local_1e0,(int)unaff_RDI[0x12],4);
        lVar12 = local_88;
      }
    }
    else {
      uVar13 = extraout_XMM0_Da_00;
      if (lVar12 == 0) {
        FUN_00925fd0();
        uVar6 = FUN_00926010();
        local_48 = (code *)&local_4c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = (code *)&local_5c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = (code *)&local_64;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                              ,&DAT_00003dc2);
        uVar13 = FUN_009bd14b(uVar13,uVar6);
      }
      FUN_00a34c64(uVar13,0);
      local_78 = local_48;
      if (local_48 == (code *)0x0) {
        FUN_00925fd0();
        uVar6 = FUN_00926010();
        local_48 = (code *)&local_4c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = (code *)&local_5c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = (code *)&local_64;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                              ,&DAT_00003dce);
        FUN_009bd14b(uVar13,uVar6);
      }
      cVar4 = FUN_00a54e10();
      if (cVar4 == '\0') {
        FUN_00925fd0();
        uVar6 = FUN_00926010();
        local_48 = (code *)&local_4c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = (code *)&local_5c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = (code *)&local_64;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                              ,&DAT_00003dda);
        FUN_009bd14b(uVar13,uVar6);
      }
      iVar5 = uStack_3c0._4_4_;
      uVar13 = FUN_00a521fe();
      FUN_009bafbc(uVar13,"issuerId");
      lVar12 = FUN_00a521fe();
      if (iVar5 != *(int *)(lVar12 + 0xb8)) {
        FUN_00925fd0();
        uVar6 = FUN_00926010();
        local_48 = (code *)&local_4c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = (code *)&local_5c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = (code *)&local_64;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = (code *)((longlong)&uStack_3c0 + 4);
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                              ,&DAT_00003de6);
        FUN_009bd14b(uVar13,uVar6);
      }
      local_7c = uStack_3c0._4_4_;
      if (uStack_3c0._4_4_ == 1) {
        local_7c = 0;
      }
      local_328 = local_78;
      FUN_0094631c(local_5c,local_4c,(undefined4)local_64,&local_d8);
      local_88 = lStack_d0 - local_d8;
      if (local_88 == 0) {
        FUN_00925fd0();
        uVar6 = FUN_00926010();
        local_48 = (code *)&local_5c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = (code *)&local_4c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = (code *)&local_64;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                              ,0x3e11);
        FUN_009bd14b(uVar13,uVar6);
      }
      local_320 = local_78;
      local_1c8 = 0;
      plStack_1c0 = (longlong *)0x0;
      FUN_009515e4();
      puVar9 = &local_1c8;
      FUN_00947d1c(puVar9,&local_2dc0,&local_e8,&local_90,local_b8);
      if (local_3f0 != 0) {
        local_3e8 = local_3f0;
        operator_delete(puVar9);
      }
      local_88 = local_88 >> 3;
      lVar12 = local_88;
      if (plStack_1c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_1c0 + 1;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plStack_1c0 + 0x10))();
          std::__shared_weak_count::__release_weak();
          lVar12 = local_88;
        }
      }
    }
    while (lVar12 != 0) {
      local_318 = *(undefined8 *)(local_d8 + -8 + lVar12 * 8);
      local_58 = local_318;
      (**(code **)(*unaff_RDI + 0x18))();
      iVar5 = local_7c;
      local_88 = lVar12;
      if (local_7c != 0) {
        uVar13 = FUN_00a1c9ba();
        FUN_009bafbc(uVar13,"publisherId");
        lVar12 = FUN_00a1c9ba();
        if (iVar5 != *(int *)(lVar12 + 0xa0)) {
          FUN_00925fd0();
          uVar6 = FUN_00926010();
          local_48 = (code *)&local_7c;
          pcStack_40 = FUN_009cac80;
          local_38 = FUN_009cefa0;
          FUN_00983230();
          uVar13 = FUN_00a1c9ba();
          FUN_009bafbc(uVar13,"authId");
          lVar12 = FUN_00a1c9ba();
          local_48 = (code *)(lVar12 + 0x30);
          pcStack_40 = FUN_009cac80;
          local_38 = FUN_009cefa0;
          FUN_00983230();
          uVar13 = FUN_00a1c9ba();
          FUN_009bafbc(uVar13,"publisherId");
          lVar12 = FUN_00a1c9ba();
          local_48 = (code *)(lVar12 + 0xa0);
          pcStack_40 = FUN_009cac80;
          local_38 = FUN_009cefa0;
          FUN_00983230();
          uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                                ,0x3e3b);
          FUN_009bd14b(uVar13,uVar6);
        }
      }
      lVar12 = FUN_008e4ece();
      uVar2 = local_f0 + 1;
      if ((ulonglong)(longlong)*(int *)(lVar12 + 0x28) <= uVar2) {
        FUN_00925fd0();
        uVar6 = FUN_00926010();
        lVar12 = FUN_008e4ece();
        local_48 = (code *)(lVar12 + 0x28);
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                              ,0x3e42);
        FUN_009bd14b(uVar13,uVar6);
      }
      local_310 = local_58;
      local_308 = local_78;
      FUN_0093bd8e(local_f0,&local_308,(longlong)&local_64 + 6,&local_90,
                   *(undefined8 *)(local_b8 + 0x18),4);
      local_f0 = uVar2;
      lVar12 = local_88 + -1;
    }
    if ((local_a8 & 1) == 0) {
      local_a8 = local_a8 & 0xffffffffffff0000;
    }
    else {
      *local_98 = 0;
      uStack_a0 = 0;
    }
    uVar13 = FUN_00a1c9ba();
    FUN_009bafbc(uVar13,"externalParentAuthId");
    lVar12 = FUN_00a1c9ba();
    local_4c = *(uint *)(lVar12 + 0x54);
    uVar13 = FUN_00a1c9ba();
    FUN_009bafbc(uVar13,"externalParentPublisherId");
    lVar12 = FUN_00a1c9ba();
    local_5c = *(uint *)(lVar12 + 0x5c);
    FUN_00a1c9ba();
    pcVar8 = "externalParentAuthInstance";
    FUN_009bafbc();
    lVar12 = FUN_00a1c9ba();
    local_64._0_4_ = *(undefined4 *)(lVar12 + 0x58);
    pcVar10 = (char *)(ulonglong)local_5c;
    if ((local_4c == 0) || (local_5c == 0)) {
      if ((local_5c & local_4c) != 0) {
        FUN_00925fd0();
        pcVar8 = (char *)FUN_00926010();
        local_48 = (code *)&local_4c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = (code *)&local_5c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = (code *)&local_64;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        pcVar10 = 
        "void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
        ;
        FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                     ,0x3e72);
        FUN_009bd14b();
      }
      if (local_64._7_1_ != '\0') {
        FUN_00a1c9ba();
        pcVar8 = "authId";
        FUN_009bafbc();
        lVar12 = FUN_00a1c9ba();
        if (*(int *)(lVar12 + 0x30) != 0x4801f777) {
          FUN_00a1c9ba();
          pcVar8 = "publisherId";
          FUN_009bafbc();
          lVar12 = FUN_00a1c9ba();
          if (*(int *)(lVar12 + 0xa0) != 1) {
            local_4c = 0x4801f777;
            local_5c = 1;
            local_64._0_4_ = 0;
          }
        }
      }
    }
    FUN_009b98de();
    if (local_108 != 0) {
      lStack_100 = local_108;
      operator_delete(pcVar10);
    }
    if (local_138 != 0) {
      lStack_130 = local_138;
      operator_delete(pcVar10);
    }
    FUN_008c0d4c();
    uVar13 = FUN_008c059e();
  } while (local_4c != 0);
  if (local_64._6_1_ == '\0') {
    *(undefined2 *)(unaff_RSI + 0x20) = 0;
    *(undefined4 *)(unaff_RSI + 0x24) = 0;
  }
  else if (*(char *)(unaff_RSI + 0x20) != '\0') {
    *(undefined1 *)(unaff_RSI + 0x21) = 0;
    pcVar10 = (char *)local_b8;
    if (local_b8[0xb] != (string)0x0) {
      if (*(longlong *)(unaff_RSI + 0x58) == 1) {
        local_2dc0 = &DAT_025197b8;
        local_2db0 = (code *)0x0;
        local_2da8 = 0;
        local_2da0 = 0;
        local_2d98 = 0;
        local_2d90 = 0;
        uStack_2d8c = 0;
        local_2d88 = 0;
        uStack_2d84 = 0;
        local_2d80 = 0;
        uStack_2d7c = 0;
        local_2d78 = local_2d78 & 0xffffff00;
        local_2d70 = 0;
        uStack_2d6c = 0;
        local_2d68 = 0;
        uStack_2d64 = 0;
        local_2d60 = 0;
        uStack_2d5c = 0;
        local_2d58 = 0;
        local_2d50 = CONCAT53(local_2d50._3_5_,0x10001);
        local_2db8 = (string *)CONCAT44(local_2db8._4_4_,100);
        std::string::operator=(local_b8,(string *)pcVar8);
        local_2d98 = 1;
        FUN_009f35cc();
        FUN_009437da();
        uVar13 = FUN_008b5046();
      }
      else {
        uVar13 = FUN_00943e2a();
      }
    }
    if (local_b0 != (undefined **)0x0) {
      local_2dc0 = &DAT_02519a40;
      local_2db8 = (string *)&DAT_0251c5a8;
      local_2db0 = (code *)0x0;
      local_2da8 = 0;
      local_2da0 = 0;
      local_2d98 = local_2d98 & 0xffff0000;
      uStack_2d5c = 0;
      uStack_2d94 = 0;
      local_2d90 = 0;
      uStack_2d8c = 0;
      local_2d88 = 0;
      uStack_2d84 = 0;
      local_2d80 = 0;
      uStack_2d7c = 0;
      local_2d78 = 0;
      uStack_2d74 = 0;
      local_2d70 = 0;
      uStack_2d6c = 0;
      local_2d68 = 0;
      uStack_2d64 = 0;
      local_2d60 = 0;
      local_2d58 = 0xffffffffffffffff;
      local_2d34 = 0;
      local_2d50 = 0;
      local_2d48 = 0;
      local_2d40 = 0;
      local_2d38 = 0;
      local_2d30 = &DAT_0251c338;
      local_2cf8 = 0;
      local_2d00 = 0;
      local_2d08 = 0;
      local_2d10 = 0;
      local_2d18 = 0;
      local_2d20 = 0;
      local_2d28 = 0;
      local_2c88 = 0;
      local_2c90 = 0;
      local_2c98 = 0;
      local_2ca0 = 0;
      local_2ca8 = 0;
      local_2cb0 = 0;
      local_2cb8 = 0;
      local_2cc0 = 0;
      local_2cc8 = 0;
      local_2cd0 = 0;
      local_2cd8 = 0;
      local_2ce0 = 0;
      local_2ce8 = 0;
      local_2cf0 = 0;
      local_2c30 = 0;
      local_2c38 = 0;
      local_2c40 = 0;
      local_2c48 = 0;
      local_2c50 = 0;
      local_2c58 = 0;
      local_2c60 = 0;
      local_2c68 = 0;
      local_2c70 = 0;
      local_2c78 = 0;
      local_2c80 = 0;
      local_2c28 = 1;
      local_2c1c = 0;
      local_2c00 = 0;
      local_2c08 = 0;
      local_2c10 = 0;
      local_2c18 = 0;
      local_2bf8 = &DAT_0251c3a0;
      local_2bc0 = 0;
      local_2bc8 = 0;
      local_2bd0 = 0;
      local_2bd8 = 0;
      local_2be0 = 0;
      local_2be8 = 0;
      local_2bf0 = 0;
      local_2bb8 = 0x100000001;
      local_2b90 = 0;
      local_2b98 = 0;
      local_2ba0 = 0;
      local_2ba8 = 0;
      local_2bb0 = 0;
      local_2b88 = 1;
      local_2b86 = 0;
      local_2b85 = 0x1010101;
      local_2b81 = 0;
      local_2b7f = 0;
      uStack_2b48 = 0;
      uStack_2b50 = 0;
      local_2b49 = 0;
      local_2b58 = 0;
      local_2b60 = 0;
      local_2b68 = 0;
      local_2b70 = 0;
      local_2b78 = 0;
      local_2b41 = 0x100010000010001;
      local_2b39 = 0;
      local_2c20 = 0;
      local_2b10 = 0;
      local_2b18 = 0;
      local_2b20 = 0;
      local_2b28 = 0;
      local_2b30 = (undefined *)0x0;
      local_1200 = &DAT_02519aa8;
      local_11f8 = (undefined *)0x0;
      local_11f0 = 0;
      local_11e8 = 0;
      local_11e0 = 0x400000000;
      local_11d8 = 0;
      local_11d6 = 1;
      uVar13 = FUN_008f91be();
      if (&local_2b30 != local_b0) {
        FUN_008df080(uVar13,local_b0[1]);
      }
      local_2b18 = CONCAT44(*(undefined4 *)((longlong)unaff_RDI + 0x1ac),0x80000000);
      local_388 = 0;
      local_398 = (undefined *)0x0;
      puStack_390 = (undefined *)0x0;
      local_38 = (code *)0x0;
      local_48 = (code *)0x0;
      pcStack_40 = (code *)0x0;
      FUN_0094a57c(0,1);
      pcVar10 = (char *)&local_48;
      uVar13 = FUN_00928f8a(pcVar10,&local_398);
      uVar13 = FUN_0095169d(uVar13,&local_1200);
      if (&local_11f8 != local_b0) {
        FUN_009ad770(uVar13,local_11f0);
      }
      if (local_48 != (code *)0x0) {
        pcStack_40 = local_48;
        operator_delete(pcVar10);
      }
      if (local_398 != (undefined *)0x0) {
        puStack_390 = local_398;
        operator_delete(pcVar10);
      }
      FUN_008b8010();
      uVar13 = FUN_008b7902();
    }
  }
  uVar13 = FUN_00944c8e(uVar13,&local_460);
  if (*(char *)(unaff_RSI + 0x20) == '\0') {
    local_1200 = (undefined *)0x11e1a300;
    uVar13 = FUN_0094ca28(uVar13,&local_90);
    FUN_00947768(uVar13,&local_1200);
    local_2dc0 = (undefined *)0x0;
    iVar5 = FUN_0098c910();
    if (iVar5 == -1) {
      FUN_00925fd0();
      uVar6 = FUN_00926010();
      local_2dc0 = (undefined *)(unaff_RSI + 0x60);
      local_2db8 = (string *)FUN_00959530;
      local_2db0 = FUN_00959536;
      FUN_00983230();
      uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                            ,0x3ee5);
      FUN_009bd14b(uVar13,uVar6);
    }
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    pcVar10 = 
    "void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
    ;
    uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                          ,0x3eea);
    FUN_009bd14b(uVar13,uVar6);
  }
  else {
    FUN_009f35cc();
    FUN_009f35cc();
  }
  if ((local_res8 != 0) && (local_res10 != (longlong *)0x0)) {
    pcVar10 = (char *)(local_res10[1] - *local_res10);
    if ((string *)pcVar10 != (string *)0x0) {
      FUN_00929d84(pcVar10,local_res8,*local_res10,0);
    }
  }
  FUN_00975f3c();
  FUN_0094d0ec();
  FUN_00891d28();
  if ((local_158 & 1) != 0) {
    operator_delete(pcVar10);
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(pcVar10);
  }
  FUN_008defa0();
  if (local_3d8 != 0) {
    lStack_3d0 = local_3d8;
    operator_delete(pcVar10);
  }
  if (local_d8 != 0) {
    lStack_d0 = local_d8;
    operator_delete(pcVar10);
  }
  FUN_0094cca0();
  FUN_008cc2c8();
  return;
}


