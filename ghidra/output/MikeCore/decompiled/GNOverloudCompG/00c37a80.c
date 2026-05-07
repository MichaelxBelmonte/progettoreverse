// Function: FUN_00c37a80
// Address: 00c37a80
// Size: 2153 bytes
// Class: GNOverloudCompG
// String references:
//   "GNOverloudCompG"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00c37a80(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *unaff_RDI;
  longlong **pplVar8;
  longlong local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  longlong *local_40;
  char local_38;
  
  plVar7 = (longlong *)*param_1;
  if ((DAT_0276efc0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_0276ef10 = FUN_00b10020();
    _DAT_0276eef8 = "GNOverloudCompG";
    _DAT_0276ef00 = 0xe8;
    _DAT_0276ef08 = FUN_00c42f00;
    _DAT_0276ef18 = 0;
    uRam000000000276ef20 = 0;
    _DAT_0276ef28 = 0;
    uRam000000000276ef30 = 0;
    _DAT_0276ef38 = 0;
    uRam000000000276ef40 = 0;
    _DAT_0276ef48 = 0;
    uRam000000000276ef50 = 0;
    _DAT_0276ef58 = 0;
    uRam000000000276ef60 = 0;
    _DAT_0276ef68 = 0;
    uRam000000000276ef70 = 0;
    _DAT_0276ef78 = 0;
    uRam000000000276ef80 = 0;
    _DAT_0276ef88 = 0;
    uRam000000000276ef90 = 0;
    _DAT_0276ef98 = 0;
    uRam000000000276efa0 = 0;
    _DAT_0276efa8 = 0;
    uRam000000000276efb0 = 0;
    _DAT_0276efb8 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (longlong *)0x0) {
LAB_00c37ad9:
    plVar7 = (longlong *)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar5 = FUN_00e85ea0();
    plVar7 = param_1;
    if (cVar5 == '\0') goto LAB_00c37ad9;
  }
  lVar1 = *plVar7;
  lVar3 = plVar7[1];
  if (((char)lVar3 != '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
  }
  pplVar8 = &local_40;
  FUN_00c16ff0();
  plVar7 = local_40;
  if ((DAT_0276efc0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_0276ef10 = FUN_00b10020();
    _DAT_0276eef8 = "GNOverloudCompG";
    _DAT_0276ef00 = 0xe8;
    _DAT_0276ef08 = FUN_00c42f00;
    _DAT_0276ef18 = 0;
    uRam000000000276ef20 = 0;
    _DAT_0276ef28 = 0;
    uRam000000000276ef30 = 0;
    _DAT_0276ef38 = 0;
    uRam000000000276ef40 = 0;
    _DAT_0276ef48 = 0;
    uRam000000000276ef50 = 0;
    _DAT_0276ef58 = 0;
    uRam000000000276ef60 = 0;
    _DAT_0276ef68 = 0;
    uRam000000000276ef70 = 0;
    _DAT_0276ef78 = 0;
    uRam000000000276ef80 = 0;
    _DAT_0276ef88 = 0;
    uRam000000000276ef90 = 0;
    _DAT_0276ef98 = 0;
    uRam000000000276efa0 = 0;
    _DAT_0276efa8 = 0;
    uRam000000000276efb0 = 0;
    _DAT_0276efb8 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (longlong *)0x0) {
    pplVar8 = &DAT_02802688;
    plVar7 = DAT_02802688;
    if (DAT_02802690 == '\0') goto LAB_00c37b7c;
LAB_00c37b60:
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') {
      pplVar8 = &DAT_02802688;
    }
    plVar7 = *pplVar8;
    if (*(char *)(pplVar8 + 1) != '\0') goto LAB_00c37b60;
LAB_00c37b7c:
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar4 = DAT_0276c408;
  plVar2 = (longlong *)*param_3;
  if (DAT_0276c408 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  lVar4 = DAT_0276cda8;
  if (cVar5 == '\0') {
    plVar2 = (longlong *)*param_3;
    if (DAT_0276cda8 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*plVar2 + 0x50))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_0276c410;
    if (cVar5 != '\0') {
      FUN_00d46530();
      plVar2 = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) goto LAB_00c37de9;
        FUN_00d50b00();
        *unaff_RDI = plVar2;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00c37df7;
      }
      goto LAB_00c37deb;
    }
    if (plVar7 == (longlong *)0x0) {
LAB_00c37f04:
      local_c8 = *param_1;
      local_c0 = 0;
      local_b8 = *param_3;
      local_b0 = 0;
      FUN_00c17210(&local_c8,param_2,&local_b8);
      goto LAB_00c37df7;
    }
    plVar2 = (longlong *)*param_3;
    if (DAT_0276c410 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*plVar2 + 0x50))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_0276cdb0;
    if (cVar5 != '\0') {
      iVar6 = *(int *)(lVar1 + 0xe0);
      if (iVar6 == 0) {
        FUN_00aea610((int)plVar7[0x19]);
        FUN_00d46dc0();
        plVar7 = local_40;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) goto LAB_00c38182;
          FUN_00d50b00();
          *unaff_RDI = plVar7;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00c37dfc;
        }
      }
      else if (iVar6 == 2) {
        FUN_00aea610((int)plVar7[0x1a]);
        FUN_00d46dc0();
        plVar7 = local_40;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) goto LAB_00c38182;
          FUN_00d50b00();
          *unaff_RDI = plVar7;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00c37dfc;
        }
      }
      else if (iVar6 == 4) {
        FUN_00aea610((int)plVar7[0x1b]);
        FUN_00d46dc0();
        plVar7 = local_40;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
            *unaff_RDI = plVar7;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00c37dfc;
          }
