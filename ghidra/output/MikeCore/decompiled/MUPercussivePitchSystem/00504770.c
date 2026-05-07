// Function: FUN_00504770
// Address: 00504770
// Size: 580 bytes
// Class: MUPercussivePitchSystem


/* WARNING: Removing unreachable block (ram,0x00504988) */
/* WARNING: Removing unreachable block (ram,0x00504991) */

void FUN_00504770(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong **pplVar5;
  longlong **pplVar6;
  int unaff_ESI;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  *(int *)(unaff_RDI + 0x220) = unaff_ESI;
  pplVar6 = &local_48;
  FUN_01d98320();
  plVar1 = local_48;
  FUN_00275460();
  if (plVar1 == (longlong *)0x0) {
LAB_005047c9:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_005047c9;
  }
  plVar1 = *pplVar6;
  local_38[0] = *(char *)(pplVar6 + 1);
  pplVar5 = (longlong **)local_38;
  if (local_38[0] != '\0') {
    pplVar5 = pplVar6 + 1;
  }
  *(undefined1 *)pplVar5 = 0;
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  iVar3 = FUN_01b18580();
  if ((iVar3 == 0) || (-1 < unaff_ESI)) {
    if (unaff_ESI == 0) {
      FUN_01d9aea0();
      plVar1 = local_48;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_01d9aea0();
        plVar1 = local_48;
        if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d9ade0();
        FUN_00d50130();
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      goto LAB_005048ee;
    }
  }
  else {
    FUN_00502230(extraout_XMM0_Da,0);
  }
  FUN_01d9aea0();
  plVar1 = local_48;
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_0006daf0();
    *puVar4 = &DAT_024dc470;
    puVar4[2] = &DAT_024dcdc0;
    puVar4[0x27] = 0;
    puVar4[0x28] = 0;
    puVar4[0x29] = 0;
    puVar4[0x2a] = 0;
    (*DAT_024dc488)();
    FUN_01d9ade0();
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01d9aea0();
  FUN_002ba3c0();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_005048ee:
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  return;
}


