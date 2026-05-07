// Function: FUN_015b46b0
// Address: 015b46b0
// Size: 1005 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x015b490d) */
/* WARNING: Removing unreachable block (ram,0x015b4916) */
/* WARNING: Removing unreachable block (ram,0x015b48a9) */
/* WARNING: Removing unreachable block (ram,0x015b48b2) */
/* WARNING: Removing unreachable block (ram,0x015b4a64) */
/* WARNING: Removing unreachable block (ram,0x015b4a6d) */
/* WARNING: Removing unreachable block (ram,0x015b49af) */
/* WARNING: Removing unreachable block (ram,0x015b49b8) */

undefined8 * FUN_015b46b0(undefined8 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong local_40;
  char local_38;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  if (2 < param_2) {
    uVar9 = param_2 - 1;
    uVar10 = 1;
    iVar8 = 0;
    iVar7 = 0;
    do {
      pfVar4 = (float *)*unaff_RSI;
      fVar1 = pfVar4[uVar10 - 1];
      fVar2 = pfVar4[uVar10];
      iVar5 = (int)uVar10;
      if ((fVar1 != fVar2) || (NAN(fVar1) || NAN(fVar2))) {
        if (fVar1 < fVar2) {
LAB_015b4771:
          iVar8 = iVar8 + 1;
          if (fVar1 != fVar2) {
            iVar8 = 0;
          }
          if (NAN(fVar1) || NAN(fVar2)) {
            iVar8 = 0;
          }
          iVar7 = 1;
          goto LAB_015b47a2;
        }
LAB_015b4810:
        iVar8 = iVar8 + 1;
        if (fVar1 != fVar2) {
          iVar8 = 0;
        }
        if (NAN(fVar1) || NAN(fVar2)) {
          iVar8 = 0;
        }
        iVar7 = -1;
LAB_015b482a:
        if ((fVar2 <= fVar1) && (fVar2 < pfVar4[uVar10 + 1])) {
          if (iVar8 != 0) {
            iVar5 = iVar5 - iVar8 / 2;
          }
          FUN_014328b0((double)iVar5,(double)fVar2);
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d21140();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else if (iVar7 == 0) {
        fVar3 = pfVar4[uVar10 + 1];
        if ((fVar3 != fVar2) || (NAN(fVar3) || NAN(fVar2))) {
          if (fVar2 <= fVar3) goto LAB_015b4810;
          goto LAB_015b4771;
        }
        iVar8 = iVar8 + 1;
        iVar7 = 0;
      }
      else {
        iVar8 = iVar8 + 1;
        if (iVar7 < 1) goto LAB_015b482a;
LAB_015b47a2:
        if ((fVar1 <= fVar2) && (pfVar4[uVar10 + 1] <= fVar2 && fVar2 != pfVar4[uVar10 + 1])) {
          if (*(int *)((longlong)puVar6 + 0xc) == 0) {
            FUN_014328b0(0,(double)*pfVar4);
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            FUN_00d21140();
            if (local_40 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          if (iVar8 != 0) {
            iVar5 = iVar5 - iVar8 / 2;
          }
          FUN_014328b0((double)iVar5,(double)*(float *)(*unaff_RSI + uVar10 * 4));
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d21140();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar9 != uVar10);
    if ((1 < (int)*(uint *)((longlong)puVar6 + 0xc)) &&
       ((*(uint *)((longlong)puVar6 + 0xc) & 1) == 0)) {
      FUN_014328b0((double)(int)uVar9,(double)*(float *)(*unaff_RSI + (longlong)(int)uVar9 * 4));
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


