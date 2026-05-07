// Function: FUN_01d70620
// Address: 01d70620
// Size: 1027 bytes
// Class: GNMenuItem


void FUN_01d70620(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar7;
  longlong *plVar8;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  int local_64;
  longlong *local_58;
  char local_50;
  
  if (*(longlong *)(unaff_RSI + 0x220) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    bVar1 = false;
    plVar8 = (longlong *)0x0;
    bVar3 = false;
    plVar6 = (longlong *)0x0;
    for (local_64 = 0; iVar5 = FUN_01d5b230(), local_64 < iVar5; local_64 = local_64 + 1) {
      FUN_01d5b240();
      if (local_58 == plVar6) {
        plVar7 = plVar6;
        bVar2 = bVar1;
        if ((!bVar1) && (local_58 != (longlong *)0x0)) {
          bVar2 = true;
          if (local_50 != '\0') goto LAB_01d70764;
          FUN_00d50b00();
          bVar2 = true;
        }
LAB_01d70750:
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar7 = local_58;
        if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar2 = true;
          if ((bVar1) && (plVar6 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01d70750;
        }
        bVar2 = true;
        if ((bVar1) && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_01d70764:
      FUN_01d64cb0();
      if (local_58 == plVar8) {
        plVar6 = plVar8;
        bVar1 = bVar3;
        if ((bVar3) || (local_58 == (longlong *)0x0)) goto LAB_01d707ec;
        if (local_50 == '\0') {
          bVar3 = true;
          FUN_00d50b00();
        }
        else {
          bVar3 = true;
        }
      }
      else if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar1 = true;
        plVar6 = local_58;
        if ((bVar3) && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01d707ec:
        plVar8 = plVar6;
        bVar3 = bVar1;
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((bVar3) && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar8 = local_58;
        bVar3 = true;
      }
      plVar6 = plVar7;
      bVar1 = bVar2;
      if (plVar8 == (longlong *)0x0) {
        FUN_01d65230();
        local_80 = *param_2;
        local_78 = '\0';
        cVar4 = (**(code **)(*local_58 + 0x50))();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (bVar2) {
            *unaff_RDI = plVar7;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            return;
          }
          if (plVar7 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          *unaff_RDI = plVar7;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        plVar8 = (longlong *)0x0;
      }
      else {
        local_90 = *param_2;
        local_88 = '\0';
        FUN_01d5dfa0(param_1,&local_90);
        if (local_58 == plVar7) {
          if ((!bVar2) && (local_58 != (longlong *)0x0)) {
            if (local_50 != '\0') goto LAB_01d708f4;
            FUN_00d50b00();
            bVar1 = true;
          }
LAB_01d7095f:
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar6 = local_58;
          if (local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar1 = true;
            if ((bVar2) && (plVar7 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01d7095f;
          }
          if ((bVar2) && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01d708f4:
          local_50 = '\0';
          bVar1 = true;
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if (plVar6 != (longlong *)0x0) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (!bVar1) {
            FUN_00d50b00();
          }
          *unaff_RDI = plVar6;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          bVar1 = false;
          if (!bVar3) goto LAB_01d709fd;
          goto LAB_01d709f0;
        }
        plVar6 = (longlong *)0x0;
      }
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    if (bVar3) {
LAB_01d709f0:
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
LAB_01d709fd:
    if ((bVar1) && (plVar6 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}


