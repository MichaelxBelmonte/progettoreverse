// Function: FUN_009a7972
// Address: 009a7972
// Size: 1300 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "The signed message (%d) is too small to hold the message header (%d)."
//   "virtual void pace::ILok2Commander::parseSignedMessage(const vector<uint8_t> &, MSTS_MessageHeaderSt...
//   "The signed message (%d) is too small to hold the message header (%d) and cert chain (%d)."
//   "The signed message (%d) is too small to hold the message header (%d), cert chain (%d) and preamble ...
//   "The signed message (%d) is too small to hold the message header (%d), cert chain (%d), preamble (%d...


void FUN_009a7972(longlong param_1,uint *param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  longlong *unaff_RSI;
  undefined8 local_a0;
  uint local_98 [2];
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  uint *local_78;
  code *local_70;
  code *local_68;
  uint local_50;
  uint local_4c;
  uint local_48 [4];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  puVar5 = (undefined8 *)*unaff_RSI;
  local_4c = (uint)(unaff_RSI[1] - (longlong)puVar5);
  local_88 = param_4;
  if ((unaff_RSI[1] - (longlong)puVar5 & 0xfffffff0U) == 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_78 = &local_4c;
    local_70 = FUN_009595d8;
    local_68 = (code *)&LAB_009977a0;
    FUN_00983230();
    local_78 = local_48;
    local_48[0] = 0x10;
    local_48[1] = 0;
    local_70 = FUN_00ac1940;
    local_68 = FUN_009baee0;
    FUN_00983230();
    FUN_00928ab0("virtual void pace::ILok2Commander::parseSignedMessage(const vector<uint8_t> &, MSTS_MessageHeaderStruct *, vector<uint8_t> *, CMD_SignedMessageAndFirmwarePreambleStruct *, vector<uint8_t> *)"
                 ,&DAT_00001746);
    FUN_009c720b();
    puVar5 = (undefined8 *)*unaff_RSI;
  }
  puVar6 = local_48;
  if (param_2 != (uint *)0x0) {
    puVar6 = param_2;
  }
  uVar1 = *puVar5;
  *(undefined8 *)(puVar6 + 2) = puVar5[1];
  *(undefined8 *)puVar6 = uVar1;
  local_50 = puVar6[3];
  if ((ulonglong)local_4c < (ulonglong)local_50 + 0x10) {
    FUN_00925fd0();
    FUN_00926010();
    local_78 = &local_4c;
    local_70 = FUN_009595d8;
    local_68 = (code *)&LAB_009977a0;
    FUN_00983230();
    local_78 = (uint *)&local_80;
    local_80 = 0x10;
    local_70 = FUN_00ac1940;
    local_68 = FUN_009baee0;
    FUN_00983230();
    local_78 = &local_50;
    local_70 = FUN_009595d8;
    local_68 = (code *)&LAB_009977a0;
    FUN_00983230();
    FUN_00928ab0("virtual void pace::ILok2Commander::parseSignedMessage(const vector<uint8_t> &, MSTS_MessageHeaderStruct *, vector<uint8_t> *, CMD_SignedMessageAndFirmwarePreambleStruct *, vector<uint8_t> *)"
                 ,&DAT_0000175a);
    FUN_009c720b();
  }
  if (param_1 != 0) {
    FUN_00981bee();
  }
  uVar3 = local_50;
  if ((ulonglong)local_4c < (ulonglong)local_50 + 0x34) {
    FUN_00925fd0();
    FUN_00926010();
    local_78 = &local_4c;
    local_70 = FUN_009595d8;
    local_68 = (code *)&LAB_009977a0;
    FUN_00983230();
    local_78 = (uint *)&local_80;
    local_80 = 0x10;
    local_70 = FUN_00ac1940;
    local_68 = FUN_009baee0;
    FUN_00983230();
    local_78 = &local_50;
    local_70 = FUN_009595d8;
    local_68 = (code *)&LAB_009977a0;
    FUN_00983230();
    local_78 = (uint *)&local_90;
    local_90 = 0x24;
    local_70 = FUN_00ac1940;
    local_68 = FUN_009baee0;
    FUN_00983230();
    FUN_00928ab0("virtual void pace::ILok2Commander::parseSignedMessage(const vector<uint8_t> &, MSTS_MessageHeaderStruct *, vector<uint8_t> *, CMD_SignedMessageAndFirmwarePreambleStruct *, vector<uint8_t> *)"
                 ,&DAT_00001770);
    FUN_009c720b();
  }
  if (param_3 != (undefined8 *)0x0) {
    uVar4 = (ulonglong)(uVar3 + 0x10);
    lVar2 = *unaff_RSI;
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(lVar2 + 0x20 + uVar4);
    param_3[3] = *(undefined8 *)(lVar2 + 0x18 + uVar4);
    param_3[2] = *(undefined8 *)(lVar2 + 0x10 + uVar4);
    uVar1 = *(undefined8 *)(lVar2 + uVar4);
    param_3[1] = *(undefined8 *)(lVar2 + 8 + uVar4);
    *param_3 = uVar1;
  }
  if ((ulonglong)local_4c < (ulonglong)local_50 + 0x54) {
    FUN_00925fd0();
    FUN_00926010();
    local_78 = &local_4c;
    local_70 = FUN_009595d8;
    local_68 = (code *)&LAB_009977a0;
    FUN_00983230();
    local_78 = (uint *)&local_80;
    local_80 = 0x10;
    local_70 = FUN_00ac1940;
    local_68 = FUN_009baee0;
    FUN_00983230();
    local_78 = &local_50;
    local_70 = FUN_009595d8;
    local_68 = (code *)&LAB_009977a0;
    FUN_00983230();
    local_78 = (uint *)&local_90;
    local_90 = 0x24;
    local_70 = FUN_00ac1940;
    local_68 = FUN_009baee0;
    FUN_00983230();
    local_78 = (uint *)&local_a0;
    local_a0 = 0x48;
    local_70 = FUN_00ac1940;
    local_68 = FUN_009baee0;
    FUN_00983230();
    local_78 = local_98;
    local_98[0] = 0x14;
    local_98[1] = 0;
    local_70 = FUN_00ac1940;
    local_68 = FUN_009baee0;
    FUN_00983230();
    FUN_00928ab0("virtual void pace::ILok2Commander::parseSignedMessage(const vector<uint8_t> &, MSTS_MessageHeaderStruct *, vector<uint8_t> *, CMD_SignedMessageAndFirmwarePreambleStruct *, vector<uint8_t> *)"
                 ,&DAT_00001786);
    FUN_009c720b();
  }
  if (local_88 != 0) {
    FUN_0099e98a();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


