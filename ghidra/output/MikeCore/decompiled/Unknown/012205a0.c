// Function: FUN_012205a0
// Address: 012205a0
// Size: 837 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x012207cb) */
/* WARNING: Removing unreachable block (ram,0x012207d4) */
/* WARNING: Removing unreachable block (ram,0x0122067b) */
/* WARNING: Removing unreachable block (ram,0x01220684) */
/* WARNING: Removing unreachable block (ram,0x01220632) */
/* WARNING: Removing unreachable block (ram,0x0122063b) */
/* WARNING: Removing unreachable block (ram,0x012208db) */
/* WARNING: Removing unreachable block (ram,0x012208e8) */

void FUN_012205a0(void)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *unaff_RDI;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong local_40;
  char local_38;
  
  lVar5 = *unaff_RDI;
  if (0 < *(int *)(lVar5 + 0xc)) {
    lVar7 = 0;
    do {
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar7 * 8);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      FUN_015f8890();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      uVar2 = *(uint *)(local_40 + 0xc);
      uVar9 = (ulonglong)uVar2;
      if (uVar9 == 0) {
LAB_01220896:
        FUN_00d50b20();
      }
      else {
        FUN_00c8e690();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        if (0 < (int)uVar2) {
          lVar6 = *(longlong *)(local_40 + 0x10);
          lVar3 = *(longlong *)(local_40 + 0x10);
          if (uVar9 - 1 < 3) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            do {
              *(float *)(lVar3 + uVar10 * 4) =
                   (float)*(int *)(*(longlong *)(lVar6 + uVar10 * 8) + 0x10);
              *(float *)(lVar3 + 4 + uVar10 * 4) =
                   (float)*(int *)(*(longlong *)(lVar6 + 8 + uVar10 * 8) + 0x10);
              *(float *)(lVar3 + 8 + uVar10 * 4) =
                   (float)*(int *)(*(longlong *)(lVar6 + 0x10 + uVar10 * 8) + 0x10);
              *(float *)(lVar3 + 0xc + uVar10 * 4) =
                   (float)*(int *)(*(longlong *)(lVar6 + 0x18 + uVar10 * 8) + 0x10);
              uVar10 = uVar10 + 4;
            } while ((uVar2 & 0xfffffffc) != uVar10);
          }
          if ((ulonglong)(uVar2 & 3) != 0) {
            uVar8 = 0;
            do {
              *(float *)(lVar3 + uVar10 * 4 + uVar8 * 4) =
                   (float)*(int *)(*(longlong *)(lVar6 + uVar10 * 8 + uVar8 * 8) + 0x10);
              uVar8 = uVar8 + 1;
            } while ((uVar2 & 3) != uVar8);
          }
        }
        FUN_015c15b0(DAT_023b2c88,uVar9);
        FUN_00c8e4f0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00c92170();
        FUN_00c92160();
        FUN_015c15b0(DAT_0240b524,uVar9);
        if (0 < (int)uVar2) {
          lVar6 = *(longlong *)(local_40 + 0x10);
          uVar10 = 0;
          do {
            fVar1 = *(float *)(*(longlong *)(local_40 + 0x10) + uVar10 * 4);
            *(float *)(*(longlong *)(lVar6 + uVar10 * 8) + 0x14) =
                 (*(float *)(*(longlong *)(local_40 + 0x10) + uVar10 * 4) - fVar1) * DAT_02411290 +
                 fVar1;
            uVar4 = FUN_00e7d780();
            lVar6 = *(longlong *)(local_40 + 0x10);
            *(undefined4 *)(*(longlong *)(lVar6 + uVar10 * 8) + 0x10) = uVar4;
            uVar10 = uVar10 + 1;
          } while (uVar9 != uVar10);
        }
        FUN_00d50b20();
        if (local_40 != 0) {
          FUN_00d50b20();
          goto LAB_01220896;
        }
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      lVar7 = lVar7 + 1;
      lVar5 = *unaff_RDI;
    } while (lVar7 < *(int *)(lVar5 + 0xc));
  }
  return;
}