LAB_00c38182:
          local_40 = (longlong *)0x0;
        }
      }
      else {
        FUN_00d46dc0(DAT_023b36a8);
        plVar7 = local_40;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) goto LAB_00c38182;
          FUN_00d50b00();
          *unaff_RDI = plVar7;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00c37dfc;
        }
      }
      goto LAB_00c38184;
    }
    plVar2 = (longlong *)*param_3;
    if (DAT_0276cdb0 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*plVar2 + 0x50))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') goto LAB_00c37f04;
    iVar6 = *(int *)(lVar1 + 0xe4);
    if (iVar6 == 1) {
      FUN_00aea610(*(undefined4 *)((longlong)plVar7 + 0xcc));
      FUN_00d46dc0();
      plVar7 = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_38 != '\0') goto LAB_00c38184;
      if (local_40 == (longlong *)0x0) goto LAB_00c38182;
      FUN_00d50b00();
      *unaff_RDI = plVar7;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (iVar6 == 3) {
      FUN_00aea610(*(undefined4 *)((longlong)plVar7 + 0xd4));
      FUN_00d46dc0();
      plVar7 = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_38 != '\0') goto LAB_00c38184;
      if (local_40 == (longlong *)0x0) goto LAB_00c38182;
      FUN_00d50b00();
      *unaff_RDI = plVar7;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (iVar6 == 5) {
      FUN_00aea610(*(undefined4 *)((longlong)plVar7 + 0xdc));
      FUN_00d46dc0();
      plVar7 = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) goto LAB_00c38182;
        FUN_00d50b00();
        *unaff_RDI = plVar7;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
LAB_00c38184:
        *unaff_RDI = local_40;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
    }
    else {
      FUN_00d46dc0(DAT_023b36a8);
      plVar7 = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_38 != '\0') goto LAB_00c38184;
      if (local_40 == (longlong *)0x0) goto LAB_00c38182;
      FUN_00d50b00();
      *unaff_RDI = plVar7;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d46530();
    plVar2 = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
LAB_00c37de9:
        local_40 = (longlong *)0x0;
        goto LAB_00c37deb;
      }
      FUN_00d50b00();
      *unaff_RDI = plVar2;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
LAB_00c37deb:
      *unaff_RDI = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
LAB_00c37df7:
    if (plVar7 == (longlong *)0x0) goto LAB_00c37e04;
  }
LAB_00c37dfc:
  FUN_00d50b20();
LAB_00c37e04:
  if (((char)lVar3 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


