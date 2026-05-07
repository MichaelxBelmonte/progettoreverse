// Function: FUN_00e20d30
// Address: 00e20d30
// Size: 967 bytes
// Class: GNFileType

void FUN_00e20d30(void)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  int64_t lVar5;
  int64_t lVar6;
  char cVar7;
  int64_t lVar8;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar9;
  int64_t local_40;
  char local_38;
  
  cVar7 = FUN_00e20b20();
  lVar6 = g_027859e0;
  lVar5 = g_027859d8;
  lVar3 = g_027859d0;
  if (cVar7 == '\0') {
LAB_00e20df4:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  iVar1 = *(int *)(arg1 + 0x30);
  lVar8 = (int64_t)iVar1;
  lVar2 = *(int64_t *)(arg1 + 0x20);
  bVar4 = false;
  lVar9 = 0;
  switch(*(void*)(lVar2 + lVar8 * 2)) {
  case 0x22:
    FUN_00e21390();
    if (local_40 == 0) {
LAB_00e20f97:
      bVar4 = false;
      lVar9 = 0;
    }
    else {
      bVar4 = true;
      lVar9 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    break;
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    FUN_00e22c90();
    if (local_40 == 0) goto LAB_00e20f97;
    bVar4 = true;
    lVar9 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    break;
  case 0x5b:
    FUN_00e225e0();
    if (local_40 == 0) goto LAB_00e20f97;
    bVar4 = true;
    lVar9 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    break;
  case 0x66:
    if (iVar1 + 4 <= *(int *)(arg1 + 0x34)) {
      if (((*(short *)(lVar2 + 2 + lVar8 * 2) == 0x61) &&
          (*(short *)(lVar2 + 4 + lVar8 * 2) == 0x6c)) &&
         ((*(short *)(lVar2 + 6 + lVar8 * 2) == 0x73 && (*(short *)(lVar2 + 8 + lVar8 * 2) == 0x65))
         )) {
        *(int *)(arg1 + 0x30) = iVar1 + 5;
        FUN_00d46300();
        if (local_40 == 0) goto LAB_00e20f97;
        bVar4 = true;
        lVar9 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        break;
      }
      if (g_027859d8 != 0) {
        FUN_00d50b00();
      }
      FUN_00e20940();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    goto LAB_00e21076;
  case 0x6e:
    if (iVar1 + 3 <= *(int *)(arg1 + 0x34)) {
      if (((*(short *)(lVar2 + 2 + lVar8 * 2) == 0x75) &&
          (*(short *)(lVar2 + 4 + lVar8 * 2) == 0x6c)) &&
         (*(short *)(lVar2 + (int64_t)(iVar1 + 3) * 2) == 0x6c)) {
        *(int *)(arg1 + 0x30) = iVar1 + 4;
        goto LAB_00e20df4;
      }
      if (g_027859e0 != 0) {
        FUN_00d50b00();
      }
      FUN_00e20940();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    goto LAB_00e21076;
  case 0x74:
    if (iVar1 + 3 <= *(int *)(arg1 + 0x34)) {
      if (((*(short *)(lVar2 + 2 + lVar8 * 2) == 0x72) &&
          (*(short *)(lVar2 + 4 + lVar8 * 2) == 0x75)) &&
         (*(short *)(lVar2 + 6 + lVar8 * 2) == 0x65)) {
        *(int *)(arg1 + 0x30) = iVar1 + 4;
        FUN_00d46300();
        if (local_40 == 0) goto LAB_00e20f97;
        bVar4 = true;
        lVar9 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        break;
      }
      if (g_027859d0 != 0) {
        FUN_00d50b00();
      }
      FUN_00e20940();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
LAB_00e21076:
    bVar4 = false;
    lVar9 = 0;
    lVar3 = *(int64_t *)(arg1 + 0x10);
    lVar5 = g_027859e8;
    goto joined_r0x00e21081;
  case 0x7b:
    FUN_00e21c70();
    if (local_40 == 0) goto LAB_00e20f97;
    bVar4 = true;
    lVar9 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
  }
  lVar3 = *(int64_t *)(arg1 + 0x10);
  lVar5 = g_027859e8;
joined_r0x00e21081:
  g_027859e8 = lVar5;
  if (lVar3 == 0) {
    if (lVar9 == 0) {
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      FUN_00e20940();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      if (!bVar4) {
        FUN_00d50b00();
      }
    }
    *this_ptr = lVar9;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    if ((bVar4) && (lVar9 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

