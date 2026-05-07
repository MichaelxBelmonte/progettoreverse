// Function: FUN_00e22c90
// Address: 00e22c90
// Size: 1060 bytes
// Class: GNFileType

void FUN_00e22c90(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar14;
  bool bVar15;
  uint64_t local_48;
  int64_t local_40;
  char local_38;
  
  cVar12 = FUN_00e20b20();
  lVar10 = g_02785a18;
  lVar9 = g_02785a10;
  lVar8 = g_02785a08;
  lVar7 = g_02785a00;
  if (cVar12 == '\0') {
    if (g_02785a00 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
LAB_00e22d58:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  iVar2 = *(int *)(arg1 + 0x30);
  iVar13 = (uint)(*(short *)(*(int64_t *)(arg1 + 0x20) + (int64_t)iVar2 * 2) == 0x2d) + iVar2
  ;
  iVar3 = *(int *)(arg1 + 0x34);
  if (iVar13 == iVar3) {
    if (g_02785a00 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00e22d58;
  }
  if (iVar13 < iVar3) {
    lVar14 = (int64_t)iVar13;
    bVar15 = false;
    bVar5 = false;
    do {
      uVar1 = *(ushort *)(*(int64_t *)(arg1 + 0x20) + lVar14 * 2);
      bVar4 = bVar5;
      bVar11 = bVar15;
      switch(uVar1) {
      case 0x2b:
      case 0x2d:
        if (!bVar15) {
          if (g_02785a18 != 0) {
            FUN_00d50b00();
          }
          FUN_00e20940();
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
          goto LAB_00e22d58;
        }
        break;
      case 0x2c:
      case 0x2f:
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
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
        goto switchD_00e22dd6_caseD_2c;
      case 0x2e:
        bVar4 = true;
        if (bVar5) {
          if (g_02785a08 != 0) {
            FUN_00d50b00();
          }
          FUN_00e20940();
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          goto LAB_00e22d58;
        }
        break;
      case 0x45:
switchD_00e22dd6_caseD_45:
        bVar11 = true;
        if (bVar15) {
          if (g_02785a10 != 0) {
            FUN_00d50b00();
          }
          FUN_00e20940();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          goto LAB_00e22d58;
        }
        break;
      default:
        if (uVar1 == 0x65) goto switchD_00e22dd6_caseD_45;
switchD_00e22dd6_caseD_2c:
        iVar6 = iVar13;
        if ((0xff < uVar1) ||
           ((PTR___DefaultRuneLocale_0249c238[(uint64_t)uVar1 * 4 + 0x3d] & 4) == 0))
        goto joined_r0x00e22e63;
      }
      bVar15 = bVar11;
      lVar14 = lVar14 + 1;
      iVar13 = iVar13 + 1;
      bVar5 = bVar4;
      iVar6 = iVar3;
    } while (lVar14 < iVar3);
  }
  else {
    bVar15 = false;
    iVar6 = iVar13;
    bVar4 = false;
  }
joined_r0x00e22e63:
  if (iVar6 == iVar2) {
    if (g_02785a00 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00e22d58;
  }
  (**(code **)(**(int64_t **)(arg1 + 0x28) + 0x378))();
  if (bVar4 || bVar15) {
    cVar12 = (**(code **)(**(int64_t **)(arg1 + 0x28) + 0x468))();
    lVar7 = g_02785a20;
    if (cVar12 == '\0') {
      if (g_02785a20 != 0) {
        FUN_00d50b00();
      }
      FUN_00e20940();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00e22d58;
    }
    FUN_00d470c0(local_48);
    if (local_40 != 0) {
      bVar4 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00e23053;
    }
  }
  else {
    cVar12 = (**(code **)(**(int64_t **)(arg1 + 0x28) + 0x3f8))();
    lVar7 = g_02785a28;
    if (cVar12 == '\0') {
      if (g_02785a28 != 0) {
        FUN_00d50b00();
      }
      FUN_00e20940();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00e22d58;
    }
    FUN_00d468f0();
    if (local_40 != 0) {
      bVar4 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00e23053;
    }
  }
  bVar4 = false;
LAB_00e23053:
  *(int *)(arg1 + 0x30) = iVar6;
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar4) && (local_40 != 0)) {
    FUN_00d50b00();
  }
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  return;
}

