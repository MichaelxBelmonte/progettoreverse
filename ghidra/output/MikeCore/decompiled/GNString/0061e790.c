// Function: FUN_0061e790
// Address: 0061e790
// Size: 684 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x0061e8cf) */
/* WARNING: Removing unreachable block (ram,0x0061e8d8) */
/* WARNING: Removing unreachable block (ram,0x0061e83a) */
/* WARNING: Removing unreachable block (ram,0x0061e843) */
/* WARNING: Removing unreachable block (ram,0x0061e87f) */
/* WARNING: Removing unreachable block (ram,0x0061e888) */
/* WARNING: Removing unreachable block (ram,0x0061e9ad) */
/* WARNING: Removing unreachable block (ram,0x0061e9b6) */

ulonglong FUN_0061e790(undefined8 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *unaff_RDI;
  longlong *plVar8;
  int iVar9;
  longlong *local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = local_40;
  if (cVar4 == '\0') {
    FUN_0063f230();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_0061e8a0;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_0061e8a0:
      FUN_0021c9b0();
      if (local_40 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
        bVar3 = false;
      }
      else {
        bVar3 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      FUN_00d50b20();
      goto LAB_0061e903;
    }
  }
  else {
    (**(code **)(*unaff_RDI + 0x5e0))();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_0061e848;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_0061e848:
      FUN_00752180();
      if (local_40 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
        bVar3 = false;
      }
      else {
        bVar3 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      FUN_00d50b20();
LAB_0061e903:
      if (plVar8 != (longlong *)0x0) {
        iVar6 = FUN_01caea40();
        iVar2 = iVar6 >> 0x1f;
        iVar1 = iVar6 / 3 + iVar2;
        iVar9 = iVar6 + (iVar1 - iVar2) * -3;
        if (iVar9 == 0) {
          iVar6 = iVar1 - iVar2;
        }
        if (param_2 != '\0') {
          if (iVar6 == -2) {
            FUN_0010a0e0();
          }
          else {
            uVar5 = FUN_001080a0();
            FUN_0010a8e0(iVar9 == 0,uVar5);
          }
        }
        FUN_01caeae0();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_0061e9bb;
          }
        }
        else if (local_40 != (longlong *)0x0) {
LAB_0061e9bb:
          if (iVar6 == -2) {
            FUN_00108e10();
            FUN_01d66ab0();
          }
          else {
            cVar4 = FUN_001080b0();
            if (((iVar9 == 0) == (bool)cVar4) && (cVar4 = FUN_00108e10(), cVar4 != '\0')) {
              FUN_00108090();
            }
            FUN_01d66ab0();
          }
          FUN_00d50b20();
        }
        uVar7 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
        if (bVar3) {
          FUN_00d50b20();
        }
        goto LAB_0061ea2b;
      }
    }
  }
  uVar7 = 0;
LAB_0061ea2b:
  return uVar7 & 0xffffffff;
}


