// Function: FUN_00aee640
// Address: 00aee640
// Size: 1285 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00aee640(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  int iVar1;
  void*puVar2;
  int64_t lVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t this_ptr;
  int64_t local_40;
  char local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  lVar3 = *(int64_t *)(this_ptr + 0x58);
  if (*(int *)(lVar3 + 0x18) < 4) {
LAB_00aee7bc:
    FUN_00ccdf50();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = g_027653a0;
    if (local_40 != 0) {
      if (g_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00ccdf90();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = g_027653a0;
    if (local_40 != 0) {
      if (g_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    iVar1 = *(int *)(*(int64_t *)(this_ptr + 0x58) + 0x18);
    iVar5 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar5 = iVar1;
    }
    FUN_00ccdf90(iVar5 >> 2,(int64_t)(iVar5 >> 2));
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = g_027653a0;
    if (local_40 != 0) {
      if (g_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00ccdf90();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = g_027653a0;
    if (local_40 != 0) {
      if (g_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00ccdf50();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = g_027653a0;
    if (local_40 != 0) {
      if (g_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    uVar7 = (uint)*(int64_t *)(this_ptr + 0x70);
    uVar6 = uVar7 + 0xfff;
    if (-1 < *(int64_t *)(this_ptr + 0x70)) {
      uVar6 = uVar7;
    }
    FUN_00ccdf50(this_ptr,((uVar6 & 0xfffff000) - uVar7) + 0x1000);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = g_027653a0;
    if (local_40 != 0) {
      if (g_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00ccdbb0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = g_027653a0;
    if (local_40 != 0) {
      if (g_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    return;
  }
  lVar8 = 0;
LAB_00aee6dd:
  uVar7 = *(uint *)(*(int64_t *)(lVar3 + 0x10) + lVar8 * 4);
  iVar1 = *(int *)(puVar2 + 3);
  do {
    FUN_00c8e340();
    pvVar4 = (void *)puVar2[2];
    *(byte *)((int64_t)pvVar4 + (int64_t)iVar1) = (byte)uVar7 & 0x7f;
    while( true ) {
      if (uVar7 < 0x80) {
        lVar8 = lVar8 + 1;
        lVar3 = *(int64_t *)(this_ptr + 0x58);
        iVar1 = *(int *)(lVar3 + 0x18);
        iVar5 = iVar1 + 3;
        if (-1 < iVar1) {
          iVar5 = iVar1;
        }
        if (iVar5 >> 2 <= lVar8) goto LAB_00aee7bc;
        goto LAB_00aee6dd;
      }
      uVar7 = uVar7 >> 7;
      iVar5 = *(int *)(puVar2 + 3);
      if (iVar5 - iVar1 == 0) break;
      FUN_00c8e340();
      lVar3 = puVar2[2];
      _memmove(pvVar4,(void *)(int64_t)(iVar5 - iVar1),param_3);
      *(byte *)(lVar3 + iVar1) = (byte)uVar7 | 0x80;
    }
  } while( true );
}

