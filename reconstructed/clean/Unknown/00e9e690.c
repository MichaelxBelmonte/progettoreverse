// Function: FUN_00e9e690
// Address: 00e9e690
// Size: 1049 bytes
// Class: Unknown

bool FUN_00e9e690(uint32_t param_1)

{
  int *piVar1;
  byte bVar2;
  int64_t *plVar3;
  int64_t lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void*puVar10;
  int iVar11;
  uint uVar12;
  int64_t *plVar13;
  int64_t this_ptr;
  byte *pbVar14;
  
  plVar3 = *(int64_t **)(this_ptr + 0x30);
  bVar5 = false;
  bVar6 = false;
LAB_00e9e6cd:
  do {
    do {
      if (*(int *)((int64_t)plVar3 + 0xc) == 2) goto LAB_00e9e850;
    } while (*(int *)((int64_t)plVar3 + 0xc) != 1);
    iVar8 = (int)plVar3[0xf];
    if (*(int *)(*plVar3 + 0x20) == 0) {
      bVar2 = 0;
LAB_00e9e74a:
      bVar5 = (bool)(bVar2 | bVar5);
      if (iVar8 < *(int *)((int64_t)plVar3 + 0x74)) goto LAB_00e9eadb;
    }
    else {
      if (iVar8 < *(int *)((int64_t)plVar3 + 0x74)) {
        puVar10 = *(void**)(*plVar3 + 0x18);
        do {
          *puVar10 = *(void*)(plVar3[10] + (int64_t)iVar8);
          iVar8 = (int)plVar3[0xf] + 1;
          *(int *)(plVar3 + 0xf) = iVar8;
          lVar4 = *plVar3;
          iVar11 = *(int *)(lVar4 + 0x20) + -1;
          *(int *)(lVar4 + 0x20) = iVar11;
          puVar10 = (void*)(*(int64_t *)(lVar4 + 0x18) + 1);
          *(void**)(lVar4 + 0x18) = puVar10;
          piVar1 = (int *)(lVar4 + 0x24);
          *piVar1 = *piVar1 + 1;
          if (*piVar1 == 0) {
            *(int *)(lVar4 + 0x28) = *(int *)(lVar4 + 0x28) + 1;
          }
          bVar2 = 1;
        } while ((iVar11 != 0) && (iVar8 < *(int *)((int64_t)plVar3 + 0x74)));
        goto LAB_00e9e74a;
      }
      if (iVar8 < *(int *)((int64_t)plVar3 + 0x74)) goto LAB_00e9eadb;
    }
    iVar8 = (int)plVar3[1];
    if (((iVar8 == 4) && ((int)plVar3[2] == 0)) &&
       ((0xff < *(uint *)((int64_t)plVar3 + 0x5c) || ((int)plVar3[0xc] < 1)))) goto LAB_00e9eadb;
    *(void*)((int64_t)plVar3 + 0x6c) = 0;
    *(void*)((int64_t)plVar3 + 0x74) = 0;
    *(void*)(plVar3 + 0x51) = 0xffffffff;
    param_1 = 0;
    plVar3[0x12] = 0;
    plVar3[0x13] = 0;
    plVar3[0x14] = 0;
    plVar3[0x15] = 0;
    plVar3[0x16] = 0;
    plVar3[0x17] = 0;
    plVar3[0x18] = 0;
    plVar3[0x19] = 0;
    plVar3[0x1a] = 0;
    plVar3[0x1b] = 0;
    plVar3[0x1c] = 0;
    plVar3[0x1d] = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1f] = 0;
    plVar3[0x20] = 0;
    plVar3[0x21] = 0;
    plVar3[0x22] = 0;
    plVar3[0x23] = 0;
    plVar3[0x24] = 0;
    plVar3[0x25] = 0;
    plVar3[0x26] = 0;
    plVar3[0x27] = 0;
    plVar3[0x28] = 0;
    plVar3[0x29] = 0;
    plVar3[0x2a] = 0;
    plVar3[0x2b] = 0;
    plVar3[0x2c] = 0;
    plVar3[0x2d] = 0;
    plVar3[0x2e] = 0;
    plVar3[0x2f] = 0;
    plVar3[0x10] = 0;
    plVar3[0x11] = 0;
    *(int *)((int64_t)plVar3 + 0x294) = *(int *)((int64_t)plVar3 + 0x294) + 1;
    *(void*)((int64_t)plVar3 + 0xc) = 2;
    if (iVar8 == 3) {
      if (((int)plVar3[2] == 0) &&
         ((0xff < *(uint *)((int64_t)plVar3 + 0x5c) || ((int)plVar3[0xc] < 1)))) goto LAB_00e9eadb;
LAB_00e9e850:
      iVar8 = (int)plVar3[1];
    }
    iVar11 = *(int *)((int64_t)plVar3 + 0x6c);
    iVar9 = (int)plVar3[0xe];
    if (iVar8 == 2) break;
    if (iVar11 < iVar9) {
      plVar13 = (int64_t *)*plVar3;
      if ((int)plVar13[1] == 0) {
        iVar8 = (int)plVar3[1];
        goto joined_r0x00e9ead4;
      }
      if ((int)plVar3[2] != 0) {
        do {
          bVar2 = *(byte *)*plVar13;
          uVar12 = *(uint *)((int64_t)plVar3 + 0x5c);
          iVar8 = (int)plVar3[0xc];
          if (uVar12 == bVar2) {
            if (iVar8 == 0xff) {
LAB_00e9ea00:
              if (uVar12 < 0x100) {
                param_1 = FUN_00e9fdb0();
              }
              *(uint *)((int64_t)plVar3 + 0x5c) = (uint)bVar2;
              *(void*)(plVar3 + 0xc) = 1;
            }
            else {
              *(int *)(plVar3 + 0xc) = iVar8 + 1;
            }
          }
          else {
            if (iVar8 != 1) goto LAB_00e9ea00;
            *(uint *)(plVar3 + 0x51) =
                 *(uint *)(plVar3 + 0x51) << 8 ^
                 *(uint *)(&g_02789c20 +
                          (uint64_t)(uVar12 & 0xff ^ *(uint *)(plVar3 + 0x51) >> 0x18) * 4);
            *(void*)((int64_t)plVar3 + (uint64_t)uVar12 + 0x80) = 1;
            *(char *)(plVar3[8] + (int64_t)iVar11) = (char)uVar12;
            *(int *)((int64_t)plVar3 + 0x6c) = *(int *)((int64_t)plVar3 + 0x6c) + 1;
            *(uint *)((int64_t)plVar3 + 0x5c) = (uint)bVar2;
          }
          plVar13 = (int64_t *)*plVar3;
          *plVar13 = *plVar13 + 1;
          iVar8 = (int)plVar13[1] + -1;
          *(int *)(plVar13 + 1) = iVar8;
          piVar1 = (int *)((int64_t)plVar13 + 0xc);
          *piVar1 = *piVar1 + 1;
          if (*piVar1 == 0) {
            *(int *)(plVar13 + 2) = (int)plVar13[2] + 1;
          }
          iVar11 = *(int *)((int64_t)plVar3 + 0x6c);
          iVar7 = (int)plVar3[2] + -1;
          *(int *)(plVar3 + 2) = iVar7;
          iVar9 = (int)plVar3[0xe];
        } while (((iVar11 < iVar9) && (iVar8 != 0)) && (iVar7 != 0));
        goto LAB_00e9ea60;
      }
    }
LAB_00e9ea70:
    iVar8 = (int)plVar3[1];
    if (iVar8 == 2) goto LAB_00e9ea83;
LAB_00e9ea7d:
    if ((int)plVar3[2] != 0) goto LAB_00e9ea83;
    if (*(uint *)((int64_t)plVar3 + 0x5c) < 0x100) {
      param_1 = FUN_00e9fdb0();
      iVar8 = (int)plVar3[1];
    }
    *(void*)((int64_t)plVar3 + 0x5c) = 0x100;
LAB_00e9eab2:
    param_1 = FUN_00e9ff20(param_1,iVar8);
    *(void*)((int64_t)plVar3 + 0xc) = 1;
  } while( true );
  if ((iVar9 <= iVar11) || (*(int *)((void*)*plVar3 + 1) == 0)) goto LAB_00e9ea70;
  pbVar14 = *(byte **)*plVar3;
  uVar12 = *(uint *)((int64_t)plVar3 + 0x5c);
  do {
    bVar2 = *pbVar14;
    iVar8 = (int)plVar3[0xc];
    if (uVar12 == bVar2) {
      if (iVar8 == 0xff) {
LAB_00e9e900:
        if (uVar12 < 0x100) {
          param_1 = FUN_00e9fdb0();
        }
        *(uint *)((int64_t)plVar3 + 0x5c) = (uint)bVar2;
        *(void*)(plVar3 + 0xc) = 1;
      }
      else {
        *(int *)(plVar3 + 0xc) = iVar8 + 1;
      }
    }
    else {
      if (iVar8 != 1) goto LAB_00e9e900;
      *(uint *)(plVar3 + 0x51) =
           *(uint *)(plVar3 + 0x51) << 8 ^
           *(uint *)(&g_02789c20 +
                    (uint64_t)(*(uint *)(plVar3 + 0x51) >> 0x18 ^ uVar12 & 0xff) * 4);
      *(void*)((int64_t)plVar3 + (uint64_t)uVar12 + 0x80) = 1;
      *(char *)(plVar3[8] + (int64_t)iVar11) = (char)uVar12;
      *(int *)((int64_t)plVar3 + 0x6c) = *(int *)((int64_t)plVar3 + 0x6c) + 1;
      *(uint *)((int64_t)plVar3 + 0x5c) = (uint)bVar2;
    }
    plVar13 = (int64_t *)*plVar3;
    pbVar14 = (byte *)(*plVar13 + 1);
    *plVar13 = (int64_t)pbVar14;
    iVar8 = (int)plVar13[1] + -1;
    *(int *)(plVar13 + 1) = iVar8;
    piVar1 = (int *)((int64_t)plVar13 + 0xc);
    *piVar1 = *piVar1 + 1;
    if (*piVar1 == 0) {
      *(int *)(plVar13 + 2) = (int)plVar13[2] + 1;
    }
    iVar11 = *(int *)((int64_t)plVar3 + 0x6c);
    iVar9 = (int)plVar3[0xe];
  } while ((iVar11 < iVar9) && (uVar12 = (uint)bVar2, iVar8 != 0));
LAB_00e9ea60:
  bVar6 = true;
  iVar8 = (int)plVar3[1];
joined_r0x00e9ead4:
  if (iVar8 != 2) goto LAB_00e9ea7d;
LAB_00e9ea83:
  if (iVar9 <= iVar11) goto LAB_00e9eab2;
  if (*(int *)(*plVar3 + 8) == 0) {
LAB_00e9eadb:
    return bVar5 || bVar6;
  }
  goto LAB_00e9e6cd;
}

