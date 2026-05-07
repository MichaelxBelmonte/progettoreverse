// Function: FUN_00c60a70
// Address: 00c60a70
// Size: 584 bytes
// Class: GNPopUpButton


/* WARNING: Removing unreachable block (ram,0x00c60b14) */
/* WARNING: Removing unreachable block (ram,0x00c60b1d) */
/* WARNING: Removing unreachable block (ram,0x00c60ac0) */
/* WARNING: Removing unreachable block (ram,0x00c60ac9) */
/* WARNING: Removing unreachable block (ram,0x00c60bf1) */
/* WARNING: Removing unreachable block (ram,0x00c60bfa) */

void FUN_00c60a70(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong **pplVar4;
  undefined8 *unaff_RDI;
  longlong *local_98;
  char local_90;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  plVar1 = DAT_027719e0;
  if (DAT_027719e0 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  FUN_00d50b20();
  plVar1 = DAT_027719e8;
  if (cVar3 != '\0') goto LAB_00c60c9a;
  if (DAT_027719e8 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  FUN_00d50b20();
  if (cVar3 != '\0') goto LAB_00c60c9a;
  pplVar4 = &local_98;
  FUN_00b37610();
  plVar1 = local_98;
  FUN_00aff000();
  if (plVar1 == (longlong *)0x0) {
LAB_00c60b76:
    pplVar4 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00c60b76;
  }
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar2 = DAT_02725a40;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_02725a40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar2 + 0x50))();
    FUN_00d50b20();
    if (cVar3 != '\0') {
      local_50 = *param_3;
      local_48 = '\0';
      (**(code **)(*plVar1 + 0x88))(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
    cVar3 = FUN_00b378e0();
    if (cVar3 != '\0') {
      local_40 = *param_3;
      local_38 = '\0';
      (**(code **)(*plVar1 + 0x88))(param_1,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
    FUN_00d50b20();
  }
LAB_00c60c9a:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}


