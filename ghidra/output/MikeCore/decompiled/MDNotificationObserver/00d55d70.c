// Function: FUN_00d55d70
// Address: 00d55d70
// Size: 723 bytes
// Class: MDNotificationObserver


/* WARNING: Removing unreachable block (ram,0x00d55eef) */
/* WARNING: Removing unreachable block (ram,0x00d55efb) */
/* WARNING: Removing unreachable block (ram,0x00d55f0d) */
/* WARNING: Removing unreachable block (ram,0x00d55f1d) */

void FUN_00d55d70(void)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  char *pcVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar5 = FUN_00d8ca50();
  lVar2 = DAT_02774da0;
  if (cVar5 == '\0') {
    (**(code **)(*unaff_RDI + 0x80))();
  }
  else {
    if (DAT_02774da0 != 0) {
      FUN_00e31530();
    }
    local_88 = lVar2;
    local_80 = '\x01';
    FUN_00d91000(1,&local_88);
    plVar3 = local_48;
    if (local_40[0] == '\0') {
      if (((local_48 != (longlong *)0x0) && (FUN_00e31530(), local_40[0] != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23340();
    plVar4 = local_48;
    pcVar6 = local_38;
    if (local_40[0] != '\0') {
      pcVar6 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (plVar4 != (longlong *)0x0)) {
      FUN_00e31530();
    }
    FUN_00d23740();
    if (*(int *)((longlong)plVar3 + 0xc) == 0) {
      if (unaff_RDI == (longlong *)0x0) {
        unaff_RDI = (longlong *)0x0;
        bVar1 = false;
      }
      else {
        bVar1 = true;
        FUN_00e31530();
      }
    }
    else {
      local_78 = plVar3;
      local_70 = '\0';
      (**(code **)(*unaff_RDI + 0xa0))();
      unaff_RDI = local_48;
      if (local_48 == (longlong *)0x0) {
        bVar1 = false;
        unaff_RDI = (longlong *)0x0;
      }
      else if (local_40[0] == '\0') {
        FUN_00e31530();
        bVar1 = true;
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
        bVar1 = true;
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_68 = *unaff_RSI;
    local_60 = '\0';
    local_58 = plVar4;
    local_50 = '\0';
    (**(code **)(*unaff_RDI + 0x80))();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (bVar1) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}


