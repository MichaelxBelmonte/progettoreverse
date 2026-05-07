// Function: FUN_00a139b2
// Address: 00a139b2
// Size: 573 bytes
// Class: Unknown
// String references:
//   "Path to the bundle: \"%s\""
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libwrapper/WrapperUtils.cp...
//   "pace::wrapper::EdenBundleHelper::EdenBundleHelper(const boost::filesystem::path &, const bool, cons...


void FUN_00a139b2(char *param_1,string *param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined8 *unaff_RDI;
  byte local_b8 [24];
  byte local_a0;
  undefined8 *local_88;
  string *local_80;
  string *local_78;
  string *local_70;
  longlong local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  byte *local_48;
  code *local_40;
  code *local_38;
  
  local_50 = SUB84(param_1,0);
  local_54 = SUB84(param_2,0);
  *unaff_RDI = &DAT_02526110;
  *(undefined2 *)(unaff_RDI + 1) = 0;
  local_4c = param_3;
  std::string::string((string *)param_1,param_2);
  local_80 = (string *)(unaff_RDI + 5);
  local_78 = (string *)(unaff_RDI + 6);
  local_70 = (string *)(unaff_RDI + 7);
  unaff_RDI[9] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[5] = 0;
  local_88 = unaff_RDI + 2;
  std::string::string((string *)param_1,param_2);
  std::string::string((string *)param_1,param_2);
  FUN_00a15292();
  if ((local_a0 & 1) != 0) {
    operator_delete(param_1);
  }
  if (local_60 == 0) {
    FUN_00925fd0();
    param_2 = (string *)FUN_00926010();
    local_40 = FUN_009b6370;
    local_38 = FUN_0094ef70;
    local_48 = local_b8;
    FUN_00983230();
    param_1 = 
    "pace::wrapper::EdenBundleHelper::EdenBundleHelper(const boost::filesystem::path &, const bool, const bool, const bool)"
    ;
    FUN_00928ab0("pace::wrapper::EdenBundleHelper::EdenBundleHelper(const boost::filesystem::path &, const bool, const bool, const bool)"
                 ,0x2fd);
    FUN_009cc07b();
  }
  if ((char)local_54 != '\0') {
    pvVar1 = operator_new((ulong)param_1);
    FUN_00abdff8();
    local_48 = *(byte **)local_80;
    *(void **)local_80 = pvVar1;
    param_1 = (char *)local_80;
    FUN_00a13948();
  }
  if ((char)local_50 != '\0') {
    pvVar1 = operator_new((ulong)param_1);
    FUN_00abe15c();
    std::string::string((string *)param_1,param_2);
    *(void **)local_78 = pvVar1;
    param_1 = (char *)local_78;
    FUN_00a15260();
    if (((ulonglong)local_48 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  if ((char)local_4c != '\0') {
    pvVar1 = operator_new((ulong)param_1);
    FUN_00abe28a();
    std::string::string((string *)param_1,param_2);
    *(void **)local_70 = pvVar1;
    param_1 = (char *)local_70;
    FUN_00a15260();
    if (((ulonglong)local_48 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_00a14d78();
  if ((local_b8[0] & 1) != 0) {
    operator_delete(param_1);
  }
  return;
}


