// Function: FUN_015fb200
// Address: 015fb200
// Size: 2170 bytes
// Class: MUTempoAnalyzerEvent


/* WARNING: Removing unreachable block (ram,0x015fb9bd) */
/* WARNING: Removing unreachable block (ram,0x015fb9c6) */
/* WARNING: Removing unreachable block (ram,0x015fb736) */
/* WARNING: Removing unreachable block (ram,0x015fb73f) */
/* WARNING: Removing unreachable block (ram,0x015fb6a6) */
/* WARNING: Removing unreachable block (ram,0x015fb6af) */
/* WARNING: Removing unreachable block (ram,0x015fba15) */
/* WARNING: Removing unreachable block (ram,0x015fba1e) */
/* WARNING: Removing unreachable block (ram,0x015fb95a) */
/* WARNING: Removing unreachable block (ram,0x015fb963) */
/* WARNING: Removing unreachable block (ram,0x015fb2cc) */
/* WARNING: Removing unreachable block (ram,0x015fb2d5) */
/* WARNING: Removing unreachable block (ram,0x015fb323) */
/* WARNING: Removing unreachable block (ram,0x015fb32c) */

longlong * FUN_015fb200(undefined4 param_1,char param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *in_RCX;
  ulonglong uVar11;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  uVar2 = *(uint *)(*(longlong *)(unaff_RDI + 0x10) + 0xc);
  uVar11 = (ulonglong)uVar2;
  plVar10 = (longlong *)0x0;
  if (uVar11 != 0) {
    if (*unaff_RSI == 0) {
      puVar9 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &DAT_025f0d98;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      (*DAT_025f0db0)();
      lVar4 = *unaff_RSI;
      *unaff_RSI = (longlong)puVar9;
      if (((char)unaff_RSI[1] != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RSI + 1) = 1;
    }
    FUN_00c8e690();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    FUN_00c8e690();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    plVar1 = (longlong *)(local_40 + 0x10);
    if (0 < (int)uVar2) {
      lVar4 = *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x10);
      lVar5 = *(longlong *)(local_40 + 0x10);
      lVar13 = *(longlong *)(local_40 + 0x10);
      if (uVar2 == 1) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        do {
          fVar15 = (float)*(int *)(*(longlong *)(lVar4 + uVar14 * 8) + 0x10);
          *(float *)(lVar5 + uVar14 * 4) = fVar15;
          *(float *)(lVar13 + uVar14 * 4) = fVar15;
          fVar15 = (float)*(int *)(*(longlong *)(lVar4 + 8 + uVar14 * 8) + 0x10);
          *(float *)(lVar5 + 4 + uVar14 * 4) = fVar15;
          *(float *)(lVar13 + 4 + uVar14 * 4) = fVar15;
          uVar14 = uVar14 + 2;
        } while ((uVar2 & 0xfffffffe) != uVar14);
      }
      if ((uVar2 & 1) != 0) {
        fVar15 = (float)*(int *)(*(longlong *)(lVar4 + uVar14 * 8) + 0x10);
        *(float *)(lVar5 + uVar14 * 4) = fVar15;
        *(float *)(lVar13 + uVar14 * 4) = fVar15;
      }
    }
    FUN_015c1230(param_1,uVar11);
    FUN_015c1230(param_1,uVar11);
    if (param_2 != '\0') {
      uVar7 = 3;
      if ((int)uVar2 < 6) {
        uVar7 = (int)uVar2 / 2;
      }
      if (0 < (int)uVar7) {
        lVar13 = (longlong)(int)((uVar2 - 1) - uVar7);
        uVar14 = (ulonglong)uVar7;
        lVar4 = *(longlong *)(local_40 + 0x10);
        lVar5 = *plVar1;
        if (uVar7 == 1) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          uVar8 = uVar2;
          do {
            *(undefined4 *)(lVar4 + uVar12 * 4) = *(undefined4 *)(lVar4 + uVar14 * 4);
            *(undefined4 *)(lVar5 + (longlong)(int)(uVar8 - 1) * 4) =
                 *(undefined4 *)(lVar5 + lVar13 * 4);
            *(undefined4 *)(lVar4 + 4 + uVar12 * 4) = *(undefined4 *)(lVar4 + uVar14 * 4);
            *(undefined4 *)(lVar5 + (longlong)(int)(uVar8 - 2) * 4) =
                 *(undefined4 *)(lVar5 + lVar13 * 4);
            uVar12 = uVar12 + 2;
            uVar8 = uVar8 - 2;
          } while ((uVar7 & 0xfffffffe) != uVar12);
        }
        if ((uVar7 & 1) != 0) {
          *(undefined4 *)(lVar4 + uVar12 * 4) = *(undefined4 *)(lVar4 + uVar14 * 4);
          *(undefined4 *)(lVar5 + (longlong)(int)((uVar2 - 1) - (int)uVar12) * 4) =
               *(undefined4 *)(lVar5 + lVar13 * 4);
        }
      }
    }
    if (0 < (int)uVar2) {
      lVar4 = *plVar1;
      lVar5 = *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x10);
      lVar13 = *(longlong *)(local_40 + 0x10);
      if (uVar11 - 1 < 3) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        do {
          lVar6 = *(longlong *)(lVar5 + uVar14 * 8);
          *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(lVar4 + uVar14 * 4);
          *(undefined4 *)(lVar6 + 0x5c) = *(undefined4 *)(lVar13 + uVar14 * 4);
          lVar6 = *(longlong *)(lVar5 + 8 + uVar14 * 8);
          *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(lVar4 + 4 + uVar14 * 4);
          *(undefined4 *)(lVar6 + 0x5c) = *(undefined4 *)(lVar13 + 4 + uVar14 * 4);
          lVar6 = *(longlong *)(lVar5 + 0x10 + uVar14 * 8);
          *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(lVar4 + 8 + uVar14 * 4);
          *(undefined4 *)(lVar6 + 0x5c) = *(undefined4 *)(lVar13 + 8 + uVar14 * 4);
          lVar6 = *(longlong *)(lVar5 + 0x18 + uVar14 * 8);
          *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(lVar4 + 0xc + uVar14 * 4);
          *(undefined4 *)(lVar6 + 0x5c) = *(undefined4 *)(lVar13 + 0xc + uVar14 * 4);
          uVar14 = uVar14 + 4;
        } while ((uVar2 & 0xfffffffc) != uVar14);
      }
      if ((ulonglong)(uVar2 & 3) != 0) {
        uVar12 = 0;
        do {
          lVar6 = *(longlong *)(lVar5 + uVar14 * 8 + uVar12 * 8);
          *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(lVar4 + uVar14 * 4 + uVar12 * 4);
          *(undefined4 *)(lVar6 + 0x5c) = *(undefined4 *)(lVar13 + uVar14 * 4 + uVar12 * 4);
          uVar12 = uVar12 + 1;
        } while ((uVar2 & 3) != uVar12);
      }
    }
    plVar10 = in_RCX;
    if (*in_RCX != 0) {
      if (*param_3 == 0) {
        uVar7 = (int)uVar2 / 3;
        uVar8 = ~uVar7 + uVar2;
        plVar10 = (longlong *)(ulonglong)uVar8;
        fVar15 = DAT_02390124;
        if (uVar8 - uVar7 != 0 && (int)uVar7 <= (int)uVar8) {
          fVar15 = DAT_02390124 / (float)(int)(uVar8 - uVar7);
        }
        if (0 < (int)uVar2) {
          uVar14 = 0;
          do {
            lVar4 = *(longlong *)
                     (*(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x10) + uVar14 * 8);
            if (lVar4 != 0) {
              FUN_00d50b00();
            }
            iVar3 = *(int *)(lVar4 + 0xc);
            if ((longlong)uVar14 < (longlong)(int)uVar7) {
              FUN_014328b0(SUB84((double)iVar3,0),
                           (double)*(float *)(*(longlong *)(local_40 + 0x10) + uVar14 * 4));
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_00d21140();
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            else if ((longlong)(int)uVar8 < (longlong)uVar14) {
              FUN_014328b0(SUB84((double)iVar3,0),(double)*(float *)(*plVar1 + uVar14 * 4));
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_00d21140();
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              fVar17 = (float)(int)((int)uVar14 - uVar7) * fVar15;
              FUN_014328b0(SUB84((double)iVar3,0),
                           (double)(fVar17 * *(float *)(*plVar1 + uVar14 * 4) +
                                   (DAT_02390124 - fVar17) *
                                   *(float *)(*(longlong *)(local_40 + 0x10) + uVar14 * 4)));
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_00d21140();
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            plVar10 = (longlong *)FUN_00d50b20();
            uVar14 = uVar14 + 1;
          } while (uVar11 != uVar14);
        }
      }
      else {
        plVar10 = param_3;
        if (0 < (int)uVar2) {
          uVar14 = 0;
          do {
            lVar4 = *(longlong *)
                     (*(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x10) + uVar14 * 8);
            if (lVar4 != 0) {
              FUN_00d50b00();
            }
            uVar16 = SUB84((double)*(int *)(lVar4 + 0xc),0);
            FUN_014328b0(uVar16,(double)*(float *)(*(longlong *)(local_40 + 0x10) + uVar14 * 4));
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            FUN_00d21140();
            if (local_50 != 0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            FUN_014328b0(uVar16,(double)*(float *)(*plVar1 + uVar14 * 4));
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            FUN_00d21140();
            if (local_50 != 0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            plVar10 = (longlong *)FUN_00d50b20();
            uVar14 = uVar14 + 1;
          } while (uVar11 != uVar14);
        }
      }
    }
    if (local_40 != 0) {
      FUN_00d50b20();
      plVar10 = (longlong *)FUN_00d50b20();
    }
  }
  return plVar10;
}


