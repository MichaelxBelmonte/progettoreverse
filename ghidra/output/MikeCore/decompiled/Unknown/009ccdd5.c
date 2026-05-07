// Function: FUN_009ccdd5
// Address: 009ccdd5
// Size: 629 bytes
// Class: Unknown
// String references:
//   "\n"
//   "The inDerData parameter cannot be NULL."
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libpaceutil/CryptUtils.cpp...
//   "std::string pace::convertDerCertToPem(const uint8_t *, const size_t)"
//   "The inNumBytes parameter cannot be 0."
//   "-----BEGIN CERTIFICATE-----"
//   "-----END CERTIFICATE-----"


undefined8 * FUN_009ccdd5(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  void *pvVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  byte local_c0;
  byte local_90;
  string local_60 [8];
  ulong local_58;
  byte local_48;
  char local_47 [7];
  ulonglong local_40;
  char *local_38;
  
  if (unaff_RSI == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("std::string pace::convertDerCertToPem(const uint8_t *, const size_t)",0x24);
    FUN_009cd338();
  }
  if (param_2 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("std::string pace::convertDerCertToPem(const uint8_t *, const size_t)",0x25);
    FUN_009cd338();
  }
  FUN_009cc73a();
  FUN_009f189e();
  uVar3 = local_40;
  pcVar6 = local_38;
  if ((local_48 & 1) == 0) {
    uVar3 = (ulonglong)(local_48 >> 1);
    pcVar6 = local_47;
  }
  if (pcVar6[uVar3 - 1] != '\n') {
    std::string::push_back((char)pcVar6);
  }
  FUN_009cd0de();
  std::operator+(pcVar6,local_60);
  if ((local_48 & 1) == 0) {
    local_40._0_4_ = (ulong)(local_48 >> 1);
  }
  puVar4 = (ulonglong *)std::string::append(pcVar6,(ulong)local_40);
  uVar3 = *puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4 = (ulonglong *)std::string::append((char *)0x0);
  uVar1 = *puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  if (((byte)local_60[0] & 1) == 0) {
    local_58 = (ulong)((byte)local_60[0] >> 1);
  }
  puVar5 = (undefined8 *)std::string::append((char *)0x0,local_58);
  unaff_RDI[2] = puVar5[2];
  uVar2 = *puVar5;
  unaff_RDI[1] = puVar5[1];
  *unaff_RDI = uVar2;
  pvVar7 = (void *)0x0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  if ((uVar1 & 1) != 0) {
    operator_delete((void *)0x0);
  }
  if ((uVar3 & 1) != 0) {
    operator_delete(pvVar7);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(pvVar7);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(pvVar7);
  }
  if ((local_48 & 1) != 0) {
    operator_delete(pvVar7);
  }
  if ((local_c0 & 1) != 0) {
    operator_delete(pvVar7);
  }
  return unaff_RDI;
}


