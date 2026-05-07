// Function: FUN_00e4c4b0
// Address: 00e4c4b0
// Size: 1109 bytes
// Class: GNList
// String references:
//   "GNList"
//   "\t"
//   "null"
//   "GNString"
//   "GNDictionary"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_00e4c4b0(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  int64_t lVar4;
  char *pcVar5;
  int64_t unaff_RBX;
  uint64_t uVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  if (*arg1 == 0) {
    if ((-1 < param_2) && ((char)this_ptr[3] != '\0')) {
      for (; param_2 != 0; param_2 = param_2 + -1) {
        unaff_RBX = this_ptr[2];
        uVar2 = FUN_00e7dde0();
        FUN_00d8db70(extraout_XMM0_Da_03,uVar2);
      }
    }
    FUN_00d8db40();
    uVar6 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
    goto LAB_00e4c6be;
  }
  FUN_00d4efa0();
  pcVar5 = local_38;
  if (local_50[0] != '\0') {
    pcVar5 = local_50;
  }
  local_38[0] = local_50[0];
  *pcVar5 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((g_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    ___cxa_guard_release();
  }
  lVar4 = FUN_00e86210();
  if (lVar4 == local_58) {
    uVar1 = FUN_00e4ca00(extraout_XMM0_Da,param_2);
LAB_00e4c6a9:
    uVar6 = (uint64_t)uVar1;
  }
  else {
    FUN_00053ac0();
    lVar4 = FUN_00e86210();
    if (lVar4 == local_58) {
      uVar1 = FUN_00e4cc70(extraout_XMM0_Da_00,param_2);
      goto LAB_00e4c6a9;
    }
    if ((g_026fdd40 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      g_026cd0e8 = FUN_00d4fe50();
      g_026cd0d0 = "GNDictionary";
      g_026cd0d8 = 0x28;
      g_026cd0e0 = FUN_00022d20;
      g_026cd0f0 = 0;
      ram_00000000026cd0f8 = 0;
      g_026cd100 = 0;
      g_026cd178 = 0;
      ram_00000000026cd180 = 0;
      g_026cd188 = 0;
      g_026cd18a = 6;
      g_026cd108 = 0;
      ram_00000000026cd110 = 0;
      g_026cd118 = 0;
      ram_00000000026cd120 = 0;
      g_026cd128 = 0;
      ram_00000000026cd130 = 0;
      g_026cd138 = 0;
      ram_00000000026cd140 = 0;
      g_026cd148 = 0;
      ram_00000000026cd150 = 0;
      g_026cd158 = 0;
      ram_00000000026cd160 = 0;
      g_026cd168 = 0;
      ram_00000000026cd170 = 0;
      g_026cd193 = 0;
      g_026cd18b = 0;
      ___cxa_guard_release();
    }
    lVar4 = FUN_00e86210();
    if (lVar4 == local_58) {
      uVar1 = FUN_00e4cf10(extraout_XMM0_Da_01,param_2,param_3,param_4,*arg1,0);
      uVar6 = (uint64_t)uVar1;
    }
    else {
      if ((g_027048b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_026cd478 = FUN_00d4fe50();
        g_026cd460 = "GNList";
        g_026cd468 = 0x20;
        g_026cd470 = FUN_00018210;
        g_026cd480 = 0;
        ram_00000000026cd488 = 0;
        g_026cd490 = 0;
        g_026cd508 = 0;
        ram_00000000026cd510 = 0;
        g_026cd518 = 0;
        g_026cd51a = 6;
        g_026cd498 = 0;
        ram_00000000026cd4a0 = 0;
        g_026cd4a8 = 0;
        ram_00000000026cd4b0 = 0;
        g_026cd4b8 = 0;
        ram_00000000026cd4c0 = 0;
        g_026cd4c8 = 0;
        ram_00000000026cd4d0 = 0;
        g_026cd4d8 = 0;
        ram_00000000026cd4e0 = 0;
        g_026cd4e8 = 0;
        ram_00000000026cd4f0 = 0;
        g_026cd4f8 = 0;
        ram_00000000026cd500 = 0;
        g_026cd523 = 0;
        g_026cd51b = 0;
        ___cxa_guard_release();
      }
      lVar4 = FUN_00e86210();
      if (lVar4 == local_58) {
        uVar1 = FUN_00e4d310(extraout_XMM0_Da_02,param_2);
        goto LAB_00e4c6a9;
      }
      local_48 = *arg1;
      local_40 = '\0';
      uVar1 = (**(code **)(*this_ptr + 0x388))(extraout_XMM0_Da_02,param_2);
      uVar6 = (uint64_t)uVar1;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
LAB_00e4c6be:
  return uVar6 & 0xffffffff;
}

