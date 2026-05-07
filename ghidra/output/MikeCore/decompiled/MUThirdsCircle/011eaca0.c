// Function: FUN_011eaca0
// Address: 011eaca0
// Size: 1080 bytes
// Class: MUThirdsCircle


/* WARNING: Removing unreachable block (ram,0x011eae17) */
/* WARNING: Removing unreachable block (ram,0x011eae20) */
/* WARNING: Removing unreachable block (ram,0x011eadac) */
/* WARNING: Removing unreachable block (ram,0x011eadb5) */
/* WARNING: Removing unreachable block (ram,0x011eaecb) */
/* WARNING: Removing unreachable block (ram,0x011eaed4) */

void FUN_011eaca0(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  longlong unaff_RDI;
  uint uVar15;
  ulonglong uVar16;
  longlong local_70;
  char local_68;
  
  uVar14 = *(uint *)(*(longlong *)(unaff_RDI + 0x160) + 0xc);
  uVar7 = (ulonglong)uVar14;
  uVar1 = *(uint *)(*(longlong *)(unaff_RDI + 0x1d0) + 0x24);
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  pcVar6 = DAT_02572370;
  (*DAT_02572370)();
  lVar2 = *(longlong *)(unaff_RDI + 0x280);
  *(undefined8 **)(unaff_RDI + 0x280) = puVar8;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d21370();
  if (0 < (int)uVar14) {
    if ((int)uVar1 < 1) {
      do {
        puVar8 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &DAT_02572358;
        (*pcVar6)();
        FUN_00d21370();
        FUN_00d21140();
        FUN_00d50b20();
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    else {
      uVar13 = 0;
      do {
        puVar8 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &DAT_02572358;
        (*pcVar6)();
        FUN_00d21370();
        FUN_00d21140();
        uVar15 = 0;
        do {
          FUN_0181de80();
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          FUN_00d21140();
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          uVar15 = uVar15 + 1;
        } while (uVar1 != uVar15);
        if (puVar8 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar14);
    }
    if ((int)uVar1 < 1) {
      uVar16 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x160) + 0x10) + uVar16 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x280) + 0x10) + uVar16 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_015c6b60();
        FUN_015c6310();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        uVar16 = uVar16 + 1;
      } while (uVar7 != uVar16);
    }
    else {
      uVar16 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x160) + 0x10) + uVar16 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x280) + 0x10) + uVar16 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        lVar9 = FUN_015c6b60();
        lVar10 = FUN_015c6310();
        lVar4 = *(longlong *)(lVar3 + 0x10);
        if ((ulonglong)uVar1 - 1 < 3) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          do {
            lVar5 = *(longlong *)(lVar4 + uVar11 * 8);
            *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(lVar9 + uVar11 * 4);
            *(undefined4 *)(lVar5 + 0x1c) = *(undefined4 *)(lVar10 + uVar11 * 4);
            lVar5 = *(longlong *)(lVar4 + 8 + uVar11 * 8);
            *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(lVar9 + 4 + uVar11 * 4);
            *(undefined4 *)(lVar5 + 0x1c) = *(undefined4 *)(lVar10 + 4 + uVar11 * 4);
            lVar5 = *(longlong *)(lVar4 + 0x10 + uVar11 * 8);
            *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(lVar9 + 8 + uVar11 * 4);
            *(undefined4 *)(lVar5 + 0x1c) = *(undefined4 *)(lVar10 + 8 + uVar11 * 4);
            lVar5 = *(longlong *)(lVar4 + 0x18 + uVar11 * 8);
            *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(lVar9 + 0xc + uVar11 * 4);
            *(undefined4 *)(lVar5 + 0x1c) = *(undefined4 *)(lVar10 + 0xc + uVar11 * 4);
            uVar11 = uVar11 + 4;
          } while ((uVar1 & 0xfffffffc) != uVar11);
        }
        if ((ulonglong)(uVar1 & 3) != 0) {
          uVar12 = 0;
          do {
            lVar5 = *(longlong *)(lVar4 + uVar11 * 8 + uVar12 * 8);
            *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(lVar9 + uVar11 * 4 + uVar12 * 4);
            *(undefined4 *)(lVar5 + 0x1c) = *(undefined4 *)(lVar10 + uVar11 * 4 + uVar12 * 4);
            uVar12 = uVar12 + 1;
          } while ((uVar1 & 3) != uVar12);
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar7);
    }
  }
  return;
}


