// Function: FUN_00c16780
// Address: 00c16780
// Size: 1440 bytes
// Class: GNOverloudCompressor
// String references:
//   "GNOverloudCompressor1176"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00c16780(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *unaff_RDI;
  longlong **pplVar7;
  longlong local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  longlong *local_48;
  char local_40;
  char local_31;
  
  plVar6 = (longlong *)*param_1;
  if ((DAT_0276dde0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_0276dd30 = FUN_00b10020();
    _DAT_0276dd18 = "GNOverloudCompressor1176";
    _DAT_0276dd20 = 0xd8;
    _DAT_0276dd28 = FUN_00c40ea0;
    _DAT_0276dd38 = 0;
    uRam000000000276dd40 = 0;
    _DAT_0276dd48 = 0;
    uRam000000000276dd50 = 0;
    _DAT_0276dd58 = 0;
    uRam000000000276dd60 = 0;
    _DAT_0276dd68 = 0;
    uRam000000000276dd70 = 0;
    _DAT_0276dd78 = 0;
    uRam000000000276dd80 = 0;
    _DAT_0276dd88 = 0;
    uRam000000000276dd90 = 0;
    _DAT_0276dd98 = 0;
    uRam000000000276dda0 = 0;
    _DAT_0276dda8 = 0;
    uRam000000000276ddb0 = 0;
    _DAT_0276ddb8 = 0;
    uRam000000000276ddc0 = 0;
    _DAT_0276ddc8 = 0;
    uRam000000000276ddd0 = 0;
    _DAT_0276ddd8 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_00c167d6:
    plVar6 = (longlong *)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = param_1;
    if (cVar4 == '\0') goto LAB_00c167d6;
  }
  lVar1 = *plVar6;
  local_31 = (char)plVar6[1];
  if ((local_31 != '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
  }
  pplVar7 = &local_48;
  FUN_00c16ff0();
  plVar6 = local_48;
  if ((DAT_0276dde0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_0276dd30 = FUN_00b10020();
    _DAT_0276dd18 = "GNOverloudCompressor1176";
    _DAT_0276dd20 = 0xd8;
    _DAT_0276dd28 = FUN_00c40ea0;
    _DAT_0276dd38 = 0;
    uRam000000000276dd40 = 0;
    _DAT_0276dd48 = 0;
    uRam000000000276dd50 = 0;
    _DAT_0276dd58 = 0;
    uRam000000000276dd60 = 0;
    _DAT_0276dd68 = 0;
    uRam000000000276dd70 = 0;
    _DAT_0276dd78 = 0;
    uRam000000000276dd80 = 0;
    _DAT_0276dd88 = 0;
    uRam000000000276dd90 = 0;
    _DAT_0276dd98 = 0;
    uRam000000000276dda0 = 0;
    _DAT_0276dda8 = 0;
    uRam000000000276ddb0 = 0;
    _DAT_0276ddb8 = 0;
    uRam000000000276ddc0 = 0;
    _DAT_0276ddc8 = 0;
    uRam000000000276ddd0 = 0;
    _DAT_0276ddd8 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
    pplVar7 = &DAT_02802688;
    plVar6 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_00c1685a;
LAB_00c16876:
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') {
      pplVar7 = &DAT_02802688;
    }
    plVar6 = *pplVar7;
    if (*(char *)(pplVar7 + 1) == '\0') goto LAB_00c16876;
LAB_00c1685a:
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_0276c408;
  plVar2 = (longlong *)*param_3;
  if (DAT_0276c408 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar2 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_0276c410;
  if (cVar4 == '\0') {
    if (plVar6 == (longlong *)0x0) {
LAB_00c16a07:
      local_a8 = *param_1;
      local_a0 = 0;
      local_98 = *param_3;
      local_90 = 0;
      FUN_00c17210(&local_a8,param_2,&local_98);
      goto joined_r0x00c16918;
    }
    plVar2 = (longlong *)*param_3;
    if (DAT_0276c410 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar2 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') goto LAB_00c16a07;
    iVar5 = *(int *)(lVar1 + 0xd4);
    if (iVar5 == 0) {
      FUN_00aea610((int)plVar6[0x19]);
      FUN_00d46dc0();
      plVar6 = local_48;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_40 != '\0') goto LAB_00c16bbb;
      if (local_48 == (longlong *)0x0) goto LAB_00c16bb9;
      FUN_00d50b00();
      *unaff_RDI = plVar6;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (iVar5 == 1) {
        FUN_00aea610(*(undefined4 *)((longlong)plVar6 + 0xcc));
        FUN_00d46dc0();
        plVar6 = local_48;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_40 == '\0') {
          if (local_48 == (longlong *)0x0) goto LAB_00c16bb9;
          FUN_00d50b00();
          *unaff_RDI = plVar6;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00c16a4d;
        }
      }
      else if (iVar5 == 2) {
        FUN_00aea610((int)plVar6[0x1a]);
        FUN_00d46dc0();
        plVar6 = local_48;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
            *unaff_RDI = plVar6;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00c16a4d;
          }
LAB_00c16bb9:
          local_48 = (longlong *)0x0;
        }
      }
      else {
        FUN_00d46dc0(0);
        plVar6 = local_48;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_40 == '\0') {
          if (local_48 == (longlong *)0x0) goto LAB_00c16bb9;
          FUN_00d50b00();
          *unaff_RDI = plVar6;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00c16a4d;
        }
      }
LAB_00c16bbb:
      *unaff_RDI = local_48;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
  }
  else {
    FUN_00d46530();
    plVar2 = local_48;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_40 == '\0') {
      if (local_48 == (longlong *)0x0) {
        local_48 = (longlong *)0x0;
        goto LAB_00c16909;
      }
      FUN_00d50b00();
      *unaff_RDI = plVar2;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
LAB_00c16909:
      *unaff_RDI = local_48;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
joined_r0x00c16918:
    if (plVar6 == (longlong *)0x0) goto LAB_00c16a55;
  }
LAB_00c16a4d:
  FUN_00d50b20();
LAB_00c16a55:
  if ((local_31 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


