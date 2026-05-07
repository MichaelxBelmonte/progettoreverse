// ===================================================================
// MDExportControllerHelper — Complete reconstructed pseudocode
// 4 functions
// ===================================================================

// Registered properties (1):
//   GNAudioSampleFormat _sampleFormat


// ============================================================
// 00136020
// ============================================================
// Function: FUN_00136020
// Address: 00136020
// Size: 906 bytes
// Class: MDExportControllerHelper
// === MDExportControllerHelper properties ===
//   GNAudioSampleFormat _sampleFormat


uint32_t
FUN_00136020(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,uint param_7
            ,uint param_8,uint param_9,uint param_10,uint param_11,uint param_12,uint param_13,
            uint param_14,uint param_15,uint param_16,uint param_17,uint param_18,uint param_19,
            uint param_20)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  void*arg1;
  int *this_ptr;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint local_res8;
  uint local_res10;
  uint local_res18;
  uint local_res20;
  
  if (*(char *)*arg1 == '=') {
    param_2 = param_1;
  }
  *this_ptr = param_2;
  if (*(char *)arg1[1] != '=') {
    param_3 = param_2 + 1;
  }
  this_ptr[1] = param_3;
  if (*(char *)arg1[2] != '=') {
    param_4 = param_3 + 1U;
  }
  this_ptr[2] = param_4;
  uVar11 = param_4 + 1;
  if (*(char *)arg1[3] == '=') {
    uVar11 = local_res8;
  }
  this_ptr[3] = uVar11;
  uVar1 = uVar11 + 1;
  if (*(char *)arg1[4] == '=') {
    uVar1 = local_res10;
  }
  this_ptr[4] = uVar1;
  uVar2 = uVar1 + 1;
  if (*(char *)arg1[5] == '=') {
    uVar2 = local_res18;
  }
  this_ptr[5] = uVar2;
  uVar3 = uVar2 + 1;
  if (*(char *)arg1[6] == '=') {
    uVar3 = local_res20;
  }
  this_ptr[6] = uVar3;
  uVar4 = uVar3 + 1;
  if (*(char *)arg1[7] == '=') {
    uVar4 = param_5;
  }
  this_ptr[7] = uVar4;
  uVar5 = uVar4 + 1;
  if (*(char *)arg1[8] == '=') {
    uVar5 = param_6;
  }
  this_ptr[8] = uVar5;
  uVar6 = uVar5 + 1;
  if (*(char *)arg1[9] == '=') {
    uVar6 = param_7;
  }
  this_ptr[9] = uVar6;
  uVar7 = uVar6 + 1;
  if (*(char *)arg1[10] == '=') {
    uVar7 = param_8;
  }
  this_ptr[10] = uVar7;
  uVar8 = uVar7 + 1;
  if (*(char *)arg1[0xb] == '=') {
    uVar8 = param_9;
  }
  this_ptr[0xb] = uVar8;
  uVar9 = uVar8 + 1;
  if (*(char *)arg1[0xc] == '=') {
    uVar9 = param_10;
  }
  this_ptr[0xc] = uVar9;
  uVar10 = uVar9 + 1;
  if (*(char *)arg1[0xd] == '=') {
    uVar10 = param_11;
  }
  this_ptr[0xd] = uVar10;
  uVar15 = uVar10 + 1;
  if (*(char *)arg1[0xe] == '=') {
    uVar15 = param_12;
  }
  this_ptr[0xe] = uVar15;
  uVar17 = uVar15 + 1;
  if (*(char *)arg1[0xf] == '=') {
    uVar17 = param_13;
  }
  this_ptr[0xf] = uVar17;
  uVar13 = uVar17 + 1;
  if (*(char *)arg1[0x10] == '=') {
    uVar13 = param_14;
  }
  this_ptr[0x10] = uVar13;
  uVar12 = uVar13 + 1;
  if (*(char *)arg1[0x11] == '=') {
    uVar12 = param_15;
  }
  this_ptr[0x11] = uVar12;
  uVar16 = uVar12 + 1;
  if (*(char *)arg1[0x12] == '=') {
    uVar16 = param_16;
  }
  this_ptr[0x12] = uVar16;
  uVar20 = uVar16 + 1;
  if (*(char *)arg1[0x13] == '=') {
    uVar20 = param_17;
  }
  this_ptr[0x13] = uVar20;
  uVar19 = uVar20 + 1;
  if (*(char *)arg1[0x14] == '=') {
    uVar19 = param_18;
  }
  this_ptr[0x14] = uVar19;
  uVar18 = uVar19 + 1;
  if (*(char *)arg1[0x15] == '=') {
    uVar18 = param_19;
  }
  this_ptr[0x15] = uVar18;
  uVar14 = uVar18 + 1;
  if (*(char *)arg1[0x16] == '=') {
    uVar14 = param_20;
  }
  this_ptr[0x16] = uVar14;
  uVar11 = param_4 ^ param_3 + 1U |
           uVar11 ^ param_4 + 1 |
           uVar1 ^ uVar11 + 1 |
           uVar2 ^ uVar1 + 1 |
           uVar3 ^ uVar2 + 1 |
           uVar4 ^ uVar3 + 1 |
           uVar5 ^ uVar4 + 1 |
           uVar6 ^ uVar5 + 1 | uVar7 ^ uVar6 + 1 | uVar8 ^ uVar7 + 1 | uVar9 ^ uVar8 + 1 |
           uVar10 ^ uVar9 + 1 |
           uVar15 ^ uVar10 + 1 |
           uVar17 ^ uVar15 + 1 |
           uVar13 ^ uVar17 + 1 |
           uVar12 ^ uVar13 + 1 |
           uVar16 ^ uVar12 + 1 | uVar20 ^ uVar16 + 1 | uVar19 ^ uVar20 + 1 | uVar18 ^ uVar19 + 1 |
           uVar18 + 1 ^ uVar14;
  return CONCAT31((int3)(uVar11 >> 8),param_3 == param_2 + 1 && uVar11 == 0);
}



