// Function: FUN_00d6c3d0
// Address: 00d6c3d0
// Size: 796 bytes
// Class: GNObject


/* WARNING: Removing unreachable block (ram,0x00d6c5d7) */
/* WARNING: Removing unreachable block (ram,0x00d6c5e0) */

void FUN_00d6c3d0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  short sVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_50;
  char local_48;
  
  plVar7 = (longlong *)FUN_00be9900();
  (**(code **)(*plVar7 + 0x18))();
  lVar1 = *unaff_RSI;
  lVar2 = plVar7[3];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    plVar7[3] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  plVar7[4] = *(longlong *)(*param_2 + 0x38);
  if (*unaff_RSI != 0) {
    FUN_00d8c7a0();
    sVar6 = FUN_00d8cbc0();
    if ((sVar6 == 0x2f) || ((*unaff_RSI != 0 && (sVar6 = FUN_00d8cbc0(), sVar6 == 0x3f)))) {
      plVar7[5] = *(longlong *)(*param_2 + 0x38);
      *unaff_RDI = plVar7;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return;
    }
  }
  bVar4 = true;
  do {
    FUN_00d6b9a0();
    if (local_88 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      break;
    }
    sVar6 = FUN_00d8cbc0();
    if (sVar6 == 0x2f) {
      FUN_00d6be80();
      FUN_00d6be80();
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      cVar5 = (**(code **)(*local_50 + 0x50))();
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') goto LAB_00d6c6b0;
      plVar7[5] = *(longlong *)(*param_2 + 0x30);
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (!bVar4) {
        FUN_00d50b00();
      }
      *unaff_RDI = plVar7;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      bVar4 = false;
      bVar3 = false;
    }
    else {
      FUN_00d6c3d0();
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_00d6c5bc;
        }
      }
      else if (local_50 != (longlong *)0x0) {
LAB_00d6c5bc:
        local_48 = '\0';
        FUN_00d21140();
        bVar3 = true;
        FUN_00d50b20();
        goto joined_r0x00d6c6c2;
      }
LAB_00d6c6b0:
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      bVar3 = false;
    }
joined_r0x00d6c6c2:
    if (local_80 != '\0') {
      FUN_00d50b20();
    }
  } while (bVar3);
  if ((bVar4) && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


