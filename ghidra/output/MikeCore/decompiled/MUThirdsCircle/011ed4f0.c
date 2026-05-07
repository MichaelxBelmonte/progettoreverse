// Function: FUN_011ed4f0
// Address: 011ed4f0
// Size: 1046 bytes
// Class: MUThirdsCircle


/* WARNING: Removing unreachable block (ram,0x011ed82b) */
/* WARNING: Removing unreachable block (ram,0x011ed834) */
/* WARNING: Removing unreachable block (ram,0x011ed7da) */
/* WARNING: Removing unreachable block (ram,0x011ed7e3) */
/* WARNING: Removing unreachable block (ram,0x011ed788) */
/* WARNING: Removing unreachable block (ram,0x011ed791) */
/* WARNING: Removing unreachable block (ram,0x011ed6dc) */
/* WARNING: Removing unreachable block (ram,0x011ed6e5) */
/* WARNING: Removing unreachable block (ram,0x011ed60a) */
/* WARNING: Removing unreachable block (ram,0x011ed613) */
/* WARNING: Removing unreachable block (ram,0x011ed68a) */
/* WARNING: Removing unreachable block (ram,0x011ed693) */
/* WARNING: Removing unreachable block (ram,0x011ed8a8) */
/* WARNING: Removing unreachable block (ram,0x011ed8b1) */
/* WARNING: Removing unreachable block (ram,0x011ed5bb) */
/* WARNING: Removing unreachable block (ram,0x011ed5c4) */

void FUN_011ed4f0(float param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong unaff_RDI;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong local_40;
  char local_38;
  
  uVar1 = *(uint *)(*(longlong *)(unaff_RDI + 0x160) + 0xc);
  uVar4 = FUN_00e7d780(param_1 / (float)*(double *)(*(longlong *)(unaff_RDI + 0x1d0) + 0x50));
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  puVar2 = *(undefined8 **)(unaff_RDI + 0x2a0);
  if (puVar2 == puVar5) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x2a0) = puVar5;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00d21140();
  FUN_00d50b20();
  if (1 < (int)uVar4) {
    if ((int)uVar1 < 1) {
      iVar8 = uVar4 - 1;
      do {
        FUN_00c8e690();
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        FUN_00d21140();
        FUN_00d50b20();
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    else {
      uVar7 = 1;
      do {
        FUN_00c8e690();
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        FUN_00d21140();
        uVar6 = 0;
        do {
          lVar3 = *(longlong *)
                   (*(longlong *)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(unaff_RDI + 0x280) + 0x10) + uVar6 * 8) + 0x10)
                   + uVar7 * 8);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          if (*(char *)(lVar3 + 0x3d) != '\0') {
            *(undefined4 *)(*(longlong *)(local_40 + 0x10) + uVar6 * 4) =
                 *(undefined4 *)(lVar3 + 0x14);
          }
          FUN_00d50b20();
          uVar6 = uVar6 + 1;
        } while (uVar1 != uVar6);
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar4);
    }
  }
  FUN_00c8e690();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar3 = *(longlong *)(unaff_RDI + 0x2a8);
  if (lVar3 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RDI + 0x2a8) = local_40;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar3 = *(longlong *)(unaff_RDI + 0x2b0);
  if (lVar3 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RDI + 0x2b0) = local_40;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


