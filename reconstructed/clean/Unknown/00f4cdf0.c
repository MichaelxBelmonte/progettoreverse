// Function: FUN_00f4cdf0
// Address: 00f4cdf0
// Size: 1091 bytes
// Class: Unknown

void FUN_00f4cdf0(uint64_t param_1,int64_t param_2)

{
  byte bVar1;
  uint8_t uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int64_t lVar6;
  uint uVar7;
  int iVar8;
  uint64_t uVar9;
  int64_t arg1;
  int64_t this_ptr;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  if (*(int *)(&g_0000170c + this_ptr) == 0) {
    iVar8 = *(int *)(&g_00001734 + this_ptr);
  }
  else {
    uVar12 = 0;
    do {
      lVar6 = *(int64_t *)(&g_00001700 + this_ptr);
      uVar7 = uVar12 + 1;
      uVar9 = (uint64_t)uVar12;
      uVar11 = uVar12 + 2;
      uVar12 = uVar12 + 3;
      uVar7 = (uint)CONCAT11(*(void*)(lVar6 + (uint64_t)uVar7),
                             *(void*)(lVar6 + uVar9));
      bVar1 = *(byte *)(lVar6 + (uint64_t)uVar11);
      uVar9 = (uint64_t)bVar1;
      if (uVar7 == 0) {
        uVar3 = *(ushort *)(arg1 + 2 + uVar9 * 4);
        iVar8 = *(int *)(&g_00001734 + this_ptr);
        uVar4 = *(ushort *)(arg1 + uVar9 * 4);
        uVar10 = uVar4 << ((byte)iVar8 & 0x1f) | *(ushort *)(&g_00001730 + this_ptr);
        *(ushort *)(&g_00001730 + this_ptr) = uVar10;
        if ((int)(0x10 - (uint)uVar3) < iVar8) {
          lVar6 = *(int64_t *)(this_ptr + 0x28);
          *(int64_t *)(this_ptr + 0x28) = lVar6 + 1;
          *(char *)(*(int64_t *)(this_ptr + 0x10) + lVar6) = (char)uVar10;
          uVar2 = (&g_00001731)[this_ptr];
          lVar6 = *(int64_t *)(this_ptr + 0x28);
          *(int64_t *)(this_ptr + 0x28) = lVar6 + 1;
          *(void*)(*(int64_t *)(this_ptr + 0x10) + lVar6) = uVar2;
          *(ushort *)(&g_00001730 + this_ptr) =
               uVar4 >> (0x10U - (char)*(int *)(&g_00001734 + this_ptr) & 0x1f);
          iVar8 = (uint)uVar3 + *(int *)(&g_00001734 + this_ptr) + -0x10;
        }
        else {
          iVar8 = iVar8 + (uint)uVar3;
        }
LAB_00f4ce12:
        *(int *)(&g_00001734 + this_ptr) = iVar8;
      }
      else {
        uVar9 = (uint64_t)(byte)(&g_023e8160)[uVar9];
        uVar3 = *(ushort *)(arg1 + 0x406 + uVar9 * 4);
        iVar8 = *(int *)(&g_00001734 + this_ptr);
        uVar4 = *(ushort *)(arg1 + 0x404 + uVar9 * 4);
        uVar10 = uVar4 << ((byte)iVar8 & 0x1f) | *(ushort *)(&g_00001730 + this_ptr);
        *(ushort *)(&g_00001730 + this_ptr) = uVar10;
        if ((int)(0x10 - (uint)uVar3) < iVar8) {
          lVar6 = *(int64_t *)(this_ptr + 0x28);
          *(int64_t *)(this_ptr + 0x28) = lVar6 + 1;
          *(char *)(*(int64_t *)(this_ptr + 0x10) + lVar6) = (char)uVar10;
          uVar2 = (&g_00001731)[this_ptr];
          lVar6 = *(int64_t *)(this_ptr + 0x28);
          *(int64_t *)(this_ptr + 0x28) = lVar6 + 1;
          *(void*)(*(int64_t *)(this_ptr + 0x10) + lVar6) = uVar2;
          uVar10 = uVar4 >> (0x10U - (char)*(int *)(&g_00001734 + this_ptr) & 0x1f);
          *(ushort *)(&g_00001730 + this_ptr) = uVar10;
          iVar8 = (uint)uVar3 + *(int *)(&g_00001734 + this_ptr) + -0x10;
          *(int *)(&g_00001734 + this_ptr) = iVar8;
        }
        else {
          iVar8 = iVar8 + (uint)uVar3;
          *(int *)(&g_00001734 + this_ptr) = iVar8;
        }
        uVar11 = (uint)uVar10;
        if (uVar9 - 8 < 0x14) {
          uVar13 = (uint)bVar1 - *(int *)(&g_023e88d0 + uVar9 * 4);
          iVar5 = *(int *)(&g_023e8760 + uVar9 * 4);
          if (0x10 - iVar5 < iVar8) {
            uVar11 = uVar11 | uVar13 << ((byte)iVar8 & 0x1f);
            *(short *)(&g_00001730 + this_ptr) = (short)uVar11;
            lVar6 = *(int64_t *)(this_ptr + 0x28);
            *(int64_t *)(this_ptr + 0x28) = lVar6 + 1;
            *(char *)(*(int64_t *)(this_ptr + 0x10) + lVar6) = (char)uVar11;
            uVar2 = (&g_00001731)[this_ptr];
            lVar6 = *(int64_t *)(this_ptr + 0x28);
            *(int64_t *)(this_ptr + 0x28) = lVar6 + 1;
            *(void*)(*(int64_t *)(this_ptr + 0x10) + lVar6) = uVar2;
            uVar11 = (uVar13 & 0xffff) >> (0x10U - (char)*(int *)(&g_00001734 + this_ptr) & 0x1f)
            ;
            *(short *)(&g_00001730 + this_ptr) = (short)uVar11;
            iVar8 = iVar5 + *(int *)(&g_00001734 + this_ptr) + -0x10;
          }
          else {
            uVar11 = uVar11 | uVar13 << ((byte)iVar8 & 0x1f);
            *(short *)(&g_00001730 + this_ptr) = (short)uVar11;
            iVar8 = iVar5 + iVar8;
          }
          *(int *)(&g_00001734 + this_ptr) = iVar8;
        }
        uVar7 = uVar7 - 1;
        uVar13 = (uVar7 >> 7) + 0x100;
        if (uVar7 < 0x100) {
          uVar13 = uVar7;
        }
        bVar1 = (&g_023e7f60)[uVar13];
        uVar9 = (uint64_t)bVar1;
        uVar3 = *(ushort *)(param_2 + 2 + uVar9 * 4);
        uVar4 = *(ushort *)(param_2 + uVar9 * 4);
        uVar11 = uVar11 | (uint)uVar4 << ((byte)iVar8 & 0x1f);
        *(short *)(&g_00001730 + this_ptr) = (short)uVar11;
        if ((int)(0x10 - (uint)uVar3) < iVar8) {
          lVar6 = *(int64_t *)(this_ptr + 0x28);
          *(int64_t *)(this_ptr + 0x28) = lVar6 + 1;
          *(char *)(*(int64_t *)(this_ptr + 0x10) + lVar6) = (char)uVar11;
          uVar2 = (&g_00001731)[this_ptr];
          lVar6 = *(int64_t *)(this_ptr + 0x28);
          *(int64_t *)(this_ptr + 0x28) = lVar6 + 1;
          *(void*)(*(int64_t *)(this_ptr + 0x10) + lVar6) = uVar2;
          uVar4 = uVar4 >> (0x10U - (char)*(int *)(&g_00001734 + this_ptr) & 0x1f);
          *(ushort *)(&g_00001730 + this_ptr) = uVar4;
          iVar8 = (uint)uVar3 + *(int *)(&g_00001734 + this_ptr) + -0x10;
          uVar11 = (uint)uVar4;
          *(int *)(&g_00001734 + this_ptr) = iVar8;
        }
        else {
          iVar8 = iVar8 + (uint)uVar3;
          *(int *)(&g_00001734 + this_ptr) = iVar8;
        }
        if (3 < bVar1) {
          uVar7 = uVar7 - *(int *)(&g_023e8950 + uVar9 * 4);
          iVar5 = *(int *)(&g_023e87e0 + uVar9 * 4);
          if (0x10 - iVar5 < iVar8) {
            uVar11 = uVar11 | uVar7 << ((byte)iVar8 & 0x1f);
            *(short *)(&g_00001730 + this_ptr) = (short)uVar11;
            lVar6 = *(int64_t *)(this_ptr + 0x28);
            *(int64_t *)(this_ptr + 0x28) = lVar6 + 1;
            *(char *)(*(int64_t *)(this_ptr + 0x10) + lVar6) = (char)uVar11;
            uVar2 = (&g_00001731)[this_ptr];
            lVar6 = *(int64_t *)(this_ptr + 0x28);
            *(int64_t *)(this_ptr + 0x28) = lVar6 + 1;
            *(void*)(*(int64_t *)(this_ptr + 0x10) + lVar6) = uVar2;
            *(short *)(&g_00001730 + this_ptr) =
                 (short)((uVar7 & 0xffff) >>
                        (0x10U - (char)*(int *)(&g_00001734 + this_ptr) & 0x1f));
            iVar8 = iVar5 + *(int *)(&g_00001734 + this_ptr) + -0x10;
          }
          else {
            *(ushort *)(&g_00001730 + this_ptr) =
                 (ushort)uVar11 | (ushort)(uVar7 << ((byte)iVar8 & 0x1f));
            iVar8 = iVar5 + iVar8;
          }
          goto LAB_00f4ce12;
        }
      }
    } while (uVar12 < *(uint *)(&g_0000170c + this_ptr));
  }
  uVar3 = *(ushort *)(arg1 + 0x402);
  uVar4 = *(ushort *)(arg1 + 0x400);
  uVar10 = uVar4 << ((byte)iVar8 & 0x1f) | *(ushort *)(&g_00001730 + this_ptr);
  *(ushort *)(&g_00001730 + this_ptr) = uVar10;
  if ((int)(0x10 - (uint)uVar3) < iVar8) {
    lVar6 = *(int64_t *)(this_ptr + 0x28);
    *(int64_t *)(this_ptr + 0x28) = lVar6 + 1;
    *(char *)(*(int64_t *)(this_ptr + 0x10) + lVar6) = (char)uVar10;
    uVar2 = (&g_00001731)[this_ptr];
    lVar6 = *(int64_t *)(this_ptr + 0x28);
    *(int64_t *)(this_ptr + 0x28) = lVar6 + 1;
    *(void*)(*(int64_t *)(this_ptr + 0x10) + lVar6) = uVar2;
    *(ushort *)(&g_00001730 + this_ptr) =
         uVar4 >> (0x10U - (char)*(int *)(&g_00001734 + this_ptr) & 0x1f);
    iVar8 = (uint)uVar3 + *(int *)(&g_00001734 + this_ptr) + -0x10;
  }
  else {
    iVar8 = iVar8 + (uint)uVar3;
  }
  *(int *)(&g_00001734 + this_ptr) = iVar8;
  return;
}

