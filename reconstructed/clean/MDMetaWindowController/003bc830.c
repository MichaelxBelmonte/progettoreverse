// Function: FUN_003bc830
// Address: 003bc830
// Size: 1105 bytes
// Class: MDMetaWindowController

void FUN_003bc830(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t *arg1;
  int iVar7;
  int64_t local_80;
  char local_78;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  int local_40;
  int iStack_3c;
  int iStack_38;
  
  FUN_003bc3e0();
  lVar1 = local_58;
  if ((local_50[0] == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  if (*(int *)(lVar1 + 0xc) < 2) {
    FUN_003ba530();
    if (local_58 != 0) {
      FUN_003ba530();
      FUN_003b7ce0();
      lVar4 = local_68;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (local_50[0] != '\0') {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_003ba530();
        FUN_003b7ce0();
        FUN_004b5af0();
        lVar4 = local_58;
        if (local_50[0] == '\0') {
          if (((local_58 != 0) && (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_50[0] = '\0';
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          local_50[0] = '\0';
          local_58 = 0;
          local_48 = lVar4;
          iStack_3c = 0;
          iStack_38 = 0;
          for (lVar6 = 0; local_40 = (int)lVar6, local_40 < *(int *)(lVar4 + 0xc); lVar6 = lVar6 + 1
              ) {
            local_58 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar6 * 8);
            FUN_003b7d30();
          }
          FUN_00274d30();
          FUN_00d50b20();
        }
      }
    }
    if (*(int *)(lVar1 + 0xc) == 1) {
      FUN_00d23310();
      lVar1 = local_58;
      plVar5 = &local_68;
      if (local_50[0] != '\0') {
        plVar5 = (int64_t *)local_50;
      }
      local_68 = CONCAT71(local_68._1_7_,local_50[0]);
      *(char *)plVar5 = '\0';
      if ((local_50[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      FUN_003b7d30();
      if (((char)local_68 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    goto LAB_003bcc60;
  }
  local_48 = *arg1;
  if (local_48 == 0) {
LAB_003bca5c:
    local_50[0] = '\0';
    local_58 = 0;
    local_48 = lVar1;
    local_40 = -1;
    iStack_3c = 0;
    iStack_38 = 0;
    while( true ) {
      if (iStack_3c != 0) {
        if (iStack_3c < 1) {
          iStack_3c = -iStack_3c;
        }
        else {
          local_40 = local_40 - iStack_3c;
          FUN_00d23690();
          iStack_38 = iStack_38 + iStack_3c;
          iStack_3c = 0;
        }
      }
      lVar4 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(local_48 + 0xc) <= local_40) break;
      local_68 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar4 * 8);
      local_60 = '\0';
      local_58 = local_68;
      cVar2 = FUN_00d23d70();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        FUN_003b7d30();
      }
    }
    FUN_00274d30();
  }
  else {
    local_50[0] = '\0';
    local_58 = 0;
    local_40 = -1;
    iStack_3c = 0;
    iStack_38 = 0;
    iVar7 = 0;
    while( true ) {
      lVar4 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(local_48 + 0xc) <= local_40) break;
      local_58 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar4 * 8);
      iVar3 = FUN_003b7d20();
      if (iVar7 < iVar3) {
        iVar7 = iVar3;
      }
      if (iStack_3c != 0) {
        if (iStack_3c < 1) {
          iStack_3c = -iStack_3c;
        }
        else {
          local_40 = local_40 - iStack_3c;
          FUN_00d23690();
          iStack_38 = iStack_38 + iStack_3c;
          iStack_3c = 0;
        }
      }
    }
    FUN_00274d30();
    if (lVar1 != 0) goto LAB_003bca5c;
  }
  lVar4 = *arg1;
  if (lVar4 != 0) {
    local_50[0] = '\0';
    local_58 = 0;
    iStack_38 = 0;
    local_40 = 0;
    iStack_3c = 0;
    local_48 = lVar4;
    if (0 < *(int *)(lVar4 + 0xc)) {
      lVar6 = 0;
      do {
        local_68 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar6 * 8);
        local_60 = '\0';
        local_58 = local_68;
        cVar2 = FUN_00d23d70();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          FUN_003b7d30();
        }
        lVar6 = lVar6 + 1;
        local_40 = (int)lVar6;
      } while (local_40 < *(int *)(lVar4 + 0xc));
    }
    FUN_00274d30();
  }
  if (lVar1 == 0) {
    return;
  }
LAB_003bcc60:
  FUN_00d50b20();
  return;
}

