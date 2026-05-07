// Function: FUN_00e08490
// Address: 00e08490
// Size: 1393 bytes
// Class: GNDistinction
// String references:
//   "Duration: %f ms"
//   "IOPlatformExpertDevice"
//   "UUID: %@"

void FUN_00e08490(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  void*puVar4;
  int iVar5;
  void*puVar6;
  int64_t lVar7;
  uint64_t uVar8;
  void*puVar9;
  int64_t *arg1;
  void*puVar10;
  double dVar11;
  double local_b0;
  void*local_88;
  char local_80;
  void*local_78;
  char local_70;
  void*local_68;
  char local_60;
  void*local_58;
  uint local_50;
  void*local_48;
  char local_40;
  
  FUN_00d8ede0();
  puVar9 = local_58;
  if (((char)local_50 == '\0') && (local_58 != (void*)0x0)) {
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  if (lVar1 == 0) {
    puVar6 = (void*)0x0;
  }
  else {
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_02572358;
    (*g_02572370)();
    puVar10 = g_02785140;
    if (g_02785140 != (void*)0x0) {
      FUN_00d50b00();
    }
    local_58 = puVar10;
    local_50 = local_50 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar10 != (void*)0x0) {
      FUN_00d50b20();
    }
    local_b0 = (double)FUN_00e7d6f0();
  }
  _IOServiceMatching();
  iVar5 = _IOServiceGetMatchingService();
  bVar3 = true;
  bVar2 = true;
  puVar10 = puVar9;
  if (iVar5 != 0) {
    lVar7 = _IORegistryEntryCreateCFProperty(0,*(void*)PTR__kCFAllocatorDefault_024a98d8);
    _IOObjectRelease();
    if (lVar7 != 0) {
      FUN_00e1c780();
      puVar10 = local_58;
      if (puVar9 == local_58) {
LAB_00e08648:
        puVar10 = puVar9;
        if ((char)local_50 != '\0') {
LAB_00e0864e:
          if (local_58 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        if ((char)local_50 == '\0') {
          if (local_58 != (void*)0x0) {
            FUN_00d50b00();
          }
          if (puVar9 != (void*)0x0) {
            FUN_00d50b20();
            puVar9 = puVar10;
            goto LAB_00e08648;
          }
          if ((char)local_50 == '\0') goto LAB_00e08661;
          goto LAB_00e0864e;
        }
        if (puVar9 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
    }
LAB_00e08661:
    if (puVar10 == (void*)0x0) {
      puVar9 = (void*)0x0;
      puVar10 = (void*)0x0;
      goto joined_r0x00e089ae;
    }
    iVar5 = FUN_00d8c7a0();
    if (iVar5 != 0) {
      uVar8 = FUN_00d8b910();
      FUN_00e07210(0x32,0x30,uVar8,*arg1 != 0);
      puVar9 = local_58;
      if (local_58 != (void*)0x0) {
        if ((char)local_50 == '\0') {
          FUN_00d50b00();
        }
        local_50 = local_50 & 0xffffff00;
        local_58 = puVar9;
        FUN_00d21140();
        if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (*arg1 != 0) {
          local_50 = 1;
          local_58 = &g_024c5048;
          local_40 = 0;
          uVar8 = FUN_00d50b00();
          local_40 = '\x01';
          local_48 = puVar10;
          FUN_00d8cb40(uVar8,&local_58);
          puVar4 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (void*)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_78 = puVar4;
          local_70 = '\0';
          FUN_00d21140();
          if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (puVar4 != (void*)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
            FUN_00d50b20();
          }
          local_58 = &g_024c5048;
          if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
          dVar11 = (double)FUN_00e7d6f0();
          local_48 = (void*)((dVar11 - local_b0) * g_023907c0);
          local_50 = 1;
          local_58 = (void*)&g_024de5e0;
          FUN_00d8cb40(local_48,&local_58);
          puVar4 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (void*)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_78 = puVar4;
          local_70 = '\0';
          FUN_00d21140();
          if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (puVar4 != (void*)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
            FUN_00d50b20();
          }
          uVar8 = FUN_00d92220();
          local_88 = local_68;
          local_80 = 0;
          if (local_60 == '\0') {
            if (local_68 != (void*)0x0) {
              uVar8 = FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_80 = '\x01';
          FUN_00d95130(uVar8,&local_88);
          puVar4 = local_78;
          if (local_70 == '\0') {
            if (local_78 != (void*)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          local_58 = puVar4;
          local_50 = local_50 & 0xffffff00;
          FUN_00d21140();
          if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (puVar4 != (void*)0x0) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar3 = false;
        bVar2 = false;
        goto joined_r0x00e089ae;
      }
    }
  }
  puVar9 = (void*)0x0;
joined_r0x00e089ae:
  if ((lVar1 != 0) && (bVar2 = bVar3, puVar6 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar2 && puVar9 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar10 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

