// Function: FUN_00c81410
// Address: 00c81410
// Size: 603 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00c8162b) */
/* WARNING: Removing unreachable block (ram,0x00c81634) */

void FUN_00c81410(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_0002f270();
  (**(code **)(*plVar2 + 0x18))();
  lVar3 = *unaff_RSI;
  lVar1 = plVar2[2];
  if (lVar1 != lVar3) {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    plVar2[2] = lVar3;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = *param_2;
  lVar1 = plVar2[3];
  if (lVar1 != lVar3) {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    plVar2[3] = lVar3;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  plVar2[0x1b] = param_1;
  *(undefined4 *)((longlong)plVar2 + 0x24) = param_3;
  *(undefined1 *)((longlong)plVar2 + 0x49) = 1;
  if (*param_2 == 0) goto LAB_00c81552;
  FUN_00d8b910();
  lVar3 = FUN_00e87730();
  if (lVar3 == 0) {
    plVar2[0x13] = 0;
    lVar3 = 0;
LAB_00c81533:
    FUN_00d50b20();
  }
  else {
    lVar3 = FUN_00e86210();
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    lVar1 = plVar2[0x13];
    if (lVar1 != lVar3) {
      if (lVar3 == 0) {
        lVar3 = 0;
        plVar2[0x13] = 0;
      }
      else {
        FUN_00d50b00();
        plVar2[0x13] = lVar3;
      }
      if (lVar1 != 0) goto LAB_00c81533;
    }
  }
  if (*(longlong *)(lVar3 + 0x50) != 0) {
    FUN_00c81710();
  }
  FUN_00d50b20();
LAB_00c81552:
  if ((DAT_028a71f0 == (undefined8 *)0x0) || (DAT_028a71f9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a71f0 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      bVar5 = DAT_028a71f0 == (undefined8 *)0x0;
      DAT_028a71f0 = puVar4;
      if (((bVar5) || (FUN_00d50b20(), DAT_028a71f0 != (undefined8 *)0x0)) && (DAT_028a71f8 == '\0')
         ) {
        DAT_028a71f8 = '\x01';
        FUN_00e8cb90();
      }
      FUN_00d22760();
      DAT_028a71f9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a71f9 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00d21140();
  *unaff_RDI = plVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


