// Function: FUN_00e45ff0
// Address: 00e45ff0
// Size: 598 bytes
// Class: GNBKVA

uint64_t FUN_00e45ff0(uint64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  int64_t this_ptr;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  FUN_00daab70();
  lVar2 = *(int64_t *)(this_ptr + 0x90);
  if ((lVar2 != 0) && (lVar5 = *(int64_t *)(lVar2 + 0x10), 0 < *(int *)(lVar5 + 0xc))) {
    lVar4 = 0;
    local_70 = lVar5;
    do {
      lVar2 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + lVar4 * 8);
      FUN_00c7e7b0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00dab040();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00c811b0();
      FUN_00daab70();
      local_78 = '\0';
      local_80 = lVar2;
      FUN_00e47ad0(param_1,&local_80);
      lVar5 = local_70;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_00d795b0();
      }
      FUN_00daab70();
      if (0 < iVar1) {
        iVar3 = 0;
        do {
          FUN_00d79670(param_1,iVar3);
          local_60 = 0;
          lVar2 = *(int64_t *)(this_ptr + 0x30);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_60 = '\x01';
          local_68 = lVar2;
          FUN_00e5d8e0();
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          lVar5 = local_70;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          iVar3 = iVar3 + 1;
        } while (iVar1 != iVar3);
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      lVar4 = lVar4 + 1;
      lVar2 = (int64_t)*(int *)(lVar5 + 0xc);
    } while (lVar4 < lVar2);
  }
  return CONCAT71((int7)((uint64_t)lVar2 >> 8),1);
}

