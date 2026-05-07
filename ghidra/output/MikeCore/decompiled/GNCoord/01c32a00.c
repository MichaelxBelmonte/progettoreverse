// Function: FUN_01c32a00
// Address: 01c32a00
// Size: 645 bytes
// Class: GNCoord


/* WARNING: Removing unreachable block (ram,0x01c32c74) */
/* WARNING: Removing unreachable block (ram,0x01c32c7d) */

void FUN_01c32a00(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong local_40;
  char local_38;
  
  cVar2 = (**(code **)(*unaff_RDI + 0xb40))();
  if (((cVar2 != '\0') && (iVar5 = FUN_01d3a5a0(), iVar5 == 1)) &&
     (iVar5 = FUN_01d3b630(), iVar5 == 1)) {
    FUN_01d3abf0();
    uVar7 = FUN_01e466c0();
    uVar8 = (**(code **)(*unaff_RDI + 0xb58))();
    cVar2 = FUN_00d05410(uVar7,uVar8,param_2);
    if (cVar2 != '\0') {
      *(undefined1 *)(unaff_RDI + 0x3d) = 1;
LAB_01c32a90:
      (**(code **)(*unaff_RDI + 0x620))();
      (**(code **)(*unaff_RDI + 0x658))();
      lVar6 = *unaff_RSI;
      if (lVar6 == local_40) {
        if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01c32b3c;
          }
LAB_01c32af2:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          local_38 = '\0';
        }
        lVar6 = *unaff_RSI;
        uVar7 = uVar8;
      }
      else {
        lVar1 = unaff_RSI[1];
        if (local_38 != '\0') {
          *unaff_RSI = local_40;
          if (((char)lVar1 != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01c32af2;
        }
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *unaff_RSI = local_40;
        if (((char)lVar1 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
LAB_01c32b3c:
        *(undefined1 *)(unaff_RSI + 1) = 1;
        lVar6 = *unaff_RSI;
        uVar7 = uVar8;
      }
      if (lVar6 != 0) {
        iVar5 = FUN_01d3a5a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (iVar5 == 6) goto LAB_01c32bbf;
        FUN_01d3abf0();
        uVar9 = FUN_01e466c0();
        uVar8 = (**(code **)(*unaff_RDI + 0xb58))();
        uVar3 = FUN_00d05410(uVar9,uVar8,uVar7);
        *(undefined1 *)(unaff_RDI + 0x3d) = uVar3;
        goto LAB_01c32a90;
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
LAB_01c32bbf:
      *(undefined1 *)(unaff_RDI + 0x3d) = 0;
      (**(code **)(*unaff_RDI + 0x620))();
      if ((*unaff_RSI != 0) && (iVar5 = FUN_01d3a5a0(), iVar5 == 6)) {
        FUN_01d3abf0();
        uVar8 = FUN_01e466c0();
        uVar9 = (**(code **)(*unaff_RDI + 0xb58))();
        cVar2 = FUN_00d05410(uVar8,uVar9,uVar7);
        if (cVar2 != '\0') {
          cVar2 = (**(code **)(*unaff_RDI + 0xb18))();
          lVar6 = 0x162;
          if (cVar2 == '\0') {
            bVar4 = (**(code **)(*unaff_RDI + 0xaf0))();
            lVar6 = (ulonglong)bVar4 + 0x161;
          }
          (**(code **)(*unaff_RDI + lVar6 * 8))();
        }
      }
    }
  }
  FUN_01d122b0();
  return;
}


