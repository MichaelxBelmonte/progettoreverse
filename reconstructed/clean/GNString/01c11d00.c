// Function: FUN_01c11d00
// Address: 01c11d00
// Size: 868 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01c11d00(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char *pcVar4;
  int64_t *this_ptr;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  if (*param_2 != 0) {
    plVar3 = (int64_t *)FUN_01c2a780();
    (**(code **)(*plVar3 + 0x18))();
    FUN_01c110f0();
    local_70 = local_40;
    local_68 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_68 = '\x01';
    FUN_01c1a300();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027e7c10;
    if (g_027e7c10 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_0277cbe0;
    if (g_0277cbe0 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar1;
    local_a8 = '\x01';
    local_a0 = *param_2;
    local_98 = '\0';
    FUN_00d14780(&local_a0,&local_b0);
    local_60 = local_40;
    local_58 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_58 = '\x01';
    FUN_01c1a370();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_01c110c0();
    local_48 = 0;
    local_50 = CONCAT71(uStack_7f,local_80);
    if (local_78 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_48 = '\x01';
    local_88 = '\0';
    local_90 = plVar3;
    FUN_01c1a5a0();
    lVar2 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0xc) != 0) {
        FUN_00d23310();
        pcVar4 = local_38;
        if (local_38[0] == '\0') {
          pcVar4 = &local_80;
        }
        local_80 = local_38[0];
        *pcVar4 = '\0';
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        *(void*)(this_ptr + 1) = 0;
        if ((local_80 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        *this_ptr = local_40;
        *(void*)(this_ptr + 1) = 1;
        FUN_00d50b20();
        FUN_00d50b20();
        return;
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

