// Function: FUN_01d16950
// Address: 01d16950
// Size: 1741 bytes
// Class: GNControl
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


uint64_t FUN_01d16950(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  char cVar2;
  byte bVar3;
  uint32_t uVar4;
  uint uVar5;
  int iVar6;
  int64_t *this_ptr;
  int64_t *plVar7;
  uint64_t uVar8;
  bool bVar9;
  bool bVar10;
  int64_t *local_108;
  char local_100;
  int64_t *local_40;
  char local_38;
  
  FUN_01ccad60();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  uVar4 = (**(code **)(*local_40 + 0x9a0))();
  FUN_001f8a30();
  (**(code **)(*local_40 + 0x360))();
  cVar2 = FUN_00e85ea0();
  plVar7 = local_40;
  if (cVar2 == '\0') {
    plVar7 = g_02802688;
  }
  if (plVar7 != (int64_t *)0x0) {
    uVar4 = FUN_01e05890();
  }
  FUN_01cae990();
  lVar1 = g_027ef7e8;
  if (g_027ef7e8 != 0) {
    FUN_00d50b00();
  }
  bVar3 = (**(code **)(*local_40 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3 & (byte)uVar4) == 0) {
    uVar5 = FUN_01d827c0();
    uVar8 = (uint64_t)uVar5;
    goto LAB_01d17000;
  }
  uVar8 = CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
  if (param_2 == '\0') goto LAB_01d17000;
  *(void*)(this_ptr + 6) = 0;
  (**(code **)(*local_40 + 0x980))();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_001f8a30();
  (**(code **)(*local_40 + 0x360))();
  cVar2 = FUN_00e85ea0();
  plVar7 = local_40;
  if (cVar2 == '\0') {
    plVar7 = g_02802688;
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_01e05950();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_01e05950();
      (**(code **)(*local_108 + 0x388))();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_40 + 0x970))();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_01d16bd1;
        }
        bVar10 = true;
        bVar9 = true;
LAB_01d16cfc:
        (**(code **)(*local_40 + 0x968))();
      }
      else {
LAB_01d16bd1:
        bVar9 = local_40 == (int64_t *)0x0;
        bVar10 = local_40 == (int64_t *)0x0;
        if ((bVar10) || (local_40 == (int64_t *)0x0)) goto LAB_01d16cfc;
        cVar2 = (**(code **)(*local_40 + 0x50))();
        bVar9 = false;
        bVar10 = false;
        if (cVar2 == '\0') goto LAB_01d16cfc;
      }
      if (!bVar9) {
        FUN_00d50b20();
      }
      if (!bVar10) {
        FUN_00d50b20();
      }
    }
  }
  lVar1 = g_027e7c20;
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x4d0))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027e7c20;
  if (*(char *)((int64_t)this_ptr + 0x5c) != '\0') {
    if (g_027e7c20 != 0) {
      FUN_00d50b00();
    }
    FUN_01ccaae0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_40 == (int64_t *)0x0) {
      plVar7 = (int64_t *)0x0;
      bVar10 = false;
    }
    else {
      FUN_01d28610();
      if (local_40 == (int64_t *)0x0) {
        bVar10 = false;
        plVar7 = (int64_t *)0x0;
      }
      else {
        bVar10 = true;
        plVar7 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
    }
    iVar6 = FUN_01caecd0();
    if (iVar6 == 3) {
      if (plVar7 != (int64_t *)0x0) {
        FUN_00cb1f10();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 != (int64_t *)0x0) {
          FUN_00cb1f10();
          FUN_00db3270();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        goto LAB_01d16f92;
      }
    }
    else {
      if (iVar6 == 1) {
        if (plVar7 == (int64_t *)0x0) goto LAB_01d16fa4;
        FUN_00cb1f10();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 != (int64_t *)0x0) {
          FUN_00cb1f10();
          FUN_00db3260();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
LAB_01d16f92:
      if ((bVar10) && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01d16fa4:
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_027edfc8;
  if (g_027edfc8 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x500))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01d17000:
  FUN_00d50b20();
  return uVar8;
}

