// Function: FUN_00d73c90
// Address: 00d73c90
// Size: 615 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d73de3) */
/* WARNING: Removing unreachable block (ram,0x00d73dec) */
/* WARNING: Removing unreachable block (ram,0x00d73e07) */
/* WARNING: Removing unreachable block (ram,0x00d73e13) */
/* WARNING: Removing unreachable block (ram,0x00d73d16) */
/* WARNING: Removing unreachable block (ram,0x00d73d1f) */

void FUN_00d73c90(void)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar5;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  lVar5 = *(longlong *)(unaff_RDI + 0x10);
  if (lVar5 == 0) {
    bVar3 = false;
    lVar5 = 0;
  }
  else {
    local_60 = 0;
    FUN_00d50b00();
    local_60 = '\x01';
    local_68 = lVar5;
    FUN_00d8dab0();
    if (local_40 == 0) {
      lVar5 = 0;
      bVar3 = false;
    }
    else {
      lVar5 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        local_38 = '\0';
        bVar3 = true;
      }
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d64850();
  lVar1 = *unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x10);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x10) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  lVar1 = DAT_0277e650;
  if (lVar5 != 0) {
    if (DAT_0277e650 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar1;
    local_38 = '\0';
    FUN_00ca0840();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  lVar1 = DAT_0277e658;
  if (DAT_0277e658 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_70 = '\0';
  local_78 = plVar4;
  FUN_00d40470(&local_78,&stack0xffffffffffffffa8,3,3);
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((bVar3) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return;
}


