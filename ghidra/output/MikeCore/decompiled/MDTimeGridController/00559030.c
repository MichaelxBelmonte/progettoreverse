// Function: FUN_00559030
// Address: 00559030
// Size: 1255 bytes
// Class: MDTimeGridController


undefined8 FUN_00559030(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  char *pcVar6;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong **pplVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  longlong *local_80;
  longlong *local_78;
  char local_70 [8];
  longlong local_68;
  int local_60;
  undefined8 local_5c;
  char local_38 [8];
  
  if (param_2 == 0) {
    return 1;
  }
  pplVar8 = &local_78;
  FUN_01caeb00();
  plVar1 = local_78;
  FUN_000f5df0();
  if (plVar1 == (longlong *)0x0) {
LAB_00559088:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00559088;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar3 = FUN_00558480();
  if (plVar1 == (longlong *)unaff_RDI[0x1e]) {
LAB_0055921e:
    if (plVar1 == (longlong *)unaff_RDI[0x1f]) goto LAB_00559255;
    if (plVar1 == (longlong *)unaff_RDI[0x20]) {
      lVar2 = unaff_RDI[0x22];
    }
    else {
      lVar2 = unaff_RDI[0x22];
    }
  }
  else {
    if (plVar1 != (longlong *)unaff_RDI[0x1f]) {
      if ((plVar1 != (longlong *)unaff_RDI[0x20]) && (plVar1 != (longlong *)unaff_RDI[0x21])) {
        FUN_00d50b00();
        local_38[0] = '\0';
        plVar10 = unaff_RDI;
        local_80 = unaff_RDI;
        do {
          (**(code **)(*plVar10 + 0x370))();
          plVar9 = local_78;
          if (local_78 == plVar10) {
            if (((local_38[0] == '\0') && (local_78 != (longlong *)0x0)) &&
               (plVar9 = plVar10, local_70[0] != '\0')) goto LAB_00559177;
          }
          else {
            local_80 = local_78;
            if (local_70[0] == '\0') {
              if (local_38[0] == '\0') {
                pcVar6 = local_38;
              }
              else {
                FUN_00d50b20();
                pcVar6 = local_38;
              }
            }
            else {
              if (local_38[0] != '\0') {
                FUN_00d50b20();
              }
LAB_00559177:
              local_38[0] = '\x01';
              pcVar6 = local_70;
            }
            *pcVar6 = '\0';
            plVar10 = plVar9;
          }
          if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00082eb0();
          pplVar8 = (longlong **)&DAT_02802688;
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x360))();
            cVar4 = FUN_00e85ea0();
            pplVar8 = &local_80;
            if (cVar4 == '\0') {
              pplVar8 = (longlong **)&DAT_02802688;
            }
          }
          if (*pplVar8 != (longlong *)0x0) {
            if ((local_38[0] == '\0') && (plVar10 != (longlong *)0x0)) {
              FUN_00d50b00();
            }
            break;
          }
        } while (plVar10 != (longlong *)0x0);
        FUN_00d50b20();
        if (plVar10 != (longlong *)0x0) {
          FUN_0078e590();
        }
        if (plVar1 == (longlong *)unaff_RDI[0x11]) {
          bVar11 = false;
        }
        else if (plVar1 == (longlong *)unaff_RDI[0x12]) {
          bVar11 = false;
        }
        else if (plVar1 == (longlong *)unaff_RDI[0x13]) {
          bVar11 = false;
        }
        else if (plVar1 == (longlong *)unaff_RDI[0x14]) {
          bVar11 = false;
        }
        else if (plVar1 == (longlong *)unaff_RDI[0x15]) {
          bVar11 = false;
        }
        else if (plVar1 == (longlong *)unaff_RDI[0x16]) {
          bVar11 = false;
        }
        else if (plVar1 == (longlong *)unaff_RDI[0x17]) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
          if ((((plVar1 != (longlong *)unaff_RDI[0x19]) && (plVar1 != (longlong *)unaff_RDI[0x1a]))
              && (plVar1 != (longlong *)unaff_RDI[0x1b])) && (plVar1 != (longlong *)unaff_RDI[0x1c])
             ) {
            bVar11 = plVar1 == (longlong *)unaff_RDI[0x1d];
          }
        }
        lVar2 = unaff_RDI[0x22];
        if (lVar2 != 0) {
          local_70[0] = '\0';
          local_78 = (longlong *)0x0;
          local_5c = 0;
          local_68 = lVar2;
          if (cVar3 == '\0') {
            local_60 = 0;
            if (0 < *(int *)(lVar2 + 0xc)) {
              local_78 = (longlong *)**(undefined8 **)(lVar2 + 0x10);
              uVar5 = FUN_001080a0();
              FUN_0010a8e0(bVar11,uVar5);
            }
          }
          else {
            for (lVar7 = 0; local_60 = (int)lVar7, local_60 < *(int *)(lVar2 + 0xc);
                lVar7 = lVar7 + 1) {
              local_78 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + lVar7 * 8);
              uVar5 = FUN_001080a0();
              FUN_0010a8e0(bVar11,uVar5);
            }
          }
          FUN_00559b10();
        }
        if (plVar10 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_005592ed;
      }
      goto LAB_0055921e;
    }
LAB_00559255:
    lVar2 = unaff_RDI[0x22];
  }
  if (lVar2 != 0) {
    local_70[0] = '\0';
    local_78 = (longlong *)0x0;
    local_5c = 0;
    local_68 = lVar2;
    if (cVar3 == '\0') {
      local_60 = 0;
      if (0 < *(int *)(lVar2 + 0xc)) {
        local_78 = (longlong *)**(undefined8 **)(lVar2 + 0x10);
        FUN_0010a2f0();
      }
    }
    else {
      for (lVar7 = 0; local_60 = (int)lVar7, local_60 < *(int *)(lVar2 + 0xc); lVar7 = lVar7 + 1) {
        local_78 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + lVar7 * 8);
        FUN_0010a2f0();
      }
    }
    FUN_00559b10();
  }
LAB_005592ed:
  FUN_00558550();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}


