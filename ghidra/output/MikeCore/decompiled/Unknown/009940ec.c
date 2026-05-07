// Function: FUN_009940ec
// Address: 009940ec
// Size: 1510 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok1Commander...
//   "ILok conduit not set"
//   "void pace::Ilok1Commander::doIlok1Command(const uint32_t, pace::Ilok1Command_T &, const pace::IlokF...
//   "IlokUsbException"
//   "%s::%s Exception in the result packet. DebugMsg = %s"
//   "Major error code 0x%'0'2.2lX from iLok firmware."
//   "Minor error code 0x%'0'2.2lX from iLok firmware."


void FUN_009940ec(longlong param_1,byte *param_2,longlong param_3,ulong param_4)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 unaff_ESI;
  longlong unaff_RDI;
  bool bVar7;
  ulonglong local_190;
  ulonglong local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined2 local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  ulonglong local_118 [5];
  undefined5 uStack_f0;
  undefined3 local_eb;
  undefined5 uStack_e8;
  undefined2 local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined7 local_80;
  undefined4 uStack_79;
  undefined4 local_70;
  undefined1 local_6c;
  ulonglong *local_68;
  code *local_60;
  code *local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  uint local_38;
  ulong local_34;
  
  local_50 = param_3;
  local_48 = param_1;
  local_34 = param_4;
  if (*(longlong *)(unaff_RDI + 8) == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("void pace::Ilok1Commander::doIlok1Command(const uint32_t, pace::Ilok1Command_T &, const pace::IlokFirmwareErrorExceptionCodeMap_T &, const pace::IlokFirmwareErrorExceptionCodeMap_T &, const bool)"
                 ,0x2c9);
    FUN_009c720b();
  }
  FUN_00994f2a();
  FUN_0092ca9c(unaff_ESI,param_2 + 0xf);
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = &DAT_0251b400;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  local_eb = 0;
  local_118[4] = 0;
  local_118[3] = 0;
  local_118[2] = 0;
  local_118[1] = 0;
  local_118[0] = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_e0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_a8 = &DAT_0251d288;
  local_80 = 0;
  uStack_79 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_6c = 0;
  local_70 = 0;
  (**(code **)(**(longlong **)(unaff_RDI + 8) + 0x10))();
  if (local_70._1_1_ != '\0') {
    uVar3 = local_188;
    if ((local_190 & 1) == 0) {
      uVar3 = local_190 >> 1 & 0x7f;
    }
    if ((uVar3 == 0x10) &&
       (iVar2 = std::string::compare(0x1fca7cd,0xffffffff,(char *)&MACH_HEADER.ncmds,param_4),
       iVar2 == 0)) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00928ab0("void pace::Ilok1Commander::doIlok1Command(const uint32_t, pace::Ilok1Command_T &, const pace::IlokFirmwareErrorExceptionCodeMap_T &, const pace::IlokFirmwareErrorExceptionCodeMap_T &, const bool)"
                   ,0x2e2);
      FUN_009c6d8b();
    }
    FUN_00925fd0();
    local_40 = FUN_00926010();
    local_60 = FUN_009b6370;
    local_58 = FUN_0094ef70;
    local_68 = &local_190;
    FUN_00983230();
    local_68 = &local_150;
    local_60 = FUN_009b6370;
    local_58 = FUN_0094ef70;
    FUN_00983230();
    local_68 = local_118;
    local_60 = FUN_009b6370;
    local_58 = FUN_0094ef70;
    FUN_00983230();
    FUN_00928ab0("void pace::Ilok1Commander::doIlok1Command(const uint32_t, pace::Ilok1Command_T &, const pace::IlokFirmwareErrorExceptionCodeMap_T &, const pace::IlokFirmwareErrorExceptionCodeMap_T &, const bool)"
                 ,0x2ea);
    FUN_009c720b();
  }
  lVar6 = local_50;
  if (local_d8 != local_d0) {
    lVar5 = 0;
    do {
      param_2[lVar5] = *(byte *)(local_d8 + lVar5);
      lVar5 = lVar5 + 1;
    } while (local_d0 - local_d8 != lVar5);
  }
  bVar1 = *param_2;
  lVar5 = 0;
  do {
    bVar1 = (bVar1 ^ *(byte *)(*(longlong *)(unaff_RDI + 0x20) + lVar5)) -
            *(char *)(*(longlong *)(unaff_RDI + 0x20) + 2 + lVar5);
    param_2[lVar5 + 1] = param_2[lVar5 + 1] ^ bVar1;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0xe);
  if ((char)local_34 == '\0') goto LAB_009946a8;
  bVar1 = param_2[10];
  if (bVar1 != 0) {
    lVar5 = *(longlong *)(local_48 + 8);
    if (lVar5 != 0) {
      lVar4 = local_48 + 8;
      do {
        bVar7 = *(byte *)(lVar5 + 0x1c) < bVar1;
        if (!bVar7) {
          lVar4 = lVar5;
        }
        lVar5 = *(longlong *)(lVar5 + (ulonglong)bVar7 * 8);
      } while (lVar5 != 0);
      if (((lVar4 != local_48 + 8) && (*(byte *)(lVar4 + 0x1c) <= bVar1)) &&
         (*(int *)(lVar4 + 0x20) == 0)) goto LAB_009945ec;
    }
    FUN_00925fd0();
    FUN_00926010();
    local_68 = (ulonglong *)&local_38;
    local_38 = (uint)param_2[10];
    local_60 = FUN_009595d8;
    local_58 = (code *)&LAB_009977a0;
    FUN_00983230();
    FUN_00928ab0("void pace::Ilok1Commander::doIlok1Command(const uint32_t, pace::Ilok1Command_T &, const pace::IlokFirmwareErrorExceptionCodeMap_T &, const pace::IlokFirmwareErrorExceptionCodeMap_T &, const bool)"
                 ,0x2fb);
    FUN_009c6d8b();
  }
LAB_009945ec:
  bVar1 = param_2[9];
  if (bVar1 != 0) {
    lVar5 = *(longlong *)(lVar6 + 8);
    if (lVar5 != 0) {
      lVar6 = lVar6 + 8;
      lVar4 = lVar6;
      do {
        bVar7 = *(byte *)(lVar5 + 0x1c) < bVar1;
        if (!bVar7) {
          lVar4 = lVar5;
        }
        lVar5 = *(longlong *)(lVar5 + (ulonglong)bVar7 * 8);
      } while (lVar5 != 0);
      if (((lVar4 != lVar6) && (*(byte *)(lVar4 + 0x1c) <= bVar1)) && (*(int *)(lVar4 + 0x20) == 0))
      goto LAB_009946a8;
    }
    FUN_00925fd0();
    FUN_00926010();
    local_68 = (ulonglong *)&local_38;
    local_38 = (uint)param_2[9];
    local_60 = FUN_009595d8;
    local_58 = (code *)&LAB_009977a0;
    FUN_00983230();
    FUN_00928ab0("void pace::Ilok1Commander::doIlok1Command(const uint32_t, pace::Ilok1Command_T &, const pace::IlokFirmwareErrorExceptionCodeMap_T &, const pace::IlokFirmwareErrorExceptionCodeMap_T &, const bool)"
                 ,0x300);
    FUN_009c6d8b();
  }
LAB_009946a8:
  FUN_0088b022();
  FUN_0088a01a();
  return;
}


