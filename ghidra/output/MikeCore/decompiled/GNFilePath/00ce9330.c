// Function: FUN_00ce9330
// Address: 00ce9330
// Size: 1856 bytes
// Class: GNFilePath
// String references:
//   "%@.%@~"
//   "%@.%@~%I"


/* WARNING: Removing unreachable block (ram,0x00ce98b0) */
/* WARNING: Removing unreachable block (ram,0x00ce99e2) */
/* WARNING: Removing unreachable block (ram,0x00ce99f2) */
/* WARNING: Removing unreachable block (ram,0x00ce938b) */
/* WARNING: Removing unreachable block (ram,0x00ce9397) */
/* WARNING: Removing unreachable block (ram,0x00ce98d4) */
/* WARNING: Removing unreachable block (ram,0x00ce98f9) */
/* WARNING: Removing unreachable block (ram,0x00ce9905) */
/* WARNING: Removing unreachable block (ram,0x00ce99fc) */
/* WARNING: Removing unreachable block (ram,0x00ce9a0f) */
/* WARNING: Removing unreachable block (ram,0x00ce9440) */
/* WARNING: Removing unreachable block (ram,0x00ce9956) */
/* WARNING: Removing unreachable block (ram,0x00ce9a46) */
/* WARNING: Removing unreachable block (ram,0x00ce9a4a) */

undefined8 * FUN_00ce9330(char param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 local_c8 [8];
  longlong local_b8;
  char local_b0;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_50;
  char local_48;
  
  (**(code **)(*unaff_RSI + 0x390))();
  if ((local_88 == '\0') && (local_90 != 0)) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RSI + 0x368))();
  FUN_00d8a060();
  FUN_00d8ed10();
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  iVar8 = 0;
  plVar6 = (longlong *)0x0;
  bVar2 = false;
  do {
    plVar7 = plVar6;
    bVar3 = bVar2;
    if (iVar8 == 0) {
      FUN_00083ea0(2,local_c8);
      FUN_00d8cb40();
      if (local_50 == plVar6) {
        if ((!bVar2) && (plVar6 != (longlong *)0x0)) {
          if (local_48 != '\0') goto LAB_00ce9663;
          FUN_00d50b00();
          bVar3 = true;
        }
LAB_00ce9707:
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          plVar7 = local_50;
          if ((bVar2) && (plVar6 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00ce9707;
        }
        plVar7 = local_50;
        if ((bVar2) && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_00ce9663:
        local_48 = '\0';
        bVar3 = true;
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00083ea0(3,local_c8);
      FUN_00d8cb40();
      if (local_50 == plVar6) {
        if ((bVar2) || (local_50 == (longlong *)0x0)) {
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_48 != '\0') goto LAB_00ce95b5;
          FUN_00d50b00();
          bVar3 = true;
        }
      }
      else if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        plVar7 = local_50;
        if ((bVar2) && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar7 = local_50;
        if ((bVar2) && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_00ce95b5:
        local_48 = '\0';
        bVar3 = true;
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    plVar6 = plVar7;
    bVar2 = bVar3;
    if (param_2 != 0) {
      FUN_00d8fd30(param_2,2);
      if (plVar7 == &DAT_024c5048) {
        if (!bVar3) {
          bVar2 = true;
          if (local_88 != '\0') goto LAB_00ce9846;
          FUN_00d50b00();
          bVar2 = true;
        }
      }
      else {
        plVar6 = &DAT_024c5048;
        if (local_88 != '\0') {
          bVar2 = true;
          if ((bVar3) && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar2 = true;
          }
          goto LAB_00ce9846;
        }
        FUN_00d50b00();
        bVar2 = true;
        if ((bVar3) && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (local_88 != '\0') {
        FUN_00d50b20();
      }
    }
LAB_00ce9846:
    (**(code **)(*unaff_RSI + 0x3f0))();
    (**(code **)(*local_50 + 0x400))();
    puVar9 = &DAT_024c5048;
    if (local_88 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_88 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((param_1 == '\0') ||
       ((cVar5 = (**(code **)(DAT_024c5048 + 0x398))(), cVar5 == '\0' &&
        (cVar5 = (**(code **)(DAT_024c5048 + 0x3a0))(), cVar5 == '\0')))) {
      lVar1 = unaff_RSI[7];
      if (lVar1 == 0) {
        if (DAT_024c5080 != 0) {
          DAT_024c5080 = 0;
          goto LAB_00ce9a1e;
        }
      }
      else {
        FUN_00d50b00();
        lVar4 = DAT_024c5080;
        if ((DAT_024c5080 != lVar1) && (FUN_00d50b00(), DAT_024c5080 = lVar1, lVar4 != 0)) {
LAB_00ce9a1e:
          FUN_00d50b20();
          if (lVar1 == 0) goto LAB_00ce9a33;
        }
        FUN_00d50b20();
      }
LAB_00ce9a33:
      *(undefined1 *)(unaff_RDI + 1) = 0;
      goto LAB_00ce9a59;
    }
    FUN_00d50b20();
    iVar8 = iVar8 + 1;
    if (iVar8 == 10000) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar9 = (undefined8 *)0x0;
LAB_00ce9a59:
      *unaff_RDI = puVar9;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (local_90 != 0) {
        FUN_00d50b20();
        FUN_00d50b20();
      }
      if ((bVar2) && (plVar6 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      return unaff_RDI;
    }
  } while( true );
}


