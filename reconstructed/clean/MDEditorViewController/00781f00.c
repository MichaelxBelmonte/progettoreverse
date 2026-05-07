// Function: FUN_00781f00
// Address: 00781f00
// Size: 1099 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_00781f00(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  byte bVar4;
  uint32_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t *this_ptr;
  uint64_t extraout_XMM0_Qa;
  double dVar8;
  uint64_t uVar9;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  plVar2 = local_40;
  lVar1 = g_02728af8;
  if (g_02728af8 != 0) {
    FUN_00d50b00();
  }
  uVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026f6fa0;
  if ((char)uVar5 == '\0') {
    FUN_01cae990();
    plVar2 = local_40;
    lVar1 = g_02729610;
    if (g_02729610 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar2 + 0x50))();
    uVar9 = extraout_XMM0_Qa;
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    lVar1 = g_026f6fa0;
    if (cVar3 != '\0') {
      if (*(int *)((int64_t)this_ptr + 0x16c) != 0) goto LAB_00782027;
      if (param_2 == '\0') {
        if (g_026f6fa0 != 0) {
          FUN_00d50b00();
        }
        dVar8 = (double)FUN_00e7d6f0();
        uVar7 = (uint64_t)(dVar8 * g_023907c0);
        dVar8 = dVar8 * g_023907c0 - g_023907c8;
        uVar9 = FUN_0071a120();
        if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
            (uVar9 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        bVar4 = (byte)(((int64_t)dVar8 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
        local_50 = lVar1;
        local_48 = '\0';
        FUN_000175c0(uVar9,&local_50);
        plVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          local_38 = '\0';
          local_40 = plVar2;
          bVar4 = FUN_00c70bc0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
        uVar7 = CONCAT71((int7)((uint64_t)plVar2 >> 8),plVar2 != (int64_t *)0x0 & bVar4);
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        goto LAB_0078233a;
      }
    }
    uVar6 = FUN_01d33980(uVar9,param_2);
    uVar7 = (uint64_t)uVar6;
  }
  else {
    if (*(int *)((int64_t)this_ptr + 0x16c) == 0) {
      if (param_2 == '\0') {
        if (g_026f6fa0 != 0) {
          FUN_00d50b00();
        }
        dVar8 = (double)FUN_00e7d6f0();
        uVar7 = (uint64_t)(dVar8 * g_023907c0);
        dVar8 = dVar8 * g_023907c0 - g_023907c8;
        uVar9 = FUN_0071a120();
        if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
            (uVar9 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        bVar4 = (byte)(((int64_t)dVar8 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
        local_50 = lVar1;
        local_48 = '\0';
        FUN_000175c0(uVar9,&local_50);
        plVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          local_38 = '\0';
          local_40 = plVar2;
          bVar4 = FUN_00c70bc0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
        uVar7 = CONCAT71((int7)((uint64_t)plVar2 >> 8),plVar2 != (int64_t *)0x0 & bVar4);
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*this_ptr + 0x4f8))();
        uVar7 = CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
      }
      goto LAB_0078233a;
    }
LAB_00782027:
    uVar7 = 0;
  }
LAB_0078233a:
  return uVar7 & 0xffffffff;
}

