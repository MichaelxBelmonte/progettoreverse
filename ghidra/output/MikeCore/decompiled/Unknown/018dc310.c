// Function: FUN_018dc310
// Address: 018dc310
// Size: 3045 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x018dce0f) */
/* WARNING: Removing unreachable block (ram,0x018dce18) */
/* WARNING: Removing unreachable block (ram,0x018dc4d0) */
/* WARNING: Removing unreachable block (ram,0x018dc4d9) */
/* WARNING: Removing unreachable block (ram,0x018dce8b) */
/* WARNING: Removing unreachable block (ram,0x018dce98) */
/* WARNING: Removing unreachable block (ram,0x018dc576) */
/* WARNING: Removing unreachable block (ram,0x018dc57f) */
/* WARNING: Removing unreachable block (ram,0x018dcd1c) */
/* WARNING: Removing unreachable block (ram,0x018dcd25) */

undefined8 * FUN_018dc310(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  char cVar16;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined8 uVar20;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar21 [16];
  undefined1 uVar22;
  longlong *local_c8;
  char local_c0;
  undefined8 *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  int local_94;
  longlong local_90;
  char local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_40;
  char local_38;
  
  local_80 = param_2;
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &DAT_02572358;
  (*DAT_02572370)();
  if ((*unaff_RSI == 0) || (uVar13 = *(int *)(*unaff_RSI + 0x18) + 3, uVar13 < 7)) {
    *unaff_RDI = puVar11;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
  uVar22 = 0;
  FUN_018dd2d0(uVar13,&local_94);
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  puVar2 = (uint *)local_40[2];
  auVar21 = psadbw((undefined1  [16])0x0,ZEXT416(*puVar2));
  iVar8 = (uint)*(byte *)((longlong)puVar2 + 0xb) +
          (uint)*(byte *)((longlong)puVar2 + 10) +
          (uint)*(byte *)((longlong)puVar2 + 9) +
          (uint)(byte)puVar2[2] +
          (uint)*(byte *)((longlong)puVar2 + 7) +
          (uint)auVar21[0] + (uint)(byte)puVar2[1] + (uint)*(byte *)((longlong)puVar2 + 5) +
          (uint)*(byte *)((longlong)puVar2 + 6);
  if (iVar8 != 0) {
    local_94 = local_94 +
               (((uint)(local_94 / 6 + (local_94 >> 0x1f)) >> 1) - (local_94 >> 0x1f)) * -0xc;
    local_78 = local_40;
    if (iVar8 != 1) {
      FUN_018daf60(0,local_94,1,1,uVar22,local_40,0);
      local_70 = local_40;
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) goto LAB_018dcea2;
        FUN_00d50b00();
        iVar8 = *(int *)((longlong)local_70 + 0xc);
        pcVar6 = DAT_025683d8;
      }
      else {
        if (local_40 == (longlong *)0x0) goto LAB_018dcea2;
        iVar8 = *(int *)((longlong)local_40 + 0xc);
        pcVar6 = DAT_025683d8;
      }
      plVar19 = local_40;
      DAT_025683d8 = pcVar6;
      if (0 < iVar8) {
        lVar14 = 0;
        do {
          lVar3 = *(longlong *)(local_70[2] + lVar14 * 8);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          lVar4 = *(longlong *)(lVar3 + 0x10);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          iVar8 = *(int *)(lVar3 + 0x18);
          iVar8 = iVar8 + (((uint)(iVar8 / 6 + (iVar8 >> 0x1f)) >> 1) - (iVar8 >> 0x1f)) * -0xc;
          iVar1 = *(int *)(lVar3 + 0x1c);
          lVar18 = *local_80;
          if (lVar18 != 0) {
            lVar15 = *(longlong *)(lVar4 + 0x10);
            if (lVar15 != 0) {
              FUN_00d50b00();
              lVar18 = *local_80;
            }
            uVar13 = *(uint *)(lVar18 + 0x18);
            if (3 < (int)uVar13) {
              lVar18 = *(longlong *)(lVar18 + 0x10);
              lVar5 = *(longlong *)(lVar15 + 0x10);
              uVar17 = 0;
              do {
                iVar10 = *(int *)(lVar18 + uVar17 * 4);
                iVar9 = (0xc - iVar8) + iVar10;
                if (3 < *(int *)(lVar5 + (longlong)
                                         (int)(iVar9 + (((uint)(iVar9 / 6 + (iVar9 >> 0x1f)) >> 1) -
                                                       (iVar9 >> 0x1f)) * -0xc) * 4)) {
                  *(undefined1 *)(plVar19[2] + (longlong)iVar10) = 1;
                }
                uVar17 = uVar17 + 1;
              } while (uVar13 >> 2 != uVar17);
            }
            if (lVar15 != 0) {
              FUN_00d50b20();
            }
          }
          puVar12 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar12 = &DAT_025683c0;
          (*pcVar6)();
          FUN_00c92170();
          FUN_00c92160();
          lVar18 = plVar19[2];
          if (*(char *)(lVar18 + iVar8) != '\0') {
            iVar10 = *(int *)(puVar12 + 3);
            FUN_00c8e340((longlong)iVar8,1);
            *(undefined4 *)(puVar12[2] + (longlong)iVar10) = 0;
            lVar18 = plVar19[2];
          }
          iVar10 = iVar8 + 1;
          lVar15 = (longlong)
                   (int)(iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f))
                                  * -0xc);
          if (*(char *)(lVar18 + lVar15) != '\0') {
            iVar10 = *(int *)(puVar12 + 3);
            FUN_00c8e340(lVar15,1);
            *(undefined4 *)(puVar12[2] + (longlong)iVar10) = 1;
            lVar18 = plVar19[2];
          }
          iVar10 = iVar8 + 2;
          lVar15 = (longlong)
                   (int)(iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f))
                                  * -0xc);
          if (*(char *)(lVar18 + lVar15) != '\0') {
            iVar10 = *(int *)(puVar12 + 3);
            FUN_00c8e340(lVar15,1);
            *(undefined4 *)(puVar12[2] + (longlong)iVar10) = 2;
            lVar18 = plVar19[2];
          }
          iVar10 = iVar8 + 3;
          lVar15 = (longlong)
                   (int)(iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f))
                                  * -0xc);
          if (*(char *)(lVar18 + lVar15) != '\0') {
            iVar10 = *(int *)(puVar12 + 3);
            FUN_00c8e340(lVar15,1);
            *(undefined4 *)(puVar12[2] + (longlong)iVar10) = 3;
            lVar18 = plVar19[2];
          }
          iVar10 = iVar8 + 4;
          lVar15 = (longlong)
                   (int)(iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f))
                                  * -0xc);
          if (*(char *)(lVar18 + lVar15) != '\0') {
            iVar10 = *(int *)(puVar12 + 3);
            FUN_00c8e340(lVar15,1);
            *(undefined4 *)(puVar12[2] + (longlong)iVar10) = 4;
            lVar18 = plVar19[2];
          }
          iVar10 = iVar8 + 5;
          lVar15 = (longlong)
                   (int)(iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f))
                                  * -0xc);
          if (*(char *)(lVar18 + lVar15) != '\0') {
            iVar10 = *(int *)(puVar12 + 3);
            FUN_00c8e340(lVar15,1);
            *(undefined4 *)(puVar12[2] + (longlong)iVar10) = 5;
            lVar18 = plVar19[2];
          }
          iVar10 = iVar8 + 6;
          lVar15 = (longlong)
                   (int)(iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f))
                                  * -0xc);
          if (*(char *)(lVar18 + lVar15) != '\0') {
            iVar10 = *(int *)(puVar12 + 3);
            FUN_00c8e340(lVar15,1);
            *(undefined4 *)(puVar12[2] + (longlong)iVar10) = 6;
            lVar18 = plVar19[2];
          }
          iVar10 = iVar8 + 7;
          lVar15 = (longlong)
                   (int)(iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f))
                                  * -0xc);
          if (*(char *)(lVar18 + lVar15) != '\0') {
            iVar10 = *(int *)(puVar12 + 3);
            FUN_00c8e340(lVar15,1);
            *(undefined4 *)(puVar12[2] + (longlong)iVar10) = 7;
            lVar18 = plVar19[2];
          }
          iVar10 = iVar8 + 8;
          lVar15 = (longlong)
                   (int)(iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f))
                                  * -0xc);
          if (*(char *)(lVar18 + lVar15) != '\0') {
            iVar10 = *(int *)(puVar12 + 3);
            FUN_00c8e340(lVar15,1);
            *(undefined4 *)(puVar12[2] + (longlong)iVar10) = 8;
            lVar18 = plVar19[2];
          }
          iVar10 = iVar8 + 9;
          lVar15 = (longlong)
                   (int)(iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f))
                                  * -0xc);
          if (*(char *)(lVar18 + lVar15) != '\0') {
            iVar10 = *(int *)(puVar12 + 3);
            FUN_00c8e340(lVar15,1);
            *(undefined4 *)(puVar12[2] + (longlong)iVar10) = 9;
            lVar18 = plVar19[2];
          }
          iVar10 = iVar8 + 10;
          lVar15 = (longlong)
                   (int)(iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f))
                                  * -0xc);
          if (*(char *)(lVar18 + lVar15) != '\0') {
            iVar10 = *(int *)(puVar12 + 3);
            FUN_00c8e340(lVar15,1);
            *(undefined4 *)(puVar12[2] + (longlong)iVar10) = 10;
            lVar18 = plVar19[2];
          }
          iVar10 = iVar8 + 0xb;
          uVar17 = (ulonglong)
                   (iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) *
                             -0xc);
          if (*(char *)(lVar18 + uVar17) != '\0') {
            iVar10 = *(int *)(puVar12 + 3);
            FUN_00c8e340(uVar17,1);
            *(undefined4 *)(puVar12[2] + (longlong)iVar10) = 0xb;
          }
          iVar10 = iVar8 * 7;
          iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc
          ;
          cVar7 = ((byte)(iVar10 >> 0x1f) & 0xc) + (char)iVar10 + '\x06';
          uVar13 = cVar7 * 0x2b;
          local_b0 = '\0';
          local_b8 = puVar12;
          FUN_017167a0((int)(char)(cVar7 + ((char)((uVar13 & 0xffff) >> 0xf) + (char)(uVar13 >> 9))
                                           * -0xc + -6),&local_b8);
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_b0 != '\0') && (local_b8 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          iVar8 = iVar1 + ((iVar1 / 0xc) * -0xc - iVar8) + 0xc;
          cVar16 = (char)iVar8;
          cVar7 = (char)((uint)(int)(short)(cVar16 * 0x2b) >> 9) - (cVar16 >> 7);
          uVar20 = FUN_01716100(CONCAT31((uint3)(int3)(char)(cVar16 / '\x06' + (cVar16 >> 7)) >> 9,
                                         cVar7),
                                CONCAT31((int3)((uint)iVar8 >> 8),cVar16 + cVar7 * -0xc));
          uVar20 = FUN_018dd490(uVar20,1);
          if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
            uVar20 = FUN_00d50b00();
          }
          if (0 < *(int *)((longlong)puVar11 + 0xc)) {
            lVar18 = 0;
            do {
              lVar15 = *(longlong *)(puVar11[2] + lVar18 * 8);
              if (lVar15 != 0) {
                uVar20 = FUN_00d50b00();
              }
              FUN_018dd490(uVar20,1);
              local_a8 = local_40;
              local_a0 = '\0';
              cVar7 = (**(code **)(*local_40 + 0x50))();
              uVar20 = extraout_XMM0_Qa;
              if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
                uVar20 = FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                uVar20 = FUN_00d50b20();
              }
              if (lVar15 != 0) {
                uVar20 = FUN_00d50b20();
              }
              if (cVar7 != '\0') goto LAB_018dce1d;
              lVar18 = lVar18 + 1;
            } while (lVar18 < *(int *)((longlong)puVar11 + 0xc));
          }
          local_38 = '\0';
          FUN_00d21140();
