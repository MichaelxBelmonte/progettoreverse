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

void FUN_009940ec(int64_t param_1,byte *param_2,int64_t param_3,ulong param_4)

{
  byte bVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint32_t unaff_ESI;
  int64_t this_ptr;
  bool bVar7;
  uint64_t local_190;
  uint64_t local_188;
  uint64_t local_180;
  uint64_t local_178;
  uint64_t local_170;
  uint64_t local_168;
  uint16_t local_160;
  void*local_158;
  uint64_t local_150;
  uint64_t local_148;
  uint64_t local_140;
  uint32_t local_138;
  uint64_t local_130;
  uint64_t local_128;
  uint64_t local_120;
  uint64_t local_118 [5];
  undefined5 uStack_f0;
  undefined3 local_eb;
  undefined5 uStack_e8;
  uint16_t local_e0;
  int64_t local_d8;
  int64_t local_d0;
  uint64_t local_c8;
  uint64_t local_c0;
  uint64_t local_b8;
  uint64_t local_b0;
  void*local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  undefined7 local_80;
  uint32_t uStack_79;
  uint32_t local_70;
  uint8_t local_6c;
  uint64_t *local_68;
  code *local_60;
  code *local_58;
  int64_t local_50;
  int64_t local_48;
  uint64_t local_40;
  uint local_38;
  ulong local_34;
  
  local_50 = param_3;
  local_48 = param_1;
  local_34 = param_4;
  if (*(int64_t *)(this_ptr + 8) == 0) {
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
  local_158 = &g_0251b400;
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
  local_a8 = &g_0251d288;
  local_80 = 0;
  uStack_79 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_6c = 0;
  local_70 = 0;
  (**(code **)(**(int64_t **)(this_ptr + 8) + 0x10))();
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
    bVar1 = (bVar1 ^ *(byte *)(*(int64_t *)(this_ptr + 0x20) + lVar5)) -
            *(char *)(*(int64_t *)(this_ptr + 0x20) + 2 + lVar5);
    param_2[lVar5 + 1] = param_2[lVar5 + 1] ^ bVar1;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0xe);
  if ((char)local_34 == '\0') goto LAB_009946a8;
  bVar1 = param_2[10];
  if (bVar1 != 0) {
    lVar5 = *(int64_t *)(local_48 + 8);
    if (lVar5 != 0) {
      lVar4 = local_48 + 8;
      do {
        bVar7 = *(byte *)(lVar5 + 0x1c) < bVar1;
        if (!bVar7) {
          lVar4 = lVar5;
        }
        lVar5 = *(int64_t *)(lVar5 + (uint64_t)bVar7 * 8);
      } while (lVar5 != 0);
      if (((lVar4 != local_48 + 8) && (*(byte *)(lVar4 + 0x1c) <= bVar1)) &&
         (*(int *)(lVar4 + 0x20) == 0)) goto LAB_009945ec;
    }
    FUN_00925fd0();
    FUN_00926010();
    local_68 = (uint64_t *)&local_38;
    local_38 = (uint)param_2[10];
    local_60 = FUN_009595d8;
    local_58 = &LAB_009977a0;
    FUN_00983230();
    FUN_00928ab0("void pace::Ilok1Commander::doIlok1Command(const uint32_t, pace::Ilok1Command_T &, const pace::IlokFirmwareErrorExceptionCodeMap_T &, const pace::IlokFirmwareErrorExceptionCodeMap_T &, const bool)"
                 ,0x2fb);
    FUN_009c6d8b();
  }
LAB_009945ec:
  bVar1 = param_2[9];
  if (bVar1 != 0) {
    lVar5 = *(int64_t *)(lVar6 + 8);
    if (lVar5 != 0) {
      lVar6 = lVar6 + 8;
      lVar4 = lVar6;
      do {
        bVar7 = *(byte *)(lVar5 + 0x1c) < bVar1;
        if (!bVar7) {
          lVar4 = lVar5;
        }
        lVar5 = *(int64_t *)(lVar5 + (uint64_t)bVar7 * 8);
      } while (lVar5 != 0);
      if (((lVar4 != lVar6) && (*(byte *)(lVar4 + 0x1c) <= bVar1)) && (*(int *)(lVar4 + 0x20) == 0))
      goto LAB_009946a8;
    }
    FUN_00925fd0();
    FUN_00926010();
    local_68 = (uint64_t *)&local_38;
    local_38 = (uint)param_2[9];
    local_60 = FUN_009595d8;
    local_58 = &LAB_009977a0;
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

