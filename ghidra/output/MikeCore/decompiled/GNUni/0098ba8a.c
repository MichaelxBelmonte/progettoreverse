// Function: FUN_0098ba8a
// Address: 0098ba8a
// Size: 530 bytes
// Class: GNUni
// String references:
//   "/System/Library/Frameworks/Cocoa.framework/Versions/A/Cocoa"
//   "Cert does not have a public key with the requested PKStandardID (%d)"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Certifier.cpp"
//   "pace::Certifier::Certifier(const std::__1::string &, const std::__1::string &, const vector<uint8_t...
//   "The given private key does not correspond to the public key in the cert for the PKStandardID (%d)"


void FUN_0098ba8a(string *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  string *psVar3;
  undefined8 *unaff_RDI;
  undefined1 local_e8 [112];
  undefined8 *local_78;
  code *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  int local_44;
  undefined8 *local_40;
  undefined8 *local_38;
  
  *unaff_RDI = &DAT_02521200;
  local_50 = unaff_RDI + 1;
  local_40 = param_3;
  FUN_009af98e();
  psVar3 = (string *)(unaff_RDI + 0x118);
  *(undefined4 *)(unaff_RDI + 0x118) = 0;
  local_58 = unaff_RDI + 0x119;
  FUN_00991548();
  local_38 = unaff_RDI + 0x154;
  unaff_RDI[0x156] = 0;
  unaff_RDI[0x155] = 0;
  unaff_RDI[0x154] = 0;
  local_60 = unaff_RDI + 0x157;
  std::string::string(param_1,psVar3);
  std::string::string(param_1,psVar3);
  *(undefined1 *)((longlong)unaff_RDI + 0xaec) = 0;
  *(undefined4 *)(unaff_RDI + 0x15e) = param_4;
  uVar2 = FUN_009af724();
  *(undefined4 *)(unaff_RDI + 0x15d) = uVar2;
  if (local_40 != (undefined8 *)0x0) {
    if (local_38 != local_40) {
      FUN_009ad770(local_40,local_40[1]);
    }
    FUN_00991dc8(local_e8,&local_44);
    if (local_44 == -1) {
      FUN_00925fd0();
      FUN_00926010();
      local_70 = FUN_009595d8;
      local_68 = &LAB_009977a0;
      local_78 = unaff_RDI + 0x15d;
      FUN_00983230();
      FUN_00928ab0("pace::Certifier::Certifier(const std::__1::string &, const std::__1::string &, const vector<uint8_t> &, const vector<uint8_t> *, const uint32_t)"
                   ,0x4e);
      FUN_009c720b();
    }
    cVar1 = FUN_009b03da();
    if (cVar1 == '\0') {
      FUN_00925fd0();
      FUN_00926010();
      local_70 = FUN_009595d8;
      local_68 = &LAB_009977a0;
      local_78 = unaff_RDI + 0x15d;
      FUN_00983230();
      FUN_00928ab0("pace::Certifier::Certifier(const std::__1::string &, const std::__1::string &, const vector<uint8_t> &, const vector<uint8_t> *, const uint32_t)"
                   ,0x54);
      FUN_009c720b();
    }
  }
  return;
}