LAB_018dce1d:
          plVar19 = local_78;
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b20();
            plVar19 = local_78;
            FUN_00d50b20();
          }
          if (puVar12 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 < *(int *)((longlong)local_70 + 0xc));
      }
      FUN_00d50b20();
      *unaff_RDI = puVar11;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (plVar19 == (longlong *)0x0) {
        return unaff_RDI;
      }
      goto LAB_018dcead;
    }
    cVar7 = (char)local_94 * '\a';
    uVar13 = cVar7 * 0x2b;
    cVar7 = cVar7 + ((char)((uVar13 & 0xffff) >> 0xf) + (char)(uVar13 >> 9)) * -0xc;
    cVar7 = (cVar7 >> 7 & 0xcU) + cVar7 + '\x06';
    uVar13 = cVar7 * 0x2b;
    FUN_00c8e690((int)(char)(cVar7 + ((char)((uVar13 & 0xffff) >> 0xf) + (char)(uVar13 >> 9)) * -0xc
                            + -6));
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    uVar20 = ___bzero();
    local_c8 = local_40;
    local_c0 = '\x01';
    FUN_017167a0(uVar20,&local_c8);
    lVar14 = local_90;
    if (local_88 == '\0') {
      if (((local_90 != 0) && (FUN_00d50b00(), local_88 != '\0')) && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_88 = '\0';
    }
    if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d21140();
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
  }
LAB_018dcea2:
  *unaff_RDI = puVar11;
  *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_018dcead:
  FUN_00d50b20();
  return unaff_RDI;
}


