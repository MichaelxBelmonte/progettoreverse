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
// === MUSpectrumShaper properties ===
//   GNInt           _assembledElementRendererCount
//   MUSpectrumShaperSpectrumType _spectrumType
//   bool            _processSpectrumShaper
//   bool            _canUseSpectrumShaper
//   bool            _processEqualizer
//   bool            _processLowerSpectrum
//   bool            _processUpperSpectrum
//   bool            _isBypassed
//   GNInt           _overallSpectrumFundamentalPitchIndex
//   float           _overallSpectrumFreqPerBin
//   float           _referenceMagnitudeSum
//   float           _maximumMagnitudeSum
//   float           _synthAmps
//   float           _synthPhases
//   float           _emphasizePow
//   float           _allGain
//   float           _ampDifferencePow
//   float           _clipLimit
//   bool            _didRequestCacheValidation
//   bool            _appliedEqualizerFactorsAreValid
//   bool            _appliedEqualizerFormantFactorsAreValid
//   bool            _processSpectrumShaperIsValid
//   float           _startValue
//   float           _riseDuration
//   float           _riseEndValue
//   float           _decayStartTime
//   float           _decayEndTime
//   float           _decayFactor
//   float           _endValue
//   bool            _needsProcessEnvelope
//   ... +35 more


