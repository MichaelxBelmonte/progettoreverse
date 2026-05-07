// Function: FUN_0017a670
// Address: 0017a670
// Size: 1611 bytes
// Class: MDTooltipsPrefCtrl


void FUN_0017a670(undefined8 param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  longlong *in_RDX;
  longlong unaff_RDI;
  longlong *plVar11;
  longlong **pplVar12;
  longlong *plVar13;
  bool bVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong local_a0;
  char local_98;
  longlong *local_60;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  if (*in_RDX == 0) {
    return;
  }
  FUN_01e53c20();
  plVar5 = local_48;
  if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  iVar10 = FUN_01d3a5a0();
  if (iVar10 == 1) {
    iVar10 = FUN_01d3b630();
    bVar14 = iVar10 == 1;
  }
  else {
    bVar14 = false;
  }
  iVar10 = FUN_00655800();
  bVar3 = true;
  if (iVar10 == 0) {
    local_60 = *(longlong **)(unaff_RDI + 0x70);
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_0017a751;
    }
  }
  else if (iVar10 == 1) {
    local_60 = *(longlong **)(unaff_RDI + 0x78);
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_0017a751;
    }
  }
  else if ((iVar10 == 2) &&
          (local_60 = *(longlong **)(unaff_RDI + 0x80), local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
LAB_0017a751:
    bVar3 = false;
    goto LAB_0017a75c;
  }
  local_60 = (longlong *)0x0;
LAB_0017a75c:
  FUN_01e561b0();
  FUN_01d8c6e0();
  plVar6 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != (longlong *)0x0) {
    FUN_01e3f820();
    uVar17 = FUN_01e46ed0();
    FUN_01e3f820();
    uVar18 = FUN_01e46ed0();
    param_2 = (float)((ulonglong)uVar17 >> 0x20) - (float)((ulonglong)uVar18 >> 0x20);
    FUN_01e5bd60((float)uVar17 - (float)uVar18,param_2);
  }
  local_38 = (longlong *)0x0;
  FUN_01e5d9c0();
  local_38 = (longlong *)0x0;
  FUN_01e5d070();
  local_38 = (longlong *)0x0;
  bVar1 = false;
  plVar11 = (longlong *)0x0;
  bVar2 = false;
  while (*in_RDX != 0) {
    FUN_01e42030();
    plVar13 = local_48;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar13 == (longlong *)0x0) break;
    FUN_01d3abf0();
    uVar15 = FUN_01e466c0();
    fVar16 = (float)FUN_01e3f820();
    cVar8 = FUN_00d05410(uVar15,fVar16,param_2);
    if (cVar8 == '\0') {
      param_2 = fVar16;
      if (plVar11 != (longlong *)0x0) {
        if (bVar2) {
          FUN_00d50b20();
        }
        bVar2 = false;
        param_2 = fVar16;
      }
      plVar11 = (longlong *)0x0;
      plVar13 = local_38;
      if (local_38 != (longlong *)0x0) goto LAB_0017aa34;
    }
    else {
      (**(code **)(*plVar5 + 0x490))(uVar15);
      plVar13 = local_48;
      FUN_000f5df0();
      pplVar12 = (longlong **)&DAT_02802688;
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x360))();
        cVar9 = FUN_00e85ea0();
        pplVar12 = &local_48;
        if (cVar9 == '\0') {
          pplVar12 = (longlong **)&DAT_02802688;
        }
      }
      plVar13 = *pplVar12;
      if (plVar11 == plVar13) {
        param_2 = fVar16;
        if ((!bVar2) && (plVar11 != (longlong *)0x0)) {
          plVar13 = plVar11;
          if (*(char *)(pplVar12 + 1) != '\0') goto LAB_0017a98e;
          FUN_00d50b00();
          goto joined_r0x0017aa14;
        }
      }
      else {
        if (*(char *)(pplVar12 + 1) == '\0') {
          if (plVar13 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (plVar11 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((bVar2) && (plVar11 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_0017a98e:
          *(undefined1 *)(pplVar12 + 1) = 0;
        }
joined_r0x0017aa14:
        bVar2 = true;
        plVar11 = plVar13;
        param_2 = fVar16;
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar13 = local_38;
      if (plVar11 != local_38) {
LAB_0017aa34:
        if (local_38 != (longlong *)0x0) {
          (**(code **)(*local_38 + 0x918))();
        }
        if ((bVar2) && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        if ((bVar1) && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar13 = plVar11;
        bVar1 = bVar2;
        if (plVar11 == (longlong *)0x0) {
          if (local_60 != (longlong *)0x0) goto LAB_0017aaaf;
          local_38 = (longlong *)0x0;
          plVar13 = local_38;
        }
        else {
          (**(code **)(*plVar11 + 0x918))();
          if (local_60 != (longlong *)0x0) {
LAB_0017aaaf:
            (**(code **)(*local_60 + 0x918))();
            if (local_60 != plVar11) {
              bVar14 = true;
            }
          }
        }
      }
    }
    local_38 = plVar13;
    (**(code **)(*plVar5 + 0x658))();
    plVar7 = local_48;
    plVar13 = (longlong *)*in_RDX;
    if (plVar13 == local_48) {
      if (((char)in_RDX[1] == '\0') && (local_48 != (longlong *)0x0)) {
        if (local_40 != '\0') goto LAB_0017ab31;
        FUN_00d50b00();
        goto LAB_0017ab7b;
      }
LAB_0017ab83:
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar4 = in_RDX[1];
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *in_RDX = (longlong)plVar7;
        if (((char)lVar4 != '\0') && (plVar13 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_0017ab7b:
        *(undefined1 *)(in_RDX + 1) = 1;
        goto LAB_0017ab83;
      }
      *in_RDX = (longlong)local_48;
      if (((char)lVar4 != '\0') && (plVar13 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_0017ab31:
      *(undefined1 *)(in_RDX + 1) = 1;
    }
    if (((*in_RDX == 0) ||
        (((bVar14 && (iVar10 = FUN_01d3a5a0(), iVar10 == 6)) && (cVar8 == '\x01')))) ||
       (iVar10 = FUN_01d3a5a0(), iVar10 == 1)) break;
  }
  if (local_38 != (longlong *)0x0) {
    FUN_01d11e80();
  }
  FUN_01d7c320();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar3 && local_60 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


