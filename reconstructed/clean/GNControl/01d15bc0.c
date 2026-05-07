// Function: FUN_01d15bc0
// Address: 01d15bc0
// Size: 771 bytes
// Class: GNControl
// String references:
//   "GNControl"
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


void FUN_01d15bc0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t **pplVar6;
  bool bVar7;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  int64_t *local_30;
  char local_28;
  
  FUN_01d15ab0();
  FUN_01cc9cf0();
  pplVar6 = &local_30;
  uVar8 = FUN_01ccad60();
  plVar1 = local_30;
  // [STATIC_INIT: property registration]
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da;
    if (cVar3 != '\0') goto LAB_01d15c29;
  }
  pplVar6 = &g_02802688;
LAB_01d15c29:
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = g_027e7c20;
  if (plVar1 != (int64_t *)0x0) {
    if (g_027e7c20 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_80 = lVar2;
    local_78 = '\x01';
    uVar8 = FUN_01ccaae0(uVar8,&local_80);
    lVar2 = g_027edfc8;
    bVar7 = true;
    if (local_30 == (int64_t *)0x0) {
      if (g_027edfc8 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_70 = lVar2;
      local_68 = '\x01';
      FUN_01ccaae0(uVar8,&local_70);
      bVar7 = local_90 != 0;
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (bVar7) {
      local_58 = '\0';
      local_60 = 0;
      (**(code **)(*plVar1 + 0xa20))();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_48 = '\0';
      local_50 = 0;
      (**(code **)(*plVar1 + 0xa10))();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_001f8a30();
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar5 = plVar1;
      if (cVar3 == '\0') {
        plVar5 = g_02802688;
      }
      if (plVar5 != (int64_t *)0x0) {
        local_38 = '\0';
        local_40 = (int64_t *)0x0;
        (**(code **)(*plVar1 + 0xae0))();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          (**(code **)(*local_40 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
  }
  return;
}

