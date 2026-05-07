// Function: FUN_00e9e690
// Address: 00e9e690
// Size: 1049 bytes
// Class: Unknown


bool FUN_00e9e690(undefined4 param_1)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  longlong unaff_RDI;
  byte *pbVar14;
  
  plVar3 = *(longlong **)(unaff_RDI + 0x30);
  bVar5 = false;
  bVar6 = false;
LAB_00e9e6cd:
  do {
    do {
      if (*(int *)((longlong)plVar3 + 0xc) == 2) goto LAB_00e9e850;
    } while (*(int *)((longlong)plVar3 + 0xc) != 1);
    iVar8 = (int)plVar3[0xf];
    if (*(int *)(*plVar3 + 0x20) == 0) {
      bVar2 = 0;
LAB_00e9e74a:
      bVar5 = (bool)(bVar2 | bVar5);
      if (iVar8 < *(int *)((longlong)plVar3 + 0x74)) goto LAB_00e9eadb;
    }
    else {
      if (iVar8 < *(int *)((longlong)plVar3 + 0x74)) {
        puVar10 = *(undefined1 **)(*plVar3 + 0x18);
        do {
          *puVar10 = *(undefined1 *)(plVar3[10] + (longlong)iVar8);
          iVar8 = (int)plVar3[0xf] + 1;
          *(int *)(plVar3 + 0xf) = iVar8;
          lVar4 = *plVar3;
          iVar11 = *(int *)(lVar4 + 0x20) + -1;
          *(int *)(lVar4 + 0x20) = iVar11;
          puVar10 = (undefined1 *)(*(longlong *)(lVar4 + 0x18) + 1);
          *(undefined1 **)(lVar4 + 0x18) = puVar10;
          piVar1 = (int *)(lVar4 + 0x24);
          *piVar1 = *piVar1 + 1;
          if (*piVar1 == 0) {
            *(int *)(lVar4 + 0x28) = *(int *)(lVar4 + 0x28) + 1;
          }
          bVar2 = 1;
        } while ((iVar11 != 0) && (iVar8 < *(int *)((longlong)plVar3 + 0x74)));
        goto LAB_00e9e74a;
      }
      if (iVar8 < *(int *)((longlong)plVar3 + 0x74)) goto LAB_00e9eadb;
    }
    iVar8 = (int)plVar3[1];
    if (((iVar8 == 4) && ((int)plVar3[2] == 0)) &&
       ((0xff < *(uint *)((longlong)plVar3 + 0x5c) || ((int)plVar3[0xc] < 1)))) goto LAB_00e9eadb;
    *(undefined4 *)((longlong)plVar3 + 0x6c) = 0;
    *(undefined8 *)((longlong)plVar3 + 0x74) = 0;
    *(undefined4 *)(plVar3 + 0x51) = 0xffffffff;
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
    *(int *)((longlong)plVar3 + 0x294) = *(int *)((longlong)plVar3 + 0x294) + 1;
    *(undefined4 *)((longlong)plVar3 + 0xc) = 2;
    if (iVar8 == 3) {
      if (((int)plVar3[2] == 0) &&
         ((0xff < *(uint *)((longlong)plVar3 + 0x5c) || ((int)plVar3[0xc] < 1)))) goto LAB_00e9eadb;
LAB_00e9e850:
      iVar8 = (int)plVar3[1];
    }
    iVar11 = *(int *)((longlong)plVar3 + 0x6c);
    iVar9 = (int)plVar3[0xe];
    if (iVar8 == 2) break;
    if (iVar11 < iVar9) {
      plVar13 = (longlong *)*plVar3;
      if ((int)plVar13[1] == 0) {
        iVar8 = (int)plVar3[1];
        goto joined_r0x00e9ead4;
      }
      if ((int)plVar3[2] != 0) {
        do {
          bVar2 = *(byte *)*plVar13;
          uVar12 = *(uint *)((longlong)plVar3 + 0x5c);
          iVar8 = (int)plVar3[0xc];
          if (uVar12 == bVar2) {
            if (iVar8 == 0xff) {
LAB_00e9ea00:
              if (uVar12 < 0x100) {
                param_1 = FUN_00e9fdb0();
              }
              *(uint *)((longlong)plVar3 + 0x5c) = (uint)bVar2;
              *(undefined4 *)(plVar3 + 0xc) = 1;
            }
            else {
              *(int *)(plVar3 + 0xc) = iVar8 + 1;
            }
          }
          else {
            if (iVar8 != 1) goto LAB_00e9ea00;
            *(uint *)(plVar3 + 0x51) =
                 *(uint *)(plVar3 + 0x51) << 8 ^
                 *(uint *)(&DAT_02789c20 +
                          (ulonglong)(uVar12 & 0xff ^ *(uint *)(plVar3 + 0x51) >> 0x18) * 4);
            *(undefined1 *)((longlong)plVar3 + (ulonglong)uVar12 + 0x80) = 1;
            *(char *)(plVar3[8] + (longlong)iVar11) = (char)uVar12;
            *(int *)((longlong)plVar3 + 0x6c) = *(int *)((longlong)plVar3 + 0x6c) + 1;
            *(uint *)((longlong)plVar3 + 0x5c) = (uint)bVar2;
          }
          plVar13 = (longlong *)*plVar3;
          *plVar13 = *plVar13 + 1;
          iVar8 = (int)plVar13[1] + -1;
          *(int *)(plVar13 + 1) = iVar8;
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + 1;
          if (*piVar1 == 0) {
            *(int *)(plVar13 + 2) = (int)plVar13[2] + 1;
          }
          iVar11 = *(int *)((longlong)plVar3 + 0x6c);
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
    if (*(uint *)((longlong)plVar3 + 0x5c) < 0x100) {
      param_1 = FUN_00e9fdb0();
      iVar8 = (int)plVar3[1];
    }
    *(undefined8 *)((longlong)plVar3 + 0x5c) = 0x100;
LAB_00e9eab2:
    param_1 = FUN_00e9ff20(param_1,iVar8);
    *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
  } while( true );
  if ((iVar9 <= iVar11) || (*(int *)((undefined8 *)*plVar3 + 1) == 0)) goto LAB_00e9ea70;
  pbVar14 = *(byte **)*plVar3;
  uVar12 = *(uint *)((longlong)plVar3 + 0x5c);
  do {
    bVar2 = *pbVar14;
    iVar8 = (int)plVar3[0xc];
    if (uVar12 == bVar2) {
      if (iVar8 == 0xff) {
LAB_00e9e900:
        if (uVar12 < 0x100) {
          param_1 = FUN_00e9fdb0();
        }
        *(uint *)((longlong)plVar3 + 0x5c) = (uint)bVar2;
        *(undefined4 *)(plVar3 + 0xc) = 1;
      }
      else {
        *(int *)(plVar3 + 0xc) = iVar8 + 1;
      }
    }
    else {
      if (iVar8 != 1) goto LAB_00e9e900;
      *(uint *)(plVar3 + 0x51) =
           *(uint *)(plVar3 + 0x51) << 8 ^
           *(uint *)(&DAT_02789c20 +
                    (ulonglong)(*(uint *)(plVar3 + 0x51) >> 0x18 ^ uVar12 & 0xff) * 4);
      *(undefined1 *)((longlong)plVar3 + (ulonglong)uVar12 + 0x80) = 1;
      *(char *)(plVar3[8] + (longlong)iVar11) = (char)uVar12;
      *(int *)((longlong)plVar3 + 0x6c) = *(int *)((longlong)plVar3 + 0x6c) + 1;
      *(uint *)((longlong)plVar3 + 0x5c) = (uint)bVar2;
    }
    plVar13 = (longlong *)*plVar3;
    pbVar14 = (byte *)(*plVar13 + 1);
    *plVar13 = (longlong)pbVar14;
    iVar8 = (int)plVar13[1] + -1;
    *(int *)(plVar13 + 1) = iVar8;
    piVar1 = (int *)((longlong)plVar13 + 0xc);
    *piVar1 = *piVar1 + 1;
    if (*piVar1 == 0) {
      *(int *)(plVar13 + 2) = (int)plVar13[2] + 1;
    }
    iVar11 = *(int *)((longlong)plVar3 + 0x6c);
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