// ============================================================
// 00135c10
// ============================================================
// Function: FUN_00135c10
// Address: 00135c10
// Size: 1002 bytes
// Class: MDExportControllerHelper
// String references:
//   "MDExportControllerHelper"
//   "GNAudioSampleFormat"
//   "_sampleFormat"
//   "=GNAudioInvalidSampleFormat"
//   "=GNAudioPCM16IntMSB"
//   "=GNAudioPCM24IntMSB"
//   "=GNAudioPCM32IntMSB"
//   "=GNAudioPCM32FloatMSB"
//   "=GNAudioPCM64FloatMSB"
//   "=GNAudioPCM32IntMSB16"
// === MDExportControllerHelper properties ===
//   GNAudioSampleFormat _sampleFormat


void* FUN_00135c10(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (g_026e3100 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      g_026e3080 = -(uint)(*g_026e2f80 == '=');
      uVar3 = (uint)(*g_026e2f80 != '=');
      g_026e3084 = 0;
      if (*g_026e2f88 != '=') {
        g_026e3084 = uVar3;
      }
      iVar2 = g_026e3084 + 1;
      g_026e3088 = 1;
      if (*g_026e2f90 != '=') {
        g_026e3088 = iVar2;
      }
      iVar6 = g_026e3088 + 1;
      g_026e308c = 2;
      if (*g_026e2f98 != '=') {
        g_026e308c = iVar6;
      }
      iVar8 = g_026e308c + 1;
      g_026e3090 = 3;
      if (*g_026e2fa0 != '=') {
        g_026e3090 = iVar8;
      }
      iVar7 = g_026e3090 + 1;
      g_026e3094 = 4;
      if (*g_026e2fa8 != '=') {
        g_026e3094 = iVar7;
      }
      iVar5 = g_026e3094 + 1;
      g_026e3098 = 8;
      if (*g_026e2fb0 != '=') {
        g_026e3098 = iVar5;
      }
      iVar4 = g_026e3098 + 1;
      bVar1 = FUN_00136020(9,iVar4,10,0xb,0x14,0x18,0x19,0x1a,0x1b,0x40,0x41,0x42,0x43,0x44,0x45);
      g_026e30f8 = g_026e3084 == uVar3 &
                     (g_026e3088 == iVar2 &&
                     (g_026e308c == iVar6 &&
                     (g_026e3090 == iVar8 && (g_026e3094 == iVar7 && g_026e3098 == iVar5)))) &
                     bVar1 & g_026e309c == iVar4;
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_026e2f30 = "_sampleFormat";
      g_026e2f38 = &g_026e2dd0;
      g_026e2f40 = 0;
      g_026e2f48 = 0x6500;
      g_026e2f50 = "GNAudioSampleFormat";
      g_026e2f58 = &g_026e3108;
      g_026e2f60 = 0;
      ram_00000000026e2f68 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_026e2f30;
}



// ============================================================
// 00137d60
// ============================================================
// Function: FUN_00137d60
// Address: 00137d60
// Size: 522 bytes
// Class: MDExportControllerHelper
// === MDExportControllerHelper properties ===
//   GNAudioSampleFormat _sampleFormat


uint64_t FUN_00137d60(void* param_1,int param_2)

{
  bool bVar1;
  void *pvVar2;
  int64_t local_78;
  char local_70;
  int64_t *local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_01caeb00();
  (**(code **)(*local_60 + 0x960))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_003ba620();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_00137e23;
    }
  }
  else if (local_40 != 0) {
LAB_00137e23:
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5f80();
    bVar1 = false;
    goto LAB_00137e87;
  }
  bVar1 = true;
LAB_00137e87:
  FUN_01e53c20();
  FUN_01e42030();
  FUN_01bbfb40();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_01d8c820();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return 1;
}



// ============================================================
// 001353a0
// ============================================================
// Function: FUN_001353a0
// Address: 001353a0
// Size: 1136 bytes
// Class: MDExportControllerHelper
// String references:
//   "MDExportControllerHelper"
// === MDExportControllerHelper properties ===
//   GNAudioSampleFormat _sampleFormat


void FUN_001353a0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_024d07b0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e2e8b == '\0') {
    FUN_00135840();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e2e8b == '\0') {
    FUN_00135aa0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e2e8b == '\0') {
    FUN_00135c10();
    FUN_00e87980();
  }
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e2e8b == '\0') {
    FUN_001363b0();
    FUN_00e87980();
  }
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e2e8b == '\0') {
    FUN_00136520();
    FUN_00e87980();
  }
  FUN_00136690();
  return;
}

