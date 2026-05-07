// Function: FUN_01eb5e80
// Address: 01eb5e80
// Size: 765 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x01eb60a1) */
/* WARNING: Removing unreachable block (ram,0x01eb60b1) */
/* WARNING: Removing unreachable block (ram,0x01eb6126) */
/* WARNING: Removing unreachable block (ram,0x01eb612f) */
/* WARNING: Removing unreachable block (ram,0x01eb6181) */
/* WARNING: Removing unreachable block (ram,0x01eb618e) */

void FUN_01eb5e80(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong *plVar6;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  int local_4c;
  longlong local_40;
  char local_38;
  
  lVar5 = DAT_027f0ae8;
  local_70 = 0;
  if (*param_2 != 0) {
    if (DAT_027f0ae8 != 0) {
      FUN_00d50b00();
    }
    cVar3 = FUN_00d90870();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = DAT_027f0ae8;
    if (cVar3 != '\0') {
      if (DAT_027f0ae8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8c7a0();
      FUN_00d8f140();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        return;
      }
      local_4c = FUN_00d8d560();
      lVar5 = 0;
      plVar6 = (longlong *)0x0;
      bVar2 = false;
      while( true ) {
        (**(code **)(*unaff_RDI + 0x4a0))();
        iVar4 = *(int *)(local_40 + 0xc);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (iVar4 <= lVar5) break;
        (**(code **)(*unaff_RDI + 0x4a0))();
        plVar1 = *(longlong **)(*(longlong *)(local_40 + 0x10) + lVar5 * 8);
        if (plVar6 == plVar1) {
          if ((!bVar2) && (plVar6 != (longlong *)0x0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (plVar6 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar2 = true;
            plVar6 = plVar1;
          }
          else {
            bVar2 = true;
            plVar6 = plVar1;
          }
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        iVar4 = (**(code **)(*plVar6 + 0xa88))();
        if (iVar4 == local_4c) {
          (**(code **)(*plVar6 + 0x958))();
        }
        lVar5 = lVar5 + 1;
      }
      if ((bVar2) && (plVar6 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
    local_70 = *param_2;
  }
  local_68 = '\0';
  local_60 = *param_1;
  local_58 = '\0';
  FUN_01d12540(&local_60,&local_70);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  return;
}


