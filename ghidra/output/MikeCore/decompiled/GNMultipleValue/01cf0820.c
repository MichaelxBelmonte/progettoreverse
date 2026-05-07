// Function: FUN_01cf0820
// Address: 01cf0820
// Size: 913 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01cf0b34) */
/* WARNING: Removing unreachable block (ram,0x01cf0b3d) */
/* WARNING: Removing unreachable block (ram,0x01cf0a9d) */
/* WARNING: Removing unreachable block (ram,0x01cf0aa6) */
/* WARNING: Removing unreachable block (ram,0x01cf0b9e) */
/* WARNING: Removing unreachable block (ram,0x01cf0ba7) */

void FUN_01cf0820(undefined8 param_1,undefined4 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong local_48;
  char local_40;
  
  iVar5 = FUN_01d3a5a0();
  if ((iVar5 == 1) && (iVar5 = FUN_01d3b630(), iVar5 == 1)) {
    cVar4 = (**(code **)(*unaff_RDI + 0x9a0))();
    if (cVar4 != '\0') {
      cVar4 = (**(code **)(*unaff_RDI + 0x878))();
      if ((cVar4 != '\0') && (cVar4 = FUN_01e420b0(), cVar4 == '\0')) {
        FUN_01e42250();
      }
      FUN_00d50b00();
      if (*(int *)((longlong)unaff_RDI + 500) == 2) {
        *(undefined1 *)(unaff_RDI + 0x31) = 1;
        *(undefined4 *)(unaff_RDI + 0x29) = 1;
        FUN_01d11e80();
      }
      bVar1 = 0;
      do {
        FUN_01d3abf0();
        uVar7 = FUN_01e466c0();
        uVar8 = FUN_01e3f820();
        cVar4 = FUN_00d05410(uVar7,uVar8,param_2);
        bVar6 = true;
        if (cVar4 == '\0') {
          bVar6 = *(int *)((longlong)unaff_RDI + 500) == 2;
        }
        *(bool *)(unaff_RDI + 0x31) = bVar6;
        param_2 = uVar8;
        if ((bool)(bVar1 & 1) != bVar6) {
          if (*(char *)((longlong)unaff_RDI + 0x16b) != '\0') {
            *(uint *)(unaff_RDI + 0x29) = (uint)((int)unaff_RDI[0x29] < 1);
          }
          (**(code **)(*unaff_RDI + 0x620))();
          bVar1 = *(byte *)(unaff_RDI + 0x31);
          param_2 = uVar8;
        }
        (**(code **)(*unaff_RDI + 0x658))();
        lVar2 = *unaff_RSI;
        if (lVar2 == local_48) {
          if (((char)unaff_RSI[1] != '\0') || (local_48 == 0)) goto LAB_01cf09f1;
          if (local_40 == '\0') {
            FUN_00d50b00();
            goto LAB_01cf09ec;
          }
LAB_01cf09b2:
          *(undefined1 *)(unaff_RSI + 1) = 1;
        }
        else {
          lVar3 = unaff_RSI[1];
          if (local_40 != '\0') {
            *unaff_RSI = local_48;
            if (((char)lVar3 != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01cf09b2;
          }
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *unaff_RSI = local_48;
          if (((char)lVar3 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
LAB_01cf09ec:
          *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_01cf09f1:
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      } while ((*unaff_RSI != 0) && (iVar5 = FUN_01d3a5a0(), iVar5 != 6));
      if ((char)unaff_RDI[0x31] != '\0') {
        if (*(int *)((longlong)unaff_RDI + 500) == 2) {
          *(undefined4 *)(unaff_RDI + 0x29) = 0;
        }
        FUN_01d11e80();
      }
      *(undefined1 *)(unaff_RDI + 0x31) = 0;
      (**(code **)(*unaff_RDI + 0x620))();
      FUN_00d50b20();
    }
  }
  else {
    iVar5 = FUN_01d3a5a0();
    if ((iVar5 == 2) && (cVar4 = (**(code **)(*unaff_RDI + 0xa98))(), cVar4 != '\0')) {
      cVar4 = (**(code **)(*unaff_RDI + 0x9a0))();
      if (cVar4 == '\0') {
        return;
      }
      (**(code **)(*unaff_RDI + 0xa58))();
      if (*(char *)((longlong)unaff_RDI + 0x16b) != '\0') {
        (**(code **)(*unaff_RDI + 0x918))();
      }
    }
    else {
      iVar5 = FUN_01d3a5a0();
      if ((iVar5 == 9) && (cVar4 = (**(code **)(*unaff_RDI + 0xa98))(), cVar4 != '\0')) {
        cVar4 = (**(code **)(*unaff_RDI + 0x9a0))();
        if (cVar4 == '\0') {
          return;
        }
        cVar4 = (**(code **)(*unaff_RDI + 0xa78))();
        if (cVar4 == '\0') {
          return;
        }
        (**(code **)(*unaff_RDI + 0xa58))();
        FUN_01d11e80();
        return;
      }
    }
    FUN_01d122b0();
  }
  return;
}


