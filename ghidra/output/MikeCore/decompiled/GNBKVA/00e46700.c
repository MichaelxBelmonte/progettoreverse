// Function: FUN_00e46700
// Address: 00e46700
// Size: 741 bytes
// Class: GNBKVA


undefined8 FUN_00e46700(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  char *pcVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  uint local_4c;
  char local_40 [8];
  char local_38 [8];
  
  plVar2 = *(longlong **)(unaff_RDI + 0xd0);
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(unaff_RDI + 0xa0) + 0x10) + 0xc);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x18))(0);
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00e39e40();
  FUN_00e38f50();
  FUN_00e39e40();
  FUN_00e39e40();
  *(undefined1 *)(unaff_RDI + 0x2c) = 0;
  lVar3 = *unaff_RSI;
  local_40[0] = '\0';
  FUN_00e38fb0();
  if ((local_40[0] != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  local_4c = 0;
  while( true ) {
    FUN_00e46bf0();
    local_38[0] = local_40[0];
    pcVar5 = local_40;
    if (local_40[0] == '\0') {
      pcVar5 = local_38;
    }
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) break;
    local_40[0] = '\0';
    cVar4 = FUN_00e3a2e0();
    if ((local_40[0] != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      local_40[0] = '\0';
      FUN_00e3a1c0();
      if ((local_40[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      local_40[0] = '\0';
      FUN_00e3a1c0();
      if ((local_40[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      FUN_00e47ce0();
      FUN_00e48260();
      local_40[0] = '\0';
      FUN_00e3a1c0();
      if ((local_40[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      plVar2 = *(longlong **)(unaff_RDI + 0xd0);
      if ((plVar2 != (longlong *)0x0) && (local_4c = local_4c + 1, (local_4c & 0x3ff) == 0)) {
        FUN_00d50b00();
        (**(code **)(*plVar2 + 0x18))((float)(int)local_4c / (float)(iVar1 + 1));
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
      }
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  plVar2 = *(longlong **)(unaff_RDI + 0xd0);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x18))(DAT_02390124);
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  return 1;
}


