// Function: FUN_01e30190
// Address: 01e30190
// Size: 674 bytes
// Class: GNClassDescription


/* WARNING: Type propagation algorithm not settling */

void FUN_01e30190(void)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong *unaff_RDI;
  longlong *plVar6;
  longlong **pplVar7;
  bool bVar8;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_50 = 0;
  plVar6 = (longlong *)0x0;
  while( true ) {
    FUN_00ca1380();
    lVar4 = local_48;
    local_80 = (longlong *)CONCAT71(local_80._1_7_,local_40[0]);
    pplVar7 = (longlong **)local_40;
    if (local_40[0] == '\0') {
      pplVar7 = &local_80;
    }
    *(undefined1 *)pplVar7 = 0;
    if ((local_40[0] != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
    iVar1 = *(int *)(lVar4 + 0xc);
    if ((char)local_80 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 <= local_50) break;
    FUN_00ca1380();
    lVar4 = local_48;
    local_38[0] = local_40[0];
    pplVar7 = (longlong **)local_40;
    if (local_40[0] == '\0') {
      pplVar7 = (longlong **)local_38;
    }
    *(undefined1 *)pplVar7 = 0;
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + local_50 * 8);
    local_78 = '\0';
    local_80 = plVar2;
    FUN_00081d60();
    pplVar7 = (longlong **)&DAT_02802688;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar5 = FUN_00e85ea0();
      pplVar7 = &local_80;
      if (cVar5 == '\0') {
        pplVar7 = (longlong **)&DAT_02802688;
      }
    }
    plVar3 = *pplVar7;
    if (plVar3 != plVar6) {
      if (*(char *)(pplVar7 + 1) == '\0') {
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar8 = plVar6 != (longlong *)0x0;
        plVar6 = plVar3;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      else {
        if (plVar6 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        *(undefined1 *)(pplVar7 + 1) = 0;
        plVar6 = plVar3;
        if ((local_78 != '\0') && (plVar2 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_01d28610();
      lVar4 = local_48;
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 == 0) {
        local_70 = *unaff_RDI;
        local_68 = '\0';
        FUN_01d2eb50();
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d2e930();
      lVar4 = local_48;
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 == 0) {
        local_60 = *unaff_RDI;
        local_58 = '\0';
        FUN_01d2e920();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    local_50 = local_50 + 1;
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


