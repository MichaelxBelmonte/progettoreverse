// Function: FUN_01cb9170
// Address: 01cb9170
// Size: 602 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01cb933f) */
/* WARNING: Removing unreachable block (ram,0x01cb9348) */
/* WARNING: Removing unreachable block (ram,0x01cb9215) */
/* WARNING: Removing unreachable block (ram,0x01cb9222) */
/* WARNING: Removing unreachable block (ram,0x01cb92b0) */
/* WARNING: Removing unreachable block (ram,0x01cb92bd) */
/* WARNING: Removing unreachable block (ram,0x01cb9387) */
/* WARNING: Removing unreachable block (ram,0x01cb9390) */

void FUN_01cb9170(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_40;
  char local_38;
  
  lVar3 = DAT_027fecc0;
  plVar1 = (longlong *)*param_2;
  lVar5 = local_40;
  if (plVar1 == (longlong *)0x0) {
LAB_01cb934f:
    bVar2 = false;
  }
  else {
    if (DAT_027fecc0 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027fecd0;
    if (cVar4 == '\0') {
      plVar1 = (longlong *)*param_2;
      if (DAT_027fecd0 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*plVar1 + 0x50))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ede68;
      if (cVar4 == '\0') {
        param_2 = (longlong *)*param_2;
        if (DAT_027ede68 != 0) {
          FUN_00d50b00();
        }
        cVar4 = (**(code **)(*param_2 + 0x50))();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') goto LAB_01cb934f;
        (**(code **)(*unaff_RSI + 0x380))();
        if (local_40 == 0) goto LAB_01cb9354;
        bVar2 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      else {
        (**(code **)(*unaff_RSI + 0x378))();
        if (local_40 == 0) goto LAB_01cb9354;
        bVar2 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
    }
    else {
      (**(code **)(*unaff_RSI + 0x370))();
      if (local_40 == 0) {
LAB_01cb9354:
        bVar2 = false;
        lVar5 = 0;
      }
      else {
        bVar2 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
    }
    if (lVar5 != 0) goto LAB_01cb9399;
  }
  FUN_01d46330();
  if (local_40 == 0) {
    lVar5 = 0;
  }
  else {
    bVar2 = true;
    lVar5 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
  }
LAB_01cb9399:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar2) && (lVar5 != 0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


