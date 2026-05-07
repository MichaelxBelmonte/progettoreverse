// Function: FUN_00e90e50
// Address: 00e90e50
// Size: 727 bytes
// Class: GNValue

void FUN_00e90e50(void)

{
  ushort uVar1;
  int64_t lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int64_t lVar7;
  code *this_ptr;
  uint uVar8;
  int64_t lVar9;
  int iVar10;
  int iVar11;
  int local_3c;
  
  iVar11 = 10;
  lVar9 = 0;
  do {
    uVar1 = (&g_028026e8)[lVar9 * 0x1c];
    if (((&g_028026ec)[lVar9 * 0x38] == '\0') &&
       (*(char *)((int64_t)&g_028026b0 + lVar9 * 0x38 + 4) != '\0')) {
      iVar4 = 10;
      do {
        (*this_ptr)(0xff,0xff,iVar4,iVar11);
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x49b);
      iVar11 = iVar11 + 10;
    }
    for (lVar7 = (&g_028026d0)[lVar9 * 7]; lVar7 != 0; lVar7 = *(int64_t *)(lVar7 + 0x10)) {
      while( true ) {
        uVar8 = (uint)uVar1;
        uVar3 = FUN_00e31390();
        if (((uVar3 & 1) != 0) && (*(int64_t *)(lVar7 + 8) != 0)) {
          (*this_ptr)(0xff,0,6,iVar11);
          (*this_ptr)(0xff,0,7,iVar11);
          (*this_ptr)(0xff,0,8,iVar11);
        }
        lVar2 = *(int64_t *)(lVar7 + 8);
        if (uVar1 == 0) {
          local_3c = 0;
          iVar4 = iVar11;
        }
        else {
          local_3c = 0;
          iVar10 = 10;
          do {
            iVar5 = iVar10 + 1;
            (*this_ptr)(0xff,-(lVar2 == 0),iVar10,iVar11);
            if (0x4a4 < iVar10) {
              local_3c = local_3c + 1;
              (*this_ptr)(0xff,0xff,iVar5,iVar11);
              iVar11 = iVar11 + 1;
              iVar5 = 10;
            }
            uVar8 = uVar8 - 1;
            iVar4 = iVar11;
            iVar10 = iVar5;
          } while (uVar8 != 0);
        }
        if (*(int64_t *)(lVar7 + 8) == 0) break;
        uVar3 = uVar3 >> 0x11;
        iVar11 = iVar4 + 1;
        while (((ushort)uVar3 < uVar1 && (*(int64_t *)(lVar7 + 8) != 0))) {
          uVar6 = uVar3 & 0xffff;
          uVar8 = uVar6 + 10;
          iVar10 = iVar4 - local_3c;
          if (0x49b < uVar6) {
            if (0x93f < uVar8) {
              uVar8 = 0x940;
            }
            uVar3 = ((uVar3 - uVar8) + 0x4a4 & 0xffff) / 0x49b;
            uVar8 = (uVar6 + uVar3 * -0x49b) - 0x491;
            iVar10 = uVar3 + (iVar11 - local_3c);
          }
          (*this_ptr)(0xff,0,uVar8,iVar10);
          uVar3 = *(uint *)(*(int64_t *)(lVar7 + 8) + 0x10 +
                           (uint64_t)(byte)(&g_028026ec)[(int64_t)*(int *)(lVar7 + 4) * 0x38] *
                           0x10 + (uint64_t)uVar6 *
                                  (&g_028026d8)[(int64_t)*(int *)(lVar7 + 4) * 7]);
          if ((uVar3 & 0xffff) == uVar6) goto LAB_00e91134;
        }
        lVar7 = *(int64_t *)(lVar7 + 0x10);
        if (lVar7 == 0) goto LAB_00e90e80;
      }
LAB_00e91134:
      iVar11 = iVar4 + 1;
    }
LAB_00e90e80:
    iVar11 = iVar11 + 10;
    lVar9 = lVar9 + 1;
    if (lVar9 == 0x23) {
      return;
    }
  } while( true );
}

