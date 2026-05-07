// Function: FUN_00f4d250
// Address: 00f4d250
// Size: 1485 bytes
// Class: Unknown

void FUN_00f4d250(uint64_t param_1,int param_2)

{
  uint8_t uVar1;
  ushort uVar2;
  ushort uVar3;
  int64_t lVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  int64_t arg1;
  int64_t this_ptr;
  uint uVar9;
  uint uVar10;
  uint64_t uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  
  if (-1 < param_2) {
    uVar2 = *(ushort *)(arg1 + 2);
    uVar7 = 7;
    if (uVar2 == 0) {
      uVar7 = 0x8a;
    }
    iVar13 = 4 - (uint)(uVar2 == 0);
    uVar11 = 0;
    uVar12 = 0xffffffff;
    iVar6 = 0;
    uVar9 = (uint)uVar2;
    do {
      uVar2 = *(ushort *)(arg1 + 6 + uVar11 * 4);
      uVar10 = (uint)uVar2;
      uVar11 = uVar11 + 1;
      iVar14 = iVar6 + 1;
      if (((int)uVar7 <= iVar14) || (uVar9 != uVar10)) {
        if (iVar14 < iVar13) {
          iVar6 = *(int *)(&g_00001734 + this_ptr);
          do {
            while( true ) {
              uVar3 = *(ushort *)(this_ptr + 0xabe + (uint64_t)uVar9 * 4);
              uVar5 = *(ushort *)(this_ptr + 0xabc + (uint64_t)uVar9 * 4);
              uVar8 = uVar5 << ((byte)iVar6 & 0x1f) | *(ushort *)(&g_00001730 + this_ptr);
              *(ushort *)(&g_00001730 + this_ptr) = uVar8;
              if (iVar6 <= (int)(0x10 - (uint)uVar3)) break;
              lVar4 = *(int64_t *)(this_ptr + 0x28);
              *(int64_t *)(this_ptr + 0x28) = lVar4 + 1;
              *(char *)(*(int64_t *)(this_ptr + 0x10) + lVar4) = (char)uVar8;
              uVar1 = (&g_00001731)[this_ptr];
              lVar4 = *(int64_t *)(this_ptr + 0x28);
              *(int64_t *)(this_ptr + 0x28) = lVar4 + 1;
              *(void*)(*(int64_t *)(this_ptr + 0x10) + lVar4) = uVar1;
              *(ushort *)(&g_00001730 + this_ptr) =
                   uVar5 >> (0x10U - (char)*(int *)(&g_00001734 + this_ptr) & 0x1f);
              iVar6 = (uint)uVar3 + *(int *)(&g_00001734 + this_ptr) + -0x10;
              *(int *)(&g_00001734 + this_ptr) = iVar6;
              iVar14 = iVar14 + -1;
              if (iVar14 == 0) goto joined_r0x00f4d81d;
            }
            iVar6 = iVar6 + (uint)uVar3;
            *(int *)(&g_00001734 + this_ptr) = iVar6;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
        else {
          if (uVar9 == 0) {
            if (iVar6 < 10) {
              uVar3 = *(ushort *)(this_ptr + 0xb02);
              iVar13 = *(int *)(&g_00001734 + this_ptr);
              uVar5 = *(ushort *)(this_ptr + 0xb00);
              uVar8 = uVar5 << ((byte)iVar13 & 0x1f) | *(ushort *)(&g_00001730 + this_ptr);
              if ((int)(0x10 - (uint)uVar3) < iVar13) {
                *(ushort *)(&g_00001730 + this_ptr) = uVar8;
                lVar4 = *(int64_t *)(this_ptr + 0x28);
                *(int64_t *)(this_ptr + 0x28) = lVar4 + 1;
                *(char *)(*(int64_t *)(this_ptr + 0x10) + lVar4) = (char)uVar8;
                uVar1 = (&g_00001731)[this_ptr];
                lVar4 = *(int64_t *)(this_ptr + 0x28);
                *(int64_t *)(this_ptr + 0x28) = lVar4 + 1;
                *(void*)(*(int64_t *)(this_ptr + 0x10) + lVar4) = uVar1;
                uVar8 = uVar5 >> (0x10U - (char)*(int *)(&g_00001734 + this_ptr) & 0x1f);
                iVar13 = (uint)uVar3 + *(int *)(&g_00001734 + this_ptr) + -0x10;
                *(int *)(&g_00001734 + this_ptr) = iVar13;
              }
              else {
                iVar13 = iVar13 + (uint)uVar3;
                *(int *)(&g_00001734 + this_ptr) = iVar13;
              }
              if (iVar13 < 0xe) {
                *(ushort *)(&g_00001730 + this_ptr) =
                     uVar8 | (ushort)(iVar6 + 0xfffe << ((byte)iVar13 & 0x1f));
                iVar13 = iVar13 + 3;
              }
              else {
                uVar7 = (uint)uVar8 | iVar6 + 0xfffeU << ((byte)iVar13 & 0x1f);
                *(short *)(&g_00001730 + this_ptr) = (short)uVar7;
                lVar4 = *(int64_t *)(this_ptr + 0x28);
                *(int64_t *)(this_ptr + 0x28) = lVar4 + 1;
                *(char *)(*(int64_t *)(this_ptr + 0x10) + lVar4) = (char)uVar7;
                uVar1 = (&g_00001731)[this_ptr];
                lVar4 = *(int64_t *)(this_ptr + 0x28);
                *(int64_t *)(this_ptr + 0x28) = lVar4 + 1;
                *(void*)(*(int64_t *)(this_ptr + 0x10) + lVar4) = uVar1;
                *(short *)(&g_00001730 + this_ptr) =
                     (short)((iVar6 + 0xfffeU & 0xffff) >>
                            (0x10U - (char)*(int *)(&g_00001734 + this_ptr) & 0x1f));
                iVar13 = *(int *)(&g_00001734 + this_ptr) + -0xd;
              }
            }
            else {
              uVar7 = (uint)*(ushort *)(this_ptr + 0xb06);
              iVar13 = *(int *)(&g_00001734 + this_ptr);
              uVar3 = *(ushort *)(this_ptr + 0xb04);
              uVar5 = uVar3 << ((byte)iVar13 & 0x1f) | *(ushort *)(&g_00001730 + this_ptr);
              if ((int)(0x10 - uVar7) < iVar13) {
                *(ushort *)(&g_00001730 + this_ptr) = uVar5;
                lVar4 = *(int64_t *)(this_ptr + 0x28);
                *(int64_t *)(this_ptr + 0x28) = lVar4 + 1;
                *(char *)(*(int64_t *)(this_ptr + 0x10) + lVar4) = (char)uVar5;
                uVar1 = (&g_00001731)[this_ptr];
                lVar4 = *(int64_t *)(this_ptr + 0x28);
                *(int64_t *)(this_ptr + 0x28) = lVar4 + 1;
                *(void*)(*(int64_t *)(this_ptr + 0x10) + lVar4) = uVar1;
                uVar5 = uVar3 >> (0x10U - (char)*(int *)(&g_00001734 + this_ptr) & 0x1f);
                iVar13 = uVar7 + *(int *)(&g_00001734 + this_ptr) + -0x10;
                *(int *)(&g_00001734 + this_ptr) = iVar13;
              }
              else {
                iVar13 = iVar13 + uVar7;
                *(int *)(&g_00001734 + this_ptr) = iVar13;
              }
              if (iVar13 < 10) {
                *(ushort *)(&g_00001730 + this_ptr) =
                     uVar5 | (ushort)(iVar6 + 0xfff6 << ((byte)iVar13 & 0x1f));
                iVar13 = iVar13 + 7;
              }
              else {
                uVar7 = (uint)uVar5 | iVar6 + 0xfff6U << ((byte)iVar13 & 0x1f);
                *(short *)(&g_00001730 + this_ptr) = (short)uVar7;
                lVar4 = *(int64_t *)(this_ptr + 0x28);
                *(int64_t *)(this_ptr + 0x28) = lVar4 + 1;
                *(char *)(*(int64_t *)(this_ptr + 0x10) + lVar4) = (char)uVar7;
                uVar1 = (&g_00001731)[this_ptr];
                lVar4 = *(int64_t *)(this_ptr + 0x28);
                *(int64_t *)(this_ptr + 0x28) = lVar4 + 1;
                *(void*)(*(int64_t *)(this_ptr + 0x10) + lVar4) = uVar1;
                *(short *)(&g_00001730 + this_ptr) =
                     (short)((iVar6 + 0xfff6U & 0xffff) >>
                            (0x10U - (char)*(int *)(&g_00001734 + this_ptr) & 0x1f));
                iVar13 = *(int *)(&g_00001734 + this_ptr) + -9;
              }
            }
          }
          else {
            if (uVar9 == uVar12) {
              iVar13 = *(int *)(&g_00001734 + this_ptr);
              iVar6 = iVar14;
            }
            else {
              uVar3 = *(ushort *)(this_ptr + 0xabe + (uint64_t)uVar9 * 4);
              iVar13 = *(int *)(&g_00001734 + this_ptr);
              uVar5 = *(ushort *)(this_ptr + 0xabc + (uint64_t)uVar9 * 4);
              uVar8 = uVar5 << ((byte)iVar13 & 0x1f) | *(ushort *)(&g_00001730 + this_ptr);
              *(ushort *)(&g_00001730 + this_ptr) = uVar8;
              if ((int)(0x10 - (uint)uVar3) < iVar13) {
                lVar4 = *(int64_t *)(this_ptr + 0x28);
                *(int64_t *)(this_ptr + 0x28) = lVar4 + 1;
                *(char *)(*(int64_t *)(this_ptr + 0x10) + lVar4) = (char)uVar8;
                uVar1 = (&g_00001731)[this_ptr];
                lVar4 = *(int64_t *)(this_ptr + 0x28);
                *(int64_t *)(this_ptr + 0x28) = lVar4 + 1;
                *(void*)(*(int64_t *)(this_ptr + 0x10) + lVar4) = uVar1;
                *(ushort *)(&g_00001730 + this_ptr) =
                     uVar5 >> (0x10U - (char)*(int *)(&g_00001734 + this_ptr) & 0x1f);
                iVar13 = (uint)uVar3 + *(int *)(&g_00001734 + this_ptr) + -0x10;
              }
              else {
                iVar13 = iVar13 + (uint)uVar3;
              }
              *(int *)(&g_00001734 + this_ptr) = iVar13;
            }
            uVar7 = (uint)*(ushort *)(this_ptr + 0xafe);
            uVar3 = *(ushort *)(this_ptr + 0xafc);
            uVar5 = uVar3 << ((byte)iVar13 & 0x1f) | *(ushort *)(&g_00001730 + this_ptr);
            if ((int)(0x10 - uVar7) < iVar13) {
              *(ushort *)(&g_00001730 + this_ptr) = uVar5;
              lVar4 = *(int64_t *)(this_ptr + 0x28);
              *(int64_t *)(this_ptr + 0x28) = lVar4 + 1;
              *(char *)(*(int64_t *)(this_ptr + 0x10) + lVar4) = (char)uVar5;
              uVar1 = (&g_00001731)[this_ptr];
              lVar4 = *(int64_t *)(this_ptr + 0x28);
              *(int64_t *)(this_ptr + 0x28) = lVar4 + 1;
              *(void*)(*(int64_t *)(this_ptr + 0x10) + lVar4) = uVar1;
              uVar5 = uVar3 >> (0x10U - (char)*(int *)(&g_00001734 + this_ptr) & 0x1f);
              iVar13 = uVar7 + *(int *)(&g_00001734 + this_ptr) + -0x10;
              *(int *)(&g_00001734 + this_ptr) = iVar13;
            }
            else {
              iVar13 = iVar13 + uVar7;
              *(int *)(&g_00001734 + this_ptr) = iVar13;
            }
            if (iVar13 < 0xf) {
              *(ushort *)(&g_00001730 + this_ptr) =
                   uVar5 | (ushort)(iVar6 + 0xfffd << ((byte)iVar13 & 0x1f));
              iVar13 = iVar13 + 2;
            }
            else {
              uVar7 = (uint)uVar5 | iVar6 + 0xfffdU << ((byte)iVar13 & 0x1f);
              *(short *)(&g_00001730 + this_ptr) = (short)uVar7;
              lVar4 = *(int64_t *)(this_ptr + 0x28);
              *(int64_t *)(this_ptr + 0x28) = lVar4 + 1;
              *(char *)(*(int64_t *)(this_ptr + 0x10) + lVar4) = (char)uVar7;
              uVar1 = (&g_00001731)[this_ptr];
              lVar4 = *(int64_t *)(this_ptr + 0x28);
              *(int64_t *)(this_ptr + 0x28) = lVar4 + 1;
              *(void*)(*(int64_t *)(this_ptr + 0x10) + lVar4) = uVar1;
              *(short *)(&g_00001730 + this_ptr) =
                   (short)((iVar6 + 0xfffdU & 0xffff) >>
                          (0x10U - (char)*(int *)(&g_00001734 + this_ptr) & 0x1f));
              iVar13 = *(int *)(&g_00001734 + this_ptr) + -0xe;
            }
          }
          *(int *)(&g_00001734 + this_ptr) = iVar13;
        }
joined_r0x00f4d81d:
        uVar12 = uVar9;
        if (uVar2 == 0) {
          iVar14 = 0;
          uVar7 = 0x8a;
          iVar13 = 3;
        }
        else {
          iVar14 = 0;
          iVar13 = 4 - (uint)(uVar9 == uVar10);
          uVar7 = uVar9 == uVar10 ^ 7;
        }
      }
      iVar6 = iVar14;
      uVar9 = uVar10;
    } while (uVar11 != param_2 + 1);
  }
  return;
}

