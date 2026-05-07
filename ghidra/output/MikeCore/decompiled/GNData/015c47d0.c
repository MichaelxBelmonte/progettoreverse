// Function: FUN_015c47d0
// Address: 015c47d0
// Size: 693 bytes
// Class: GNData


void FUN_015c47d0(void)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  longlong *unaff_RSI;
  longlong lVar5;
  longlong local_50;
  char local_48 [8];
  char local_38 [8];
  
  lVar1 = *(longlong *)(*unaff_RSI + 0x10);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  cVar3 = FUN_015c43c0();
  if (cVar3 == '\0') {
    cVar3 = FUN_015c45d0();
    if (cVar3 == '\0') {
      while (*(int *)(lVar1 + 0xc) != 0) {
        lVar5 = **(longlong **)(lVar1 + 0x10);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        local_48[0] = '\0';
        cVar3 = FUN_00d23d70();
        if ((local_48[0] != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') break;
        FUN_00d23620();
      }
      local_48[0] = '\0';
      FUN_00d214d0();
      if ((local_48[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d216c0();
    }
    else {
      FUN_00d23620();
      local_48[0] = '\0';
      FUN_00d214d0();
      if ((local_48[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d216c0();
    }
    bVar2 = false;
    lVar5 = 0;
  }
  else {
    FUN_00d23740();
    bVar2 = false;
    lVar5 = 0;
    while (*(int *)(lVar1 + 0xc) != 0) {
      FUN_00d23340();
      local_38[0] = local_48[0];
      pcVar4 = local_48;
      if (local_48[0] == '\0') {
        pcVar4 = local_38;
      }
      *pcVar4 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 == local_50) {
        if ((bVar2) || (lVar5 == 0)) {
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar2 = true;
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else {
        if (local_38[0] == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (lVar5 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
            lVar5 = local_50;
            goto LAB_015c4906;
          }
        }
        else if ((bVar2) && (lVar5 != 0)) {
          FUN_00d50b20();
        }
        bVar2 = true;
        lVar5 = local_50;
      }
LAB_015c4906:
      local_48[0] = '\0';
      FUN_00d23370();
      if ((local_48[0] != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d23740();
      local_50 = lVar5;
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return;
}


