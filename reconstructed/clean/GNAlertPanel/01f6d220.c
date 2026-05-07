// Function: FUN_01f6d220
// Address: 01f6d220
// Size: 1464 bytes
// Class: GNAlertPanel
// === GNAlertPanel properties ===
//                   _infoText
//                   _okTitle
//                   _cancelTitle


uint32_t FUN_01f6d220(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint32_t uVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_178;
  char local_170;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if (*arg1 == 0) {
    plVar8 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar8 + 0x18))();
    plVar1 = (int64_t *)*arg1;
    if (plVar1 == plVar8) {
      if ((char)arg1[1] != '\0') {
        FUN_00d50b20();
        goto LAB_01f6d292;
      }
    }
    else {
      *arg1 = (int64_t)plVar8;
      if (((char)arg1[1] != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(arg1 + 1) = 1;
  }
LAB_01f6d292:
  FUN_01f27fe0();
  lVar2 = *(int64_t *)(this_ptr + 0x78);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_00e0e2a0();
  if (local_110 == '\0') {
    if (local_118 != 0) {
      FUN_00d50b00();
    }
    lVar3 = *(int64_t *)(this_ptr + 0x80);
  }
  else {
    lVar3 = *(int64_t *)(this_ptr + 0x80);
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_00e0e2a0();
  local_60 = 0;
  if (local_100 == '\0') {
    if (local_108 != 0) {
      FUN_00d50b00();
    }
    lVar4 = *(int64_t *)(this_ptr + 0x88);
  }
  else {
    lVar4 = *(int64_t *)(this_ptr + 0x88);
  }
  local_60 = '\x01';
  local_68 = local_108;
  if (lVar4 != 0) {
    local_60 = '\x01';
    FUN_00d50b00();
  }
  FUN_00e0e2a0();
  local_50 = 0;
  if (local_f0 == '\0') {
    if (local_f8 != 0) {
      FUN_00d50b00();
    }
    lVar5 = *(int64_t *)(this_ptr + 0x90);
  }
  else {
    lVar5 = *(int64_t *)(this_ptr + 0x90);
  }
  local_50 = '\x01';
  local_58 = local_f8;
  if (lVar5 != 0) {
    local_50 = '\x01';
    FUN_00d50b00();
  }
  FUN_00e0e2a0();
  local_40 = 0;
  if (local_e0 == '\0') {
    if (local_e8 != 0) {
      FUN_00d50b00();
    }
    lVar6 = *(int64_t *)(this_ptr + 0x98);
  }
  else {
    lVar6 = *(int64_t *)(this_ptr + 0x98);
  }
  local_40 = '\x01';
  local_48 = local_e8;
  if (lVar6 != 0) {
    local_40 = '\x01';
    FUN_00d50b00();
  }
  FUN_00e0e2a0();
  local_30 = 0;
  if (local_d0 == '\0') {
    if (local_d8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_d0 = '\0';
  }
  local_30 = '\x01';
  local_38 = local_d8;
  uVar7 = FUN_01f316e0(&local_58,&local_68,&local_48,&local_38);
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (local_118 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  return uVar7;
}

