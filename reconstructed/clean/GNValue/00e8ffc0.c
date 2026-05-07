// Function: FUN_00e8ffc0
// Address: 00e8ffc0
// Size: 535 bytes
// Class: GNValue

int64_t * FUN_00e8ffc0(int param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  uint uVar4;
  int64_t lVar5;
  int64_t arg1;
  int64_t this_ptr;
  int64_t lVar6;
  int64_t *plVar7;
  
  lVar5 = *(int64_t *)(this_ptr + (int64_t)param_1 * 8);
  uVar4 = FUN_00e31390();
joined_r0x00e8fffa:
  if ((uVar4 & 0xfffe) != 0) goto LAB_00e90010;
  lVar5 = FUN_00e91580(1,param_1);
  *(int64_t *)(this_ptr + (int64_t)param_1 * 8) = lVar5;
  uVar4 = FUN_00e31390();
  cVar3 = FUN_00e314a0(0,uVar4 & 0xfffffffe);
  while (cVar3 == '\0') {
    cVar3 = FUN_00e314a0(0,uVar4 & 0xfffffffe);
  }
  uVar4 = FUN_00e31390();
  if ((uVar4 & 0xfffe) == 0) {
    return (int64_t *)0x0;
  }
  while( true ) {
    lVar2 = *(int64_t *)(lVar5 + 8);
    lVar6 = (uint64_t)(byte)(&g_028026ec)[(int64_t)*(int *)(lVar5 + 4) * 0x38] * 0x10 +
            (uint64_t)(uVar4 >> 0x11) * (&g_028026d8)[(int64_t)*(int *)(lVar5 + 4) * 7];
    cVar3 = FUN_00e314a0(0,uVar4 + 0xfffe & 0xfffe |
                           uVar4 & 0x10001 | *(int *)(lVar2 + 0x10 + lVar6) << 0x11);
    if (cVar3 != '\0') break;
    if ((uVar4 & 0xfffe) == 0) {
      return (int64_t *)0x0;
    }
  }
  plVar1 = (int64_t *)(lVar2 + lVar6);
  plVar7 = plVar1 + 2;
  if ((&g_028026ec)[(int64_t)*(int *)(lVar5 + 4) * 0x38] != '\0') goto LAB_00e901bb;
  *plVar1 = lVar5;
  goto LAB_00e901af;
LAB_00e90010:
  lVar2 = *(int64_t *)(lVar5 + 8);
  lVar6 = (uint64_t)(byte)(&g_028026ec)[(int64_t)*(int *)(lVar5 + 4) * 0x38] * 0x10 +
          (uint64_t)(uVar4 >> 0x11) * (&g_028026d8)[(int64_t)*(int *)(lVar5 + 4) * 7];
  cVar3 = FUN_00e314a0(0,uVar4 + 0xfffe & 0xfffe |
                         uVar4 & 0x10001 | *(int *)(lVar2 + 0x10 + lVar6) << 0x11);
  if (cVar3 != '\0') {
    plVar1 = (int64_t *)(lVar2 + lVar6);
    plVar7 = plVar1 + 2;
    if ((&g_028026ec)[(int64_t)*(int *)(lVar5 + 4) * 0x38] == '\0') {
      *plVar1 = lVar5;
LAB_00e901af:
      plVar7[-1] = arg1 + 0x10;
    }
LAB_00e901bb:
    FUN_00e314f0();
    return plVar7;
  }
  goto joined_r0x00e8fffa;
}

