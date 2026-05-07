// Function: FUN_01b74770
// Address: 01b74770
// Size: 1826 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_01b74770(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  char cVar3;
  uint64_t uVar4;
  uint64_t arg1;
  int64_t *this_ptr;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  uint64_t local_30;
  char local_28;
  
  local_30 = FUN_00e7bdb0();
  if (((arg1 >> 0x20 == 0) || (local_30 >> 0x20 == 0)) ||
     (cVar3 = FUN_00e7c000(), cVar3 == '\0')) {
    local_30 = this_ptr[0x33];
    if ((((int)(arg1 >> 0x20) != 0) && (local_30 >> 0x20 != 0)) &&
       (cVar3 = FUN_00e7c000(), cVar3 != '\0')) {
      return;
    }
    if ((*(float *)((int64_t)this_ptr + 0x1a4) != 0.0) ||
       (NAN(*(float *)((int64_t)this_ptr + 0x1a4)))) goto LAB_01b74bc1;
    if ((this_ptr[0x35] != 0) && (cVar3 = FUN_01f98110(), cVar3 != '\0')) {
      (**(code **)(*(int64_t *)this_ptr[0x35] + 0x370))();
    }
    FUN_00d50b00();
    local_108 = g_027e7c90;
    if (g_027e7c90 != 0) {
      FUN_00d50b00();
    }
    local_100 = '\x01';
    FUN_00d46dc0(*(void*)((int64_t)this_ptr + 0x1a4));
    local_70 = local_50;
    local_68 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_68 = '\x01';
    FUN_00d46dc0(g_02390124);
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    FUN_01f981c0(g_02420b10,&local_108,&local_60,2);
    uVar1 = this_ptr[0x35];
    uVar4 = uVar1;
    if (uVar1 != local_30) {
      if (local_28 == '\0') {
        if (local_30 == 0) {
          uVar4 = 0;
          goto LAB_01b749f5;
        }
        FUN_00d50b00();
        uVar1 = this_ptr[0x35];
        this_ptr[0x35] = local_30;
        uVar4 = local_30;
      }
      else {
        local_28 = '\0';
        uVar4 = local_30;
LAB_01b749f5:
        this_ptr[0x35] = uVar4;
      }
      if (uVar1 != 0) {
        FUN_00d50b20();
        uVar4 = local_30;
      }
    }
    if ((local_28 != '\0') && (uVar4 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(this_ptr[0x28] + 0x10))();
    FUN_00d50b00();
    FUN_01f98340();
    if (this_ptr + 0x28 != (int64_t *)0x0) {
      (**(code **)(this_ptr[0x28] + 0x10))();
      FUN_00d50b20();
    }
    FUN_01f97770();
    local_e0 = 0;
    local_e8 = this_ptr[0x35];
    if (local_e8 != 0) {
      FUN_00d50b00();
    }
    local_e0 = '\x01';
    FUN_01f979c0();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)this_ptr[0x35] + 0x368))();
LAB_01b74bc1:
    this_ptr[0x33] = arg1;
    (**(code **)(*this_ptr + 0x620))();
    return;
  }
  if (*(float *)((int64_t)this_ptr + 0x1a4) <= 0.0) goto LAB_01b74e61;
  if ((this_ptr[0x35] != 0) && (cVar3 = FUN_01f98110(), cVar3 != '\0')) {
    (**(code **)(*(int64_t *)this_ptr[0x35] + 0x370))();
  }
  FUN_00d50b00();
  local_118 = g_027e7c90;
  if (g_027e7c90 != 0) {
    FUN_00d50b00();
  }
  local_110 = '\x01';
  FUN_00d46dc0(*(void*)((int64_t)this_ptr + 0x1a4));
  lVar2 = local_50;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00d46dc0(0);
  local_80 = local_40;
  local_78 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_78 = '\x01';
  FUN_01f981c0(g_02420b10,&local_118,&local_80,1);
  uVar1 = this_ptr[0x35];
  uVar4 = uVar1;
  if (uVar1 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        uVar4 = 0;
        goto LAB_01b74c7f;
      }
      FUN_00d50b00();
      uVar1 = this_ptr[0x35];
      this_ptr[0x35] = local_30;
      uVar4 = local_30;
    }
    else {
      local_28 = '\0';
      uVar4 = local_30;
LAB_01b74c7f:
      this_ptr[0x35] = uVar4;
    }
    if (uVar1 != 0) {
      FUN_00d50b20();
      uVar4 = local_30;
    }
  }
  if ((local_28 != '\0') && (uVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  (**(code **)(this_ptr[0x28] + 0x10))();
  FUN_00d50b00();
  FUN_01f98340();
  if (this_ptr + 0x28 != (int64_t *)0x0) {
    (**(code **)(this_ptr[0x28] + 0x10))();
    FUN_00d50b20();
  }
  FUN_01f97770();
  local_f0 = 0;
  local_f8 = this_ptr[0x35];
  if (local_f8 != 0) {
    FUN_00d50b00();
  }
  local_f0 = '\x01';
  FUN_01f979c0();
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)this_ptr[0x35] + 0x368))();
  (**(code **)(*this_ptr + 0x620))();
LAB_01b74e61:
  if (this_ptr[0x35] != 0) {
    this_ptr[0x35] = 0;
    FUN_00d50b20();
  }
  return;
}