void FUN_0093498e(uint64_t param_1,string *param_2,int64_t param_3,void**param_4)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  string *psVar7;
  char *pcVar8;
  void*puVar9;
  char *pcVar10;
  string *psVar11;
  int64_t lVar12;
  int64_t arg1;
  int64_t *this_ptr;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_res8;
  int64_t *local_res10;
  int64_t *local_res18;
  uint64_t local_2dd0;
  void*local_2dc0;
  string *local_2db8;
  code *local_2db0;
  uint64_t local_2da8;
  uint64_t local_2da0;
  uint local_2d98;
  uint32_t uStack_2d94;
  uint32_t local_2d90;
  uint32_t uStack_2d8c;
  uint32_t local_2d88;
  uint32_t uStack_2d84;
  uint32_t local_2d80;
  uint32_t uStack_2d7c;
  uint local_2d78;
  uint32_t uStack_2d74;
  uint32_t local_2d70;
  uint32_t uStack_2d6c;
  uint32_t local_2d68;
  uint32_t uStack_2d64;
  uint32_t local_2d60;
  uint32_t uStack_2d5c;
  uint64_t local_2d58;
  uint64_t local_2d50;
  uint64_t local_2d48;
  uint64_t local_2d40;
  uint8_t local_2d38;
  uint32_t local_2d34;
  void*local_2d30;
  uint64_t local_2d28;
  uint64_t local_2d20;
  uint64_t local_2d18;
  uint64_t local_2d10;
  uint64_t local_2d08;
  uint64_t local_2d00;
  uint32_t local_2cf8;
  uint64_t local_2cf0;
  uint64_t local_2ce8;
  uint64_t local_2ce0;
  uint64_t local_2cd8;
  uint64_t local_2cd0;
  uint64_t local_2cc8;
  uint64_t local_2cc0;
  uint64_t local_2cb8;
  uint64_t local_2cb0;
  uint64_t local_2ca8;
  uint64_t local_2ca0;
  uint64_t local_2c98;
  uint64_t local_2c90;
  uint32_t local_2c88;
  uint64_t local_2c80;
  uint64_t local_2c78;
  uint64_t local_2c70;
  uint64_t local_2c68;
  uint64_t local_2c60;
  uint64_t local_2c58;
  uint64_t local_2c50;
  uint64_t local_2c48;
  uint64_t local_2c40;
  uint64_t local_2c38;
  uint64_t local_2c30;
  uint8_t local_2c28;
  uint32_t local_2c20;
  uint8_t local_2c1c;
  uint64_t local_2c18;
  uint64_t local_2c10;
  uint64_t local_2c08;
  uint64_t local_2c00;
  void*local_2bf8;
  uint64_t local_2bf0;
  uint64_t local_2be8;
  uint64_t local_2be0;
  uint64_t local_2bd8;
  uint64_t local_2bd0;
  uint64_t local_2bc8;
  uint64_t local_2bc0;
  uint64_t local_2bb8;
  uint64_t local_2bb0;
  uint64_t local_2ba8;
  uint64_t local_2ba0;
  uint64_t local_2b98;
  uint64_t local_2b90;
  uint16_t local_2b88;
  uint8_t local_2b86;
  uint32_t local_2b85;
  uint16_t local_2b81;
  uint8_t local_2b7f;
  uint64_t local_2b78;
  uint64_t local_2b70;
  uint64_t local_2b68;
  uint64_t local_2b60;
  uint64_t local_2b58;
  undefined7 uStack_2b50;
  uint8_t local_2b49;
  undefined7 uStack_2b48;
  uint64_t local_2b41;
  uint32_t local_2b39;
  void*local_2b30;
  uint64_t local_2b28;
  uint64_t local_2b20;
  uint64_t local_2b18;
  uint32_t local_2b10;
  void*local_1200;
  void*local_11f8;
  uint64_t local_11f0;
  uint64_t local_11e8;
  uint64_t local_11e0;
  uint16_t local_11d8;
  uint8_t local_11d6;
  void*local_1130;
  void*local_1128;
  uint64_t local_1120;
  uint64_t local_1118;
  uint64_t local_1110;
  void*local_1108;
  uint64_t local_1100;
  uint64_t local_10f8;
  uint32_t local_10f0;
  uint16_t local_10ec;
  uint8_t local_10ea;
  uint64_t local_10e8;
  uint64_t local_10e0;
  uint64_t local_10d8;
  uint16_t local_10d0;
  void*local_10c8;
  void*local_10c0;
  uint64_t local_10b8;
  uint64_t local_10b0;
  uint64_t local_10a8;
  void*local_10a0;
  uint64_t local_1098;
  uint64_t local_1090;
  uint32_t local_1088;
  uint16_t local_1084;
  uint8_t local_1082;
  uint64_t local_1080;
  uint64_t local_1078;
  uint64_t local_1070;
  uint16_t local_1068;
  void*local_1060;
  void*local_1058;
  uint64_t local_1050;
  uint64_t local_1048;
  uint64_t local_1040;
  void*local_1038;
  uint64_t local_1030;
  uint64_t local_1028;
  uint32_t local_1020;
  uint16_t local_101c;
  uint8_t local_101a;
  uint64_t local_1018;
  uint64_t local_1010;
  uint64_t local_1008;
  uint16_t local_1000;
  void*local_ff8;
  void*local_ff0;
  uint64_t local_fe8;
  uint64_t local_fe0;
  uint64_t local_fd8;
  void*local_fd0;
  uint64_t local_fc8;
  uint64_t local_fc0;
  uint32_t local_fb8;
  uint16_t local_fb4;
  uint8_t local_fb2;
  uint64_t local_fb0;
  uint64_t local_fa8;
  uint64_t local_fa0;
  uint16_t local_f98;
  void*local_f90;
  void*local_f88;
  uint64_t local_f80;
  uint64_t local_f78;
  uint64_t local_f70;
  void*local_f68;
  uint64_t local_f60;
  uint64_t local_f58;
  uint32_t local_f50;
  uint16_t local_f4c;
  uint8_t local_f4a;
  uint64_t local_f48;
  uint64_t local_f40;
  uint64_t local_f38;
  uint16_t local_f30;
  void*local_f28;
  void*local_f20;
  uint64_t local_f18;
  uint64_t local_f10;
  uint64_t local_f08;
  void*local_f00;
  uint64_t local_ef8;
  uint64_t local_ef0;
  uint32_t local_ee8;
  uint16_t local_ee4;
  uint8_t local_ee2;
  uint64_t local_ee0;
  uint64_t local_ed8;
  uint64_t local_ed0;
  uint16_t local_ec8;
  void*local_ec0;
  void*local_eb8;
  uint64_t local_eb0;
  uint64_t local_ea8;
  uint64_t local_ea0;
  void*local_e98;
  uint64_t local_e90;
  uint64_t local_e88;
  uint32_t local_e80;
  uint16_t local_e7c;
  uint8_t local_e7a;
  uint64_t local_e78;
  uint64_t local_e70;
  uint64_t local_e68;
  uint16_t local_e60;
  void*local_e58;
  void*local_e50;
  uint64_t local_e48;
  uint64_t local_e40;
  uint64_t local_e38;
  void*local_e30;
  uint64_t local_e28;
  uint64_t local_e20;
  uint32_t local_e18;
  uint16_t local_e14;
  uint8_t local_e12;
  uint64_t local_e10;
  uint64_t local_e08;
  uint64_t local_e00;
  uint16_t local_df8;
  void*local_df0;
  void*local_de8;
  uint64_t local_de0;
  uint64_t local_dd8;
  uint64_t local_dd0;
  void*local_dc8;
  uint64_t local_dc0;
  uint64_t local_db8;
  uint32_t local_db0;
  uint16_t local_dac;
  uint8_t local_daa;
  uint64_t local_da8;
  uint64_t local_da0;
  uint64_t local_d98;
  uint16_t local_d90;
  void*local_d88;
  void*local_d80;
  uint64_t local_d78;
  uint64_t local_d70;
  uint64_t local_d68;
  void*local_d60;
  uint64_t local_d58;
  uint64_t local_d50;
  uint32_t local_d48;
  uint16_t local_d44;
  uint8_t local_d42;
  uint64_t local_d40;
  uint64_t local_d38;
  uint64_t local_d30;
  uint16_t local_d28;
  void*local_d20;
  void*local_d18;
  uint64_t local_d10;
  uint64_t local_d08;
  uint64_t local_d00;
  void*local_cf8;
  uint64_t local_cf0;
  uint64_t local_ce8;
  uint32_t local_ce0;
  uint16_t local_cdc;
  uint8_t local_cda;
  uint64_t local_cd8;
  uint64_t local_cd0;
  uint64_t local_cc8;
  uint16_t local_cc0;
  void*local_cb8;
  void*local_cb0;
  uint64_t local_ca8;
  uint64_t local_ca0;
  uint64_t local_c98;
  void*local_c90;
  uint64_t local_c88;
  uint64_t local_c80;
  uint32_t local_c78;
  uint16_t local_c74;
  uint8_t local_c72;
  uint64_t local_c70;
  uint64_t local_c68;
  uint64_t local_c60;
  uint16_t local_c58;
  void*local_c50;
  void*local_c48;
  uint64_t local_c40;
  uint64_t local_c38;
  uint64_t local_c30;
  void*local_c28;
  uint64_t local_c20;
  uint64_t local_c18;
  uint32_t local_c10;
  uint16_t local_c0c;
  uint8_t local_c0a;
  uint64_t local_c08;
  uint64_t local_c00;
  uint64_t local_bf8;
  uint16_t local_bf0;
  void*local_be8;
  void*local_be0;
  uint64_t local_bd8;
  uint64_t local_bd0;
  uint64_t local_bc8;
  void*local_bc0;
  uint64_t local_bb8;
  uint64_t local_bb0;
  uint32_t local_ba8;
  uint16_t local_ba4;
  uint8_t local_ba2;
  uint64_t local_ba0;
  uint64_t local_b98;
  uint64_t local_b90;
  uint16_t local_b88;
  void*local_b80;
  void*local_b78;
  uint64_t local_b70;
  uint64_t local_b68;
  uint64_t local_b60;
  void*local_b58;
  uint64_t local_b50;
  uint64_t local_b48;
  uint32_t local_b40;
  uint16_t local_b3c;
  uint8_t local_b3a;
  uint64_t local_b38;
  uint64_t local_b30;
  uint64_t local_b28;
  uint16_t local_b20;
  void*local_b18;
  void*local_b10;
  uint64_t local_b08;
  uint64_t local_b00;
  uint64_t local_af8;
  void*local_af0;
  uint64_t local_ae8;
  uint64_t local_ae0;
  uint32_t local_ad8;
  uint16_t local_ad4;
  uint8_t local_ad2;
  uint64_t local_ad0;
  uint64_t local_ac8;
  uint64_t local_ac0;
  uint16_t local_ab8;
  void*local_ab0;
  void*local_aa8;
  uint64_t local_aa0;
  uint64_t local_a98;
  uint64_t local_a90;
  void*local_a88;
  uint64_t local_a80;
  uint64_t local_a78;
  uint32_t local_a70;
  uint16_t local_a6c;
  uint8_t local_a6a;
  uint64_t local_a68;
  uint64_t local_a60;
  uint64_t local_a58;
  uint16_t local_a50;
  void*local_a48;
  void*local_a40;
  uint64_t local_a38;
  uint64_t local_a30;
  uint64_t local_a28;
  void*local_a20;
  uint64_t local_a18;
  uint64_t local_a10;
  uint32_t local_a08;
  uint16_t local_a04;
  uint8_t local_a02;
  uint64_t local_a00;
  uint64_t local_9f8;
  uint64_t local_9f0;
  uint16_t local_9e8;
  void*local_9e0;
  void*local_9d8;
  uint64_t local_9d0;
  uint64_t local_9c8;
  uint64_t local_9c0;
  void*local_9b8;
  uint64_t local_9b0;
  uint64_t local_9a8;
  uint32_t local_9a0;
  uint16_t local_99c;
  uint8_t local_99a;
  uint64_t local_998;
  uint64_t local_990;
  uint64_t local_988;
  uint16_t local_980;
  void*local_978;
  void*local_970;
  uint64_t local_968;
  uint64_t local_960;
  uint64_t local_958;
  void*local_950;
  uint64_t local_948;
  uint64_t local_940;
  uint32_t local_938;
  uint16_t local_934;
  uint8_t local_932;
  uint64_t local_930;
  uint64_t local_928;
  uint64_t local_920;
  uint16_t local_918;
  void*local_910;
  void*local_908;
  uint64_t local_900;
  uint64_t local_8f8;
  uint64_t local_8f0;
  void*local_8e8;
  uint64_t local_8e0;
  uint64_t local_8d8;
  uint32_t local_8d0;
  uint16_t local_8cc;
  uint8_t local_8ca;
  uint64_t local_8c8;
  uint64_t local_8c0;
  uint64_t local_8b8;
  uint16_t local_8b0;
  void*local_8a8;
  void*local_8a0;
  uint64_t local_898;
  uint64_t local_890;
  uint64_t local_888;
  void*local_880;
  uint64_t local_878;
  uint64_t local_870;
  uint32_t local_868;
  uint16_t local_864;
  uint8_t local_862;
  uint64_t local_860;
  uint64_t local_858;
  uint64_t local_850;
  uint16_t local_848;
  void*local_840;
  void*local_838;
  uint64_t local_830;
  uint64_t local_828;
  uint64_t local_820;
  void*local_818;
  uint64_t local_810;
  uint64_t local_808;
  uint32_t local_800;
  uint16_t local_7fc;
  uint8_t local_7fa;
  uint64_t local_7f8;
  uint64_t local_7f0;
  uint64_t local_7e8;
  uint16_t local_7e0;
  void*local_7d8;
  void*local_7d0;
  uint64_t local_7c8;
  uint64_t local_7c0;
  uint64_t local_7b8;
  void*local_7b0;
  uint64_t local_7a8;
  uint64_t local_7a0;
  uint32_t local_798;
  uint16_t local_794;
  uint8_t local_792;
  uint64_t local_790;
  uint64_t local_788;
  uint64_t local_780;
  uint16_t local_778;
  void*local_770;
  void*local_768;
  uint64_t local_760;
  uint64_t local_758;
  uint64_t local_750;
  void*local_748;
  uint64_t local_740;
  uint64_t local_738;
  uint32_t local_730;
  uint16_t local_72c;
  uint8_t local_72a;
  uint64_t local_728;
  uint64_t local_720;
  uint64_t local_718;
  uint16_t local_710;
  void*local_708;
  void*local_700;
  uint64_t local_6f8;
  uint64_t local_6f0;
  uint64_t local_6e8;
  void*local_6e0;
  uint64_t local_6d8;
  uint64_t local_6d0;
  uint32_t local_6c8;
  uint16_t local_6c4;
  uint8_t local_6c2;
  uint64_t local_6c0;
  uint64_t local_6b8;
  uint64_t local_6b0;
  uint16_t local_6a8;
  void*local_6a0;
  void*local_698;
  uint64_t local_690;
  uint64_t local_688;
  uint64_t local_680;
  void*local_678;
  uint64_t local_670;
  uint64_t local_668;
  uint32_t local_660;
  uint16_t local_65c;
  uint8_t local_65a;
  uint64_t local_658;
  uint64_t local_650;
  uint64_t local_648;
  uint16_t local_640;
  void*local_638;
  void*local_630;
  uint64_t local_628;
  uint64_t local_620;
  uint64_t local_618;
  void*local_610;
  uint64_t local_608;
  uint64_t local_600;
  uint32_t local_5f8;
  uint16_t local_5f4;
  uint8_t local_5f2;
  uint64_t local_5f0;
  uint64_t local_5e8;
  uint64_t local_5e0;
  uint16_t local_5d8;
  void*local_5d0;
  void*local_5c8;
  uint64_t local_5c0;
  uint64_t local_5b8;
  uint64_t local_5b0;
  void*local_5a8;
  uint64_t local_5a0;
  uint64_t local_598;
  uint32_t local_590;
  uint16_t local_58c;
  uint8_t local_58a;
  uint64_t local_588;
  uint64_t local_580;
  uint64_t local_578;
  uint16_t local_570;
  void*local_568;
  void*local_560;
  uint64_t local_558;
  uint64_t local_550;
  uint64_t local_548;
  void*local_540;
  uint64_t local_538;
  uint64_t local_530;
  uint32_t local_528;
  uint16_t local_524;
  uint8_t local_522;
  uint64_t local_520;
  uint64_t local_518;
  uint64_t local_510;
  uint16_t local_508;
  string *local_500;
  void*local_4f8;
  uint64_t local_4f0;
  uint64_t local_4e8;
  uint64_t local_4e0;
  void*local_4d8;
  uint64_t local_4d0;
  uint64_t local_4c8;
  uint32_t local_4c0;
  uint16_t local_4bc;
  uint8_t local_4ba;
  uint64_t local_4b8;
  uint64_t local_4b0;
  uint64_t local_4a8;
  uint16_t local_4a0;
  uint8_t local_498;
  uint32_t uStack_497;
  undefined3 uStack_493;
  uint16_t local_490;
  uint64_t local_48e;
  uint64_t local_486;
  undefined7 local_47e;
  uint8_t uStack_477;
  undefined7 uStack_476;
  uint32_t local_468;
  uint16_t local_464;
  void*local_460;
  uint64_t local_458;
  uint64_t local_450;
  uint64_t local_448;
  void*local_440;
  uint32_t local_438;
  uint64_t local_430;
  uint32_t local_428;
  uint16_t local_424;
  uint8_t local_422;
  uint16_t local_420;
  int64_t *local_418;
  uint8_t local_410;
  int64_t local_408;
  int64_t local_400;
  int64_t local_3f0;
  int64_t local_3e8;
  int64_t local_3d8;
  int64_t lStack_3d0;
  uint64_t local_3c8;
  uint64_t uStack_3c0;
  void*local_3b8;
  uint64_t local_3b0;
  uint64_t local_3a8;
  void*local_398;
  void*puStack_390;
  uint64_t local_388;
  uint local_360;
  uint uStack_35c;
  uint32_t local_358;
  uint8_t uStack_354;
  code *local_340;
  code *local_338;
  uint64_t local_330;
  code *local_328;
  code *local_320;
  uint64_t local_318;
  uint64_t local_310;
  code *local_308;
  void*local_300;
  void*local_2f8;
  void*local_2f0;
  void*local_2e8;
  void*local_2e0;
  void*local_2d8;
  void*local_2d0;
  void*local_2c8;
  void*local_2c0;
  void*local_2b8;
  void*local_2b0;
  void*local_2a8;
  void*local_2a0;
  void*local_298;
  void*local_290;
  void*local_288;
  void*local_280;
  void*local_278;
  void*local_270;
  void*local_268;
  void*local_260;
  void*local_258;
  void*local_250;
  void*local_248;
  void*local_240;
  void*local_238;
  void*local_230;
  void*local_228;
  void*local_220;
  void*local_218;
  void*local_210;
  void*local_208;
  void*local_200;
  void*local_1f8;
  string *local_1f0;
  void**local_1e8;
  uint64_t local_1e0;
  uint64_t local_1d8;
  int64_t *plStack_1d0;
  uint64_t local_1c8;
  int64_t *plStack_1c0;
  uint64_t local_1b8;
  uint64_t uStack_1b0;
  uint64_t local_1a8;
  int64_t local_198;
  int64_t *local_190;
  int64_t local_188;
  int64_t *local_180;
  uint64_t local_178;
  uint64_t uStack_170;
  uint64_t local_168;
  uint64_t local_158;
  uint64_t uStack_150;
  uint64_t local_148;
  int64_t local_138;
  int64_t lStack_130;
  uint64_t local_128;
  string *local_118;
  int64_t local_110;
  int64_t local_108;
  int64_t lStack_100;
  uint64_t local_f8;
  uint64_t local_f0;
  uint64_t local_e8;
  int64_t local_e0;
  int64_t local_d8;
  int64_t lStack_d0;
  uint64_t local_c8;
  string *local_b8;
  void**local_b0;
  uint64_t local_a8;
  uint64_t uStack_a0;
  void*local_98;
  void*local_90;
  int64_t local_88;
  int local_7c;
  code *local_78;
  uint64_t local_64;
  uint local_5c;
  uint64_t local_58;
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
  local_98 = (void*)0x0;
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
  if (*(int64_t *)(arg1 + 0x10) == *(int64_t *)(arg1 + 8)) {
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                          ,0x3cb2);
    FUN_009bd14b(uVar13,uVar6);
  }
  if (*(char *)(arg1 + 0x20) == '\0') {
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                          ,0x3cb9);
    FUN_009bd14b(uVar13,uVar6);
  }
  if ((local_b8[0xf] != (string)0x0) &&
     ((FUN_0092e102(), *(char *)((int64_t)this_ptr + 0x195) == '\0' ||
      (*(char *)((int64_t)this_ptr + 0x17b) == '\0')))) {
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                          ,0x3cc2);
    FUN_009bd14b(uVar13,uVar6);
  }
  local_460 = &g_02517678;
  psVar7 = (string *)0x0;
  local_458 = 0;
  local_450 = 0;
  local_448 = 0;
  local_440 = &g_0251cd00;
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
  local_418 = this_ptr + 3;
  local_410 = 0;
  FUN_009b4e10();
  if (this_ptr[0xe] == 0) {
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                          ,0x3cdd);
    FUN_009bd14b(uVar13,uVar6);
  }
  local_198 = this_ptr[1];
  local_190 = (int64_t *)this_ptr[2];
  if (local_190 != (int64_t *)0x0) {
    LOCK();
    local_190[1] = local_190[1] + 1;
    UNLOCK();
  }
  pcVar8 = (char *)(uint64_t)*(uint *)(this_ptr + 0xd);
  local_188 = this_ptr[0xe];
  local_180 = (int64_t *)this_ptr[0xf];
  if (local_180 != (int64_t *)0x0) {
    LOCK();
    local_180[1] = local_180[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_00975dba(pcVar8,&local_460,&local_188);
  if (local_180 != (int64_t *)0x0) {
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
  if (local_190 != (int64_t *)0x0) {
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
  lVar12 = *(int64_t *)(*(int64_t *)(arg1 + 8) + 0x20) -
           *(int64_t *)(*(int64_t *)(arg1 + 8) + 0x18);
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
  local_398 = (void*)CONCAT44(local_398._4_4_,0xfffffffe);
  local_1200 = (void*)0x7ffffffffffffffe;
  pcVar8 = (char *)&local_1200;
  FUN_00953fa0(extraout_XMM0_Da,(string *)&local_1200);
  local_90 = local_2dc0;
  local_300 = &g_0251a230;
  local_2f8 = &g_0251a298;
  local_2f0 = &g_02529a68;
  local_2e8 = &g_02528fc0;
  local_2e0 = &g_02528f58;
  local_2d8 = &g_02529018;
  local_2d0 = &g_02529070;
  local_2c8 = &g_025290c8;
  local_2c0 = &g_02529120;
  local_2b8 = &g_02529178;
  local_2b0 = &g_025291d0;
  local_2a8 = &g_02529228;
  local_2a0 = &g_02529280;
  local_298 = &g_025292d8;
  local_290 = &g_02529330;
  local_288 = &g_02529388;
  local_280 = &g_025293e0;
  local_278 = &g_02529438;
  local_270 = &g_02529490;
  local_268 = &g_025294e8;
  local_260 = &g_02529540;
  local_258 = &g_02529598;
  local_250 = &g_025295f0;
  local_248 = &g_02529648;
  local_240 = &g_025296a0;
  local_238 = &g_025296f8;
  local_230 = &g_02529750;
  local_228 = &g_025297a8;
  local_220 = &g_02529800;
  local_218 = &g_02529858;
  local_210 = &g_025298b0;
  local_208 = &g_02529908;
  local_200 = &g_02529960;
  local_1f8 = &g_025299b8;
  local_1f0 = (string *)&g_02529a10;
  *(void*)(arg1 + 0x20) = 1;
  *(void*)(arg1 + 0x24) = 100;
  local_118 = (string *)&puStack_390;
  local_1e8 = &local_11f8;
  local_58 = 0;
  local_f0 = 0;
  do {
    psVar7 = local_118;
    local_398 = local_300;
    *(void*)(local_118 + 0x3f) = 0;
    *(void**)(psVar7 + 0x38) = (void*)0x0;
    *(void**)(psVar7 + 0x30) = (void*)0x0;
    *(void**)(psVar7 + 0x28) = (void*)0x0;
    *(void**)(psVar7 + 0x20) = (void*)0x0;
    *(void**)(psVar7 + 0x18) = (void*)0x0;
    *(void**)(psVar7 + 0x10) = (void*)0x0;
    *(void**)(psVar7 + 8) = (void*)0x0;
    *(void**)psVar7 = (void*)0x0;
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
    std::string::string(local_1f0,(string *)CONCAT71((int7)((uint64_t)pcVar8 >> 8),1));
    if (((uint64_t)puStack_390 & 1) != 0) {
      operator_delete(psVar7);
    }
    psVar7 = local_118;
    *(code **)(local_118 + 0x10) = local_2db0;
    *(string **)(psVar7 + 8) = local_2db8;
    *(void**)psVar7 = local_2dc0;
    std::string::operator=(local_2db8,psVar7);
    local_360 = local_4c;
    uStack_35c = local_5c;
    local_358 = (uint32_t)local_64;
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
    if (((uint64_t)local_48 & 1) != 0) {
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
                   ,&g_00003d29);
      FUN_009bd14b();
    }
    lVar12 = FUN_00a35332();
    if (local_4c == 0) {
      if (lVar12 == 0) {
        FUN_00925fd0();
        FUN_00926010();
        local_48 = &local_a8;
        pcStack_40 = FUN_009b6370;
        local_38 = FUN_0094ef70;
        FUN_00983230();
        pcVar8 = 
        "void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
        ;
        FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                     ,&g_00003d3f);
        FUN_009bd14b();
      }
      else if (lVar12 != 1) {
        FUN_00925fd0();
        FUN_00926010();
        local_48 = &local_a8;
        pcStack_40 = FUN_009b6370;
        local_38 = FUN_0094ef70;
        FUN_00983230();
        pcVar8 = 
        "void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
        ;
        FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                     ,&g_00003d48);
        FUN_009bd14b();
      }
      psVar7 = (string *)0x0;
      FUN_00a34c64();
      local_78 = local_48;
      if (local_48 == 0x0) {
        FUN_00925fd0();
        psVar7 = (string *)FUN_00926010();
        local_48 = &local_a8;
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
      (**(code **)(*(uint64_t *)local_78 + 0x48))();
      std::string::operator=((string *)pcVar8,psVar7);
      cVar4 = FUN_00a54e10();
      if (cVar4 == '\0') {
        FUN_00925fd0();
        uVar6 = FUN_00926010();
        local_48 = &local_a8;
        pcStack_40 = FUN_009b6370;
        local_38 = FUN_0094ef70;
        FUN_00983230();
        uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                              ,&g_00003d5f);
        FUN_009bd14b(uVar13,uVar6);
      }
      iVar5 = uStack_3c0._4_4_;
      uVar13 = FUN_00a521fe();
      FUN_009bafbc(uVar13,"issuerId");
      lVar12 = FUN_00a521fe();
      if (iVar5 != *(int *)(lVar12 + 0xb8)) {
        FUN_00925fd0();
        uVar6 = FUN_00926010();
        local_48 = &local_a8;
        pcStack_40 = FUN_009b6370;
        local_38 = FUN_0094ef70;
        FUN_00983230();
        local_48 = ((int64_t)&uStack_3c0 + 4);
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                              ,&g_00003d69);
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
        local_48 = &local_a8;
        pcStack_40 = FUN_009b6370;
        local_38 = FUN_0094ef70;
        FUN_00983230();
        uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                              ,&g_00003d8f);
        FUN_009bd14b(uVar13,uVar6);
      }
      local_338 = local_78;
      local_1d8 = 0;
      plStack_1d0 = (int64_t *)0x0;
      FUN_009515e4();
      puVar9 = &local_1d8;
      FUN_00947d1c(puVar9,&local_2dc0,&local_e8,&local_90,local_b8);
      if (local_408 != 0) {
        local_400 = local_408;
        operator_delete(puVar9);
      }
      if (plStack_1d0 != (int64_t *)0x0) {
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
        local_330 = *(void*)(local_d8 + -8 + local_88 * 8);
        FUN_00941e38(local_110,local_1e0,(int)this_ptr[0x12],4);
        lVar12 = local_88;
      }
    }
    else {
      uVar13 = extraout_XMM0_Da_00;
      if (lVar12 == 0) {
        FUN_00925fd0();
        uVar6 = FUN_00926010();
        local_48 = &local_4c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = &local_5c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = &local_64;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                              ,&g_00003dc2);
        uVar13 = FUN_009bd14b(uVar13,uVar6);
      }
      FUN_00a34c64(uVar13,0);
      local_78 = local_48;
      if (local_48 == 0x0) {
        FUN_00925fd0();
        uVar6 = FUN_00926010();
        local_48 = &local_4c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = &local_5c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = &local_64;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                              ,&g_00003dce);
        FUN_009bd14b(uVar13,uVar6);
      }
      cVar4 = FUN_00a54e10();
      if (cVar4 == '\0') {
        FUN_00925fd0();
        uVar6 = FUN_00926010();
        local_48 = &local_4c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = &local_5c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = &local_64;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                              ,&g_00003dda);
        FUN_009bd14b(uVar13,uVar6);
      }
      iVar5 = uStack_3c0._4_4_;
      uVar13 = FUN_00a521fe();
      FUN_009bafbc(uVar13,"issuerId");
      lVar12 = FUN_00a521fe();
      if (iVar5 != *(int *)(lVar12 + 0xb8)) {
        FUN_00925fd0();
        uVar6 = FUN_00926010();
        local_48 = &local_4c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = &local_5c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = &local_64;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = ((int64_t)&uStack_3c0 + 4);
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                              ,&g_00003de6);
        FUN_009bd14b(uVar13,uVar6);
      }
      local_7c = uStack_3c0._4_4_;
      if (uStack_3c0._4_4_ == 1) {
        local_7c = 0;
      }
      local_328 = local_78;
      FUN_0094631c(local_5c,local_4c,(uint32_t)local_64,&local_d8);
      local_88 = lStack_d0 - local_d8;
      if (local_88 == 0) {
        FUN_00925fd0();
        uVar6 = FUN_00926010();
        local_48 = &local_5c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = &local_4c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = &local_64;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                              ,0x3e11);
        FUN_009bd14b(uVar13,uVar6);
      }
      local_320 = local_78;
      local_1c8 = 0;
      plStack_1c0 = (int64_t *)0x0;
      FUN_009515e4();
      puVar9 = &local_1c8;
      FUN_00947d1c(puVar9,&local_2dc0,&local_e8,&local_90,local_b8);
      if (local_3f0 != 0) {
        local_3e8 = local_3f0;
        operator_delete(puVar9);
      }
      local_88 = local_88 >> 3;
      lVar12 = local_88;
      if (plStack_1c0 != (int64_t *)0x0) {
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
      local_318 = *(void*)(local_d8 + -8 + lVar12 * 8);
      local_58 = local_318;
      (**(code **)(*this_ptr + 0x18))();
      iVar5 = local_7c;
      local_88 = lVar12;
      if (local_7c != 0) {
        uVar13 = FUN_00a1c9ba();
        FUN_009bafbc(uVar13,"publisherId");
        lVar12 = FUN_00a1c9ba();
        if (iVar5 != *(int *)(lVar12 + 0xa0)) {
          FUN_00925fd0();
          uVar6 = FUN_00926010();
          local_48 = &local_7c;
          pcStack_40 = FUN_009cac80;
          local_38 = FUN_009cefa0;
          FUN_00983230();
          uVar13 = FUN_00a1c9ba();
          FUN_009bafbc(uVar13,"authId");
          lVar12 = FUN_00a1c9ba();
          local_48 = (lVar12 + 0x30);
          pcStack_40 = FUN_009cac80;
          local_38 = FUN_009cefa0;
          FUN_00983230();
          uVar13 = FUN_00a1c9ba();
          FUN_009bafbc(uVar13,"publisherId");
          lVar12 = FUN_00a1c9ba();
          local_48 = (lVar12 + 0xa0);
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
      if ((uint64_t)(int64_t)*(int *)(lVar12 + 0x28) <= uVar2) {
        FUN_00925fd0();
        uVar6 = FUN_00926010();
        lVar12 = FUN_008e4ece();
        local_48 = (lVar12 + 0x28);
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        uVar13 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthLicenseDb(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                              ,0x3e42);
        FUN_009bd14b(uVar13,uVar6);
      }
      local_310 = local_58;
      local_308 = local_78;
      FUN_0093bd8e(local_f0,&local_308,(int64_t)&local_64 + 6,&local_90,
                   *(void*)(local_b8 + 0x18),4);
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
    local_64._0_4_ = *(void*)(lVar12 + 0x58);
    pcVar10 = (char *)(uint64_t)local_5c;
    if ((local_4c == 0) || (local_5c == 0)) {
      if ((local_5c & local_4c) != 0) {
        FUN_00925fd0();
        pcVar8 = (char *)FUN_00926010();
        local_48 = &local_4c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = &local_5c;
        pcStack_40 = FUN_009cac80;
        local_38 = FUN_009cefa0;
        FUN_00983230();
        local_48 = &local_64;
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
    *(void*)(arg1 + 0x20) = 0;
    *(void*)(arg1 + 0x24) = 0;
  }
  else if (*(char *)(arg1 + 0x20) != '\0') {
    *(void*)(arg1 + 0x21) = 0;
    pcVar10 = (char *)local_b8;
    if (local_b8[0xb] != (string)0x0) {
      if (*(int64_t *)(arg1 + 0x58) == 1) {
        local_2dc0 = &g_025197b8;
        local_2db0 = 0x0;
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
    if (local_b0 != (void**)0x0) {
      local_2dc0 = &g_02519a40;
      local_2db8 = (string *)&g_0251c5a8;
      local_2db0 = 0x0;
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
      local_2d30 = &g_0251c338;
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
      local_2bf8 = &g_0251c3a0;
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
      local_2b30 = (void*)0x0;
      local_1200 = &g_02519aa8;
      local_11f8 = (void*)0x0;
      local_11f0 = 0;
      local_11e8 = 0;
      local_11e0 = 0x400000000;
      local_11d8 = 0;
      local_11d6 = 1;
      uVar13 = FUN_008f91be();
      if (&local_2b30 != local_b0) {
        FUN_008df080(uVar13,local_b0[1]);
      }
      local_2b18 = CONCAT44(*(void*)((int64_t)this_ptr + 0x1ac),0x80000000);
      local_388 = 0;
      local_398 = (void*)0x0;
      puStack_390 = (void*)0x0;
      local_38 = 0x0;
      local_48 = 0x0;
      pcStack_40 = 0x0;
      FUN_0094a57c(0,1);
      pcVar10 = (char *)&local_48;
      uVar13 = FUN_00928f8a(pcVar10,&local_398);
      uVar13 = FUN_0095169d(uVar13,&local_1200);
      if (&local_11f8 != local_b0) {
        FUN_009ad770(uVar13,local_11f0);
      }
      if (local_48 != 0x0) {
        pcStack_40 = local_48;
        operator_delete(pcVar10);
      }
      if (local_398 != (void*)0x0) {
        puStack_390 = local_398;
        operator_delete(pcVar10);
      }
      FUN_008b8010();
      uVar13 = FUN_008b7902();
    }
  }
  uVar13 = FUN_00944c8e(uVar13,&local_460);
  if (*(char *)(arg1 + 0x20) == '\0') {
    local_1200 = (void*)0x11e1a300;
    uVar13 = FUN_0094ca28(uVar13,&local_90);
    FUN_00947768(uVar13,&local_1200);
    local_2dc0 = (void*)0x0;
    iVar5 = FUN_0098c910();
    if (iVar5 == -1) {
      FUN_00925fd0();
      uVar6 = FUN_00926010();
      local_2dc0 = (void*)(arg1 + 0x60);
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
  if ((local_res8 != 0) && (local_res10 != (int64_t *)0x0)) {
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

