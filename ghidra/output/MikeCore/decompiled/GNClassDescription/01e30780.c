// Function: FUN_01e30780
// Address: 01e30780
// Size: 1196 bytes
// Class: GNClassDescription


longlong * FUN_01e30780(void)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong *plVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar10;
  longlong lVar11;
  int iVar12;
  undefined7 uVar14;
  ulonglong uVar13;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48 [8];
  ulonglong local_40;
  char local_38 [8];
  
  if (*unaff_RSI == 0) {
LAB_01e308b8:
    local_40 = 0;
  }
  else {
    FUN_00d4efa0();
    lVar11 = DAT_027fecb0;
    if (DAT_027fecb0 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    plVar9 = local_50;
    pcVar8 = local_38;
    if (local_48[0] != '\0') {
      pcVar8 = local_48;
    }
    local_38[0] = local_48[0];
    *pcVar8 = '\0';
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (longlong *)0x0) goto LAB_01e308b8;
    pplVar10 = &local_50;
    (**(code **)(*(longlong *)*unaff_RSI + 0x210))();
    plVar9 = local_50;
    uVar7 = FUN_0020e360();
    if (plVar9 == (longlong *)0x0) {
LAB_01e3088d:
      pplVar10 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      uVar7 = FUN_00e85ea0();
      if ((char)uVar7 == '\0') goto LAB_01e3088d;
    }
    plVar9 = *pplVar10;
    if (plVar9 == (longlong *)0x0) {
      bVar4 = true;
      local_40 = 0;
      plVar9 = (longlong *)0x0;
    }
    else {
      if (*(char *)(pplVar10 + 1) == '\0') {
        uVar7 = FUN_00d50b00();
      }
      else {
        *(undefined1 *)(pplVar10 + 1) = 0;
      }
      local_40 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      bVar4 = false;
    }
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (plVar9 != (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (bVar4) {
        FUN_00d50b00();
      }
      *unaff_RDI = (longlong)plVar9;
      goto LAB_01e30c1e;
    }
  }
  iVar12 = 0;
  lVar11 = 0;
  local_58 = (longlong *)0x0;
  while( true ) {
    FUN_00ca1380();
    plVar9 = local_50;
    local_68 = (longlong *)CONCAT71(local_68._1_7_,local_48[0]);
    pplVar10 = (longlong **)local_48;
    if (local_48[0] == '\0') {
      pplVar10 = &local_68;
    }
    *(char *)pplVar10 = '\0';
    if ((local_48[0] != '\0') && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    iVar1 = *(int *)((longlong)plVar9 + 0xc);
    if ((char)local_68 != '\0') {
      FUN_00d50b20();
    }
    lVar5 = DAT_027f3850;
    if (iVar1 <= lVar11) break;
    FUN_00ca1380();
    plVar9 = local_50;
    local_38[0] = local_48[0];
    pcVar8 = local_48;
    if (local_48[0] == '\0') {
      pcVar8 = local_38;
    }
    *pcVar8 = '\0';
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar2 = *(longlong **)(plVar9[2] + lVar11 * 8);
    local_60 = '\0';
    local_68 = plVar2;
    FUN_0020e360();
    pplVar10 = (longlong **)&DAT_02802688;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pplVar10 = &local_68;
      if (cVar6 == '\0') {
        pplVar10 = (longlong **)&DAT_02802688;
      }
    }
    plVar3 = *pplVar10;
    if (*(char *)(pplVar10 + 1) == '\0') {
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar10 + 1) = 0;
      if ((local_60 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      uVar14 = (undefined7)((ulonglong)plVar9 >> 8);
      if (plVar3 == local_58) {
        if ((char)local_40 == '\0') {
          uVar13 = CONCAT71(uVar14,1);
          FUN_00d50b00();
          plVar3 = local_58;
        }
        else {
          uVar13 = local_40 & 0xffffffff;
          plVar3 = local_58;
        }
      }
      else {
        FUN_00d50b00();
        uVar13 = CONCAT71(uVar14,1);
        if (((char)local_40 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_58 = plVar3;
      FUN_00d50b20();
      iVar12 = iVar12 + 1;
      local_40 = uVar13 & 0xffffffff;
    }
    lVar11 = lVar11 + 1;
  }
  if (iVar12 < 2) {
    cVar6 = (char)local_40;
    plVar9 = local_58;
  }
  else {
    if (DAT_027f3850 != 0) {
      FUN_00d50b00();
    }
    plVar2 = local_58;
    FUN_000175c0();
    plVar9 = local_50;
    if (local_50 == plVar2) {
      plVar9 = plVar2;
      cVar6 = (char)local_40;
      if (((char)local_40 == '\0') && (local_50 != (longlong *)0x0)) {
        if (local_48[0] != '\0') goto LAB_01e30b25;
        FUN_00d50b00();
        cVar6 = '\x01';
      }
LAB_01e30bd3:
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_48[0] == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        cVar6 = '\x01';
        if (((char)local_40 != '\0') && (plVar2 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01e30bd3;
      }
      if (((char)local_40 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01e30b25:
      local_48[0] = '\0';
      cVar6 = '\x01';
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (cVar6 == '\0') {
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  *unaff_RDI = (longlong)plVar9;
LAB_01e30c1e:
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


