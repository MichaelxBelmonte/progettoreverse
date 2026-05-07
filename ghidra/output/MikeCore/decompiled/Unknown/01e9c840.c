// Function: FUN_01e9c840
// Address: 01e9c840
// Size: 739 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01e9ca7c) */
/* WARNING: Removing unreachable block (ram,0x01e9ca85) */

void FUN_01e9c840(void)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  longlong unaff_RDI;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong local_58;
  char local_50;
  
  iVar4 = FUN_00d8c7a0();
  if (iVar4 < 1) {
    bVar1 = false;
    lVar7 = 0;
    iVar8 = 0;
  }
  else {
    iVar5 = 0;
    iVar8 = 0;
    bVar1 = false;
    lVar7 = 0;
    do {
      while ((((sVar3 = FUN_00d8cbc0(), (ushort)(sVar3 + 0xdfd8U) < 2 || (sVar3 == 10)) ||
              (sVar3 == 0xd)) || (iVar5 == iVar4 + -1))) {
        if (iVar8 < *(int *)(*(longlong *)(unaff_RDI + 0x40) + 0xc)) {
          lVar6 = *(longlong *)
                   (*(longlong *)(*(longlong *)(unaff_RDI + 0x40) + 0x10) + (longlong)iVar8 * 8);
          if (lVar7 == lVar6) {
            lVar6 = lVar7;
            bVar2 = bVar1;
            if ((!bVar1) && (lVar7 != 0)) {
              FUN_00d50b00();
              bVar2 = true;
            }
          }
          else {
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
            bVar2 = true;
            if ((bVar1) && (lVar7 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          FUN_01e9cc30();
          if (local_58 == lVar7) {
            if ((bVar1) || (local_58 == 0)) {
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar1 = true;
              if (local_50 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          else if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
            if ((!bVar1) || (lVar7 == 0)) goto LAB_01e9ca12;
            FUN_00d50b20();
            lVar7 = local_58;
            bVar1 = true;
          }
          else if ((bVar1) && (lVar7 != 0)) {
            FUN_00d50b20();
            lVar7 = local_58;
            bVar1 = true;
          }
          else {
LAB_01e9ca12:
            lVar7 = local_58;
            bVar1 = true;
          }
          local_50 = '\0';
          FUN_00d21140();
          lVar6 = lVar7;
          local_58 = lVar7;
          bVar2 = bVar1;
        }
        bVar1 = bVar2;
        lVar7 = *(longlong *)(unaff_RDI + 0x10);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        FUN_00e7b4e0();
        FUN_01ea95f0();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        iVar5 = iVar5 + 1;
        iVar8 = iVar8 + 1;
        lVar7 = lVar6;
        if (iVar5 == iVar4) goto LAB_01e9cb00;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar4);
  }
LAB_01e9cb00:
  while (iVar8 < *(int *)(*(longlong *)(unaff_RDI + 0x40) + 0xc)) {
    FUN_00d23740();
  }
  if ((bVar1) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  return;
}


