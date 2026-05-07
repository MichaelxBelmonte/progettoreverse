// Function: FUN_011ecf60
// Address: 011ecf60
// Size: 977 bytes
// Class: MUThirdsCircle


/* WARNING: Removing unreachable block (ram,0x011ed0be) */
/* WARNING: Removing unreachable block (ram,0x011ed0c7) */
/* WARNING: Removing unreachable block (ram,0x011ed306) */
/* WARNING: Removing unreachable block (ram,0x011ed30f) */
/* WARNING: Removing unreachable block (ram,0x011ed177) */
/* WARNING: Removing unreachable block (ram,0x011ed180) */
/* WARNING: Removing unreachable block (ram,0x011ed069) */
/* WARNING: Removing unreachable block (ram,0x011ed072) */
/* WARNING: Removing unreachable block (ram,0x011ed2b2) */
/* WARNING: Removing unreachable block (ram,0x011ed2bb) */
/* WARNING: Removing unreachable block (ram,0x011ed1f4) */
/* WARNING: Removing unreachable block (ram,0x011ed1fd) */

void FUN_011ecf60(float param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong unaff_RDI;
  ulonglong uVar8;
  longlong local_40;
  char local_38;
  
  uVar1 = *(uint *)(*(longlong *)(unaff_RDI + 0x160) + 0xc);
  uVar5 = FUN_00e7d780(param_1 / (float)*(double *)(*(longlong *)(unaff_RDI + 0x1d0) + 0x50));
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  puVar2 = *(undefined8 **)(unaff_RDI + 0x288);
  if (puVar2 == puVar6) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x288) = puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  if (0 < (int)uVar1) {
    if ((int)uVar5 < 2) {
      uVar7 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x280) + 0x10) + uVar7 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_00c8e690();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        local_38 = '\0';
        FUN_00d21140();
        FUN_00d50b20();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
    }
    else {
      uVar7 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x280) + 0x10) + uVar7 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_00c8e690();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        local_38 = '\0';
        FUN_00d21140();
        uVar8 = 1;
        do {
          lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar8 * 8);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          if (*(char *)(lVar4 + 0x3c) != '\0') {
            *(undefined4 *)(*(longlong *)(local_40 + 0x10) + uVar8 * 4) =
                 *(undefined4 *)(lVar4 + 0x14);
          }
          FUN_00d50b20();
          uVar8 = uVar8 + 1;
        } while (uVar5 != uVar8);
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar1);
    }
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar3 = *(longlong *)(unaff_RDI + 0x290);
  if (lVar3 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RDI + 0x290) = local_40;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar3 = *(longlong *)(unaff_RDI + 0x298);
  if (lVar3 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RDI + 0x298) = local_40;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


