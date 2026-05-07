// Function: FUN_011ec5f0
// Address: 011ec5f0
// Size: 1782 bytes
// Class: MUThirdsCircle


/* WARNING: Removing unreachable block (ram,0x011ec72f) */
/* WARNING: Removing unreachable block (ram,0x011ec738) */
/* WARNING: Removing unreachable block (ram,0x011ec6e0) */
/* WARNING: Removing unreachable block (ram,0x011ec6e9) */
/* WARNING: Removing unreachable block (ram,0x011ec8ac) */
/* WARNING: Removing unreachable block (ram,0x011ec8b5) */

void FUN_011ec5f0(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *in_RCX;
  longlong *in_RDX;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  uint uVar16;
  float fVar17;
  longlong local_58;
  char local_50;
  
  uVar2 = *(uint *)(*(longlong *)(unaff_RDI + 0x160) + 0xc);
  uVar10 = (ulonglong)uVar2;
  uVar3 = *(uint *)(*(longlong *)(unaff_RDI + 0x1d0) + 0x24);
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &DAT_025f0d98;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  (*DAT_025f0db0)();
  uVar7 = FUN_014832c0();
  FUN_00d216c0();
  uVar15 = uVar10;
  if (0 < (int)uVar2) {
    do {
      FUN_00c8e690();
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      local_50 = '\0';
      FUN_00d21140();
      FUN_00d50b20();
      uVar16 = (int)uVar15 - 1;
      uVar15 = (ulonglong)uVar16;
    } while (uVar16 != 0);
    uVar15 = 0;
    if ((int)uVar3 < 2) {
      do {
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x280) + 0x10) + uVar15 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        if (*(longlong *)(*(longlong *)(*in_RCX + 0x10) + uVar15 * 8) != 0) {
          FUN_00d50b00();
        }
        FUN_015c15b0(param_1);
        FUN_00d50b20();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        uVar15 = uVar15 + 1;
      } while (uVar10 != uVar15);
    }
    else {
      do {
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x280) + 0x10) + uVar15 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        lVar5 = *(longlong *)(*(longlong *)(*in_RCX + 0x10) + uVar15 * 8);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        uVar14 = 1;
        do {
          fVar17 = *(float *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar14 * 8) + 0x14);
          fVar1 = *(float *)(*(longlong *)(*in_RDX + 0x10) + uVar14 * 4);
          iVar8 = FUN_00e7d780(*(undefined4 *)(*(longlong *)(*unaff_RSI + 0x10) + uVar14 * 4));
          lVar6 = *(longlong *)(lVar5 + 0x10);
          *(float *)(lVar6 + (longlong)iVar8 * 4) =
               fVar17 * fVar1 + *(float *)(lVar6 + (longlong)iVar8 * 4);
          uVar14 = uVar14 + 1;
        } while (uVar3 != uVar14);
        FUN_015c15b0(param_1);
        FUN_00d50b20();
        FUN_00d50b20();
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar10);
    }
  }
  FUN_00c8e690();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (0 < (int)uVar7) {
    uVar16 = uVar7;
    if ((int)uVar2 < 1) {
      do {
        FUN_015c15b0(param_2,uVar10);
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    else {
      uVar14 = (ulonglong)(uVar2 & 3);
      uVar15 = 0;
      do {
        lVar4 = *(longlong *)(*in_RCX + 0x10);
        lVar5 = *(longlong *)(local_58 + 0x10);
        uVar12 = 0;
        if (2 < uVar10 - 1) {
          do {
            *(undefined4 *)(lVar5 + uVar12 * 4) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar4 + uVar12 * 8) + 0x10) + uVar15 * 4);
            *(undefined4 *)(lVar5 + 4 + uVar12 * 4) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar4 + 8 + uVar12 * 8) + 0x10) + uVar15 * 4);
            *(undefined4 *)(lVar5 + 8 + uVar12 * 4) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x10 + uVar12 * 8) + 0x10) + uVar15 * 4);
            *(undefined4 *)(lVar5 + 0xc + uVar12 * 4) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x18 + uVar12 * 8) + 0x10) + uVar15 * 4);
            uVar12 = uVar12 + 4;
          } while ((uVar2 & 0xfffffffc) != uVar12);
        }
        if (uVar14 != 0) {
          uVar13 = 0;
          do {
            *(undefined4 *)(lVar5 + uVar12 * 4 + uVar13 * 4) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar4 + uVar12 * 8 + uVar13 * 8) + 0x10) + uVar15 * 4
                  );
            uVar13 = uVar13 + 1;
          } while (uVar14 != uVar13);
        }
        FUN_015c15b0(param_2,uVar10);
        lVar4 = *(longlong *)(local_58 + 0x10);
        lVar5 = *(longlong *)(*in_RCX + 0x10);
        uVar12 = 0;
        if (2 < uVar10 - 1) {
          do {
            *(undefined4 *)(*(longlong *)(*(longlong *)(lVar5 + uVar12 * 8) + 0x10) + uVar15 * 4) =
                 *(undefined4 *)(lVar4 + uVar12 * 4);
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar5 + 8 + uVar12 * 8) + 0x10) + uVar15 * 4) =
                 *(undefined4 *)(lVar4 + 4 + uVar12 * 4);
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10 + uVar12 * 8) + 0x10) + uVar15 * 4) =
                 *(undefined4 *)(lVar4 + 8 + uVar12 * 4);
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x18 + uVar12 * 8) + 0x10) + uVar15 * 4) =
                 *(undefined4 *)(lVar4 + 0xc + uVar12 * 4);
            uVar12 = uVar12 + 4;
          } while ((uVar2 & 0xfffffffc) != uVar12);
        }
        if ((uVar2 & 3) != 0) {
          uVar13 = 0;
          do {
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar5 + uVar12 * 8 + uVar13 * 8) + 0x10) + uVar15 * 4) =
                 *(undefined4 *)(lVar4 + uVar12 * 4 + uVar13 * 4);
            uVar13 = uVar13 + 1;
          } while (uVar14 != uVar13);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar7);
    }
  }
  if (0 < (int)uVar2) {
    if ((int)uVar3 < 2) {
      uVar15 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x280) + 0x10) + uVar15 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        if (*(longlong *)(*(longlong *)(*in_RCX + 0x10) + uVar15 * 8) != 0) {
          FUN_00d50b00();
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        uVar15 = uVar15 + 1;
      } while (uVar10 != uVar15);
    }
    else {
      uVar15 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x280) + 0x10) + uVar15 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        lVar5 = *(longlong *)(*(longlong *)(*in_RCX + 0x10) + uVar15 * 8);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        uVar14 = 1;
        do {
          fVar17 = *(float *)(*(longlong *)(*unaff_RSI + 0x10) + uVar14 * 4);
          iVar9 = FUN_00e7d780();
          fVar17 = fVar17 - (float)iVar9;
          iVar8 = iVar9 + 1;
          if ((int)uVar7 <= iVar9 + 1) {
            iVar8 = iVar9;
          }
          lVar6 = *(longlong *)(lVar5 + 0x10);
          *(float *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar14 * 8) + 0x38) =
               fVar17 * *(float *)(lVar6 + (longlong)iVar8 * 4) +
               (DAT_02390124 - fVar17) * *(float *)(lVar6 + (longlong)iVar9 * 4);
          uVar14 = uVar14 + 1;
        } while (uVar3 != uVar14);
        FUN_00d50b20();
        FUN_00d50b20();
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar10);
    }
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if (puVar11 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


