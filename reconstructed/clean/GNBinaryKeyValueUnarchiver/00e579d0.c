// Function: FUN_00e579d0
// Address: 00e579d0
// Size: 1004 bytes
// Class: GNBinaryKeyValueUnarchiver
// String references:
//   "Assertion failed in GNBinaryKeyValueUnarchiver.cpp at line %i: %s."
//   "obj"
//   "result != placeholder"
// === GNBinaryKeyValueUnarchiver properties ===
//                   _archiveVersion
//                   _awakesObjectsAfterDecoding
//                   _isCancelled
//                   _allObjectsMarker


int64_t * FUN_00e579d0(uint64_t param_1,int param_2)

{
  int iVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t *plVar4;
  bool bVar5;
  uint32_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int local_5c;
  int64_t *local_48;
  char local_40;
  
  lVar8 = (int64_t)param_2;
  plVar10 = *(int64_t **)(*(int64_t *)(arg1[8] + 0x10) + lVar8 * 8);
  if (g_028a8c38 == plVar10) {
    lVar7 = (int64_t)*(int *)(*(int64_t *)(arg1[0xe] + 0x10) + lVar8 * 4);
    local_5c = param_2;
    if (arg1[0x16] == 0) {
      bVar3 = false;
LAB_00e57bf2:
      plVar4 = g_028a8c48;
      if (*(int64_t *)(*(int64_t *)(arg1[0xc] + 0x10) + lVar7 * 8) == 0) {
        plVar9 = (int64_t *)0x0;
        if (g_028a8c48 != (int64_t *)0x0) {
          FUN_00d50b00();
          bVar3 = true;
          plVar9 = plVar4;
        }
      }
      else {
        FUN_00c811e0();
        lVar8 = g_027815a8;
        if (local_48 == (int64_t *)0x0) {
          if (g_027815a8 != 0) {
            FUN_00d50b00();
          }
          local_90 = lVar8;
          local_88 = '\x01';
          FUN_00cc7b40();
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          local_48 = (int64_t *)0x0;
        }
        else {
          if (local_40 == '\0') {
            FUN_00d50b00();
          }
          bVar3 = true;
        }
        (**(code **)(*local_48 + 0x20))();
        plVar9 = local_48;
      }
    }
    else {
      lVar2 = arg1[0x12];
      iVar1 = *(int *)(lVar2 + 0x18);
      FUN_00c8e340(lVar7,1);
      *(int *)(*(int64_t *)(lVar2 + 0x10) + (int64_t)iVar1) = (int)arg1[0x11];
      arg1[0x15] = *(int64_t *)(*(int64_t *)(arg1[0x14] + 0x10) + lVar8 * 8);
      *(int *)(arg1 + 0x11) = param_2;
      lVar8 = *(int64_t *)(*(int64_t *)(arg1[0xb] + 0x10) + lVar7 * 8);
      uVar6 = (**(code **)(*arg1 + 0x598))();
      plVar9 = (int64_t *)arg1[0x16];
      FUN_00d50b00();
      local_98 = '\0';
      local_a0 = lVar8;
      (**(code **)(*plVar9 + 0x18))(&local_a0,&stack0xffffffffffffffa8,uVar6);
      if (local_48 == (int64_t *)0x0) {
        plVar9 = (int64_t *)0x0;
        bVar3 = false;
      }
      else {
        plVar9 = local_48;
        if (local_40 == '\0') {
          FUN_00d50b00();
          bVar3 = true;
        }
        else {
          local_40 = '\0';
          bVar3 = true;
        }
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (arg1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      lVar8 = arg1[0x12];
      iVar1 = *(int *)((int64_t)*(int *)(lVar8 + 0x18) + -4 + *(int64_t *)(lVar8 + 0x10));
      *(int *)(arg1 + 0x11) = iVar1;
      arg1[0x15] = *(int64_t *)(*(int64_t *)(arg1[0x14] + 0x10) + (int64_t)iVar1 * 8);
      if (*(int *)(lVar8 + 0x18) != 0) {
        FUN_00c8e340((int64_t)iVar1,0);
      }
      if (plVar9 == (int64_t *)0x0) goto LAB_00e57bf2;
    }
    local_78 = '\0';
    local_80 = plVar9;
    FUN_00d233f0();
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 != plVar9) {
      plVar10 = plVar9;
    }
    bVar5 = bVar3;
    if (plVar10 != g_028a8c38) goto LAB_00e57d8c;
  }
  else {
    bVar3 = false;
    plVar9 = (int64_t *)0x0;
    bVar5 = false;
    if (plVar10 != g_028a8c38) goto LAB_00e57d8c;
  }
  bVar3 = bVar5;
  lVar8 = g_027815a8;
  if (g_027815a8 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar8;
  local_68 = '\x01';
  FUN_00cc7b40();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
LAB_00e57d8c:
  *this_ptr = (int64_t)plVar10;
  *(void*)(this_ptr + 1) = 0;
  if ((bVar3) && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

