// Function: FUN_002e8930
// Address: 002e8930
// Size: 1825 bytes
// Class: MUMultiTrackItem

void FUN_002e8930(void)

{
  int64_t *plVar1;
  char cVar2;
  int64_t *plVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar4;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
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
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  lVar4 = *arg1;
  if (this_ptr[0x4b] == lVar4) {
    return;
  }
  this_ptr[0x4b] = lVar4;
  if (lVar4 == 0) {
    lVar4 = 0;
    if (this_ptr[0x47] != 0) {
      FUN_00d50130();
      lVar4 = this_ptr[0x47];
    }
    if (lVar4 != 0) {
      this_ptr[0x47] = 0;
      FUN_00d50b20();
    }
    if (this_ptr[0x58] == 0) {
      return;
    }
    this_ptr[0x58] = 0;
    FUN_00d50b20();
    return;
  }
  FUN_00d50b00();
  local_158 = g_026fe468;
  if (g_026fe468 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_026fe470;
  local_150 = '\x01';
  if (g_026fe470 != 0) {
    FUN_00d50b00();
  }
  local_148 = lVar4;
  local_140 = '\x01';
  local_138 = this_ptr[0x4b];
  local_130 = '\0';
  FUN_000bf690(&local_148,&local_158,&local_138);
  plVar1 = (int64_t *)this_ptr[0x47];
  plVar3 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_002e8a1e;
      }
      FUN_00d50b00();
      plVar1 = (int64_t *)this_ptr[0x47];
      this_ptr[0x47] = (int64_t)local_38;
      plVar3 = local_38;
    }
    else {
      local_30 = '\0';
      plVar3 = local_38;
LAB_002e8a1e:
      this_ptr[0x47] = (int64_t)plVar3;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = local_38;
    }
  }
  if ((local_30 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_128 = g_026fe478;
  if (g_026fe478 != 0) {
    FUN_00d50b00();
  }
  local_120 = '\x01';
  (**(code **)(*(int64_t *)this_ptr[0x4b] + 0x498))();
  local_78 = local_b8;
  local_70 = 0;
  if (local_b0 == '\0') {
    if (local_b8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_b0 = '\0';
  }
  local_70 = '\x01';
  FUN_0006e1c0();
  FUN_00e86210();
  local_118 = g_026fe480;
  if (g_026fe480 != 0) {
    FUN_00d50b00();
  }
  local_110 = '\x01';
  FUN_00c841b0();
  local_68 = local_a8;
  local_60 = 0;
  if (local_a0 == '\0') {
    if (local_a8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_a0 = '\0';
  }
  local_60 = '\x01';
  local_100 = '\0';
  local_108 = 0;
  FUN_000bfbc0(&local_78,&local_128,0xa0,&local_68);
  plVar1 = (int64_t *)this_ptr[0x58];
  plVar3 = plVar1;
  if (plVar1 == local_38) goto LAB_002e8cf1;
  if (local_30 == '\0') {
    if (local_38 == (int64_t *)0x0) {
      plVar3 = (int64_t *)0x0;
      goto LAB_002e8ca6;
    }
    FUN_00d50b00();
    plVar1 = (int64_t *)this_ptr[0x58];
    this_ptr[0x58] = (int64_t)local_38;
    plVar3 = local_38;
  }
  else {
    local_30 = '\0';
    plVar3 = local_38;
LAB_002e8ca6:
    this_ptr[0x58] = (int64_t)plVar3;
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar3 = local_38;
  }
LAB_002e8cf1:
  if ((local_30 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_0006e1c0();
  FUN_00e86210();
  local_f8 = g_026d83d8;
  if (g_026d83d8 != 0) {
    FUN_00d50b00();
  }
  local_f0 = '\x01';
  FUN_00c841b0();
  local_58 = local_38;
  local_50 = 0;
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_50 = '\x01';
  local_e0 = '\0';
  local_e8 = 0;
  FUN_000bfd00();
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  FUN_000823a0();
  FUN_00e86210();
  local_d8 = g_026f6f60;
  if (g_026f6f60 != 0) {
    FUN_00d50b00();
  }
  local_d0 = '\x01';
  FUN_00c841b0();
  local_48 = local_38;
  local_40 = 0;
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_40 = '\x01';
  local_c0 = '\0';
  local_c8 = 0;
  FUN_000bfd00();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_38 + 0x450))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    cVar2 = FUN_00bd2290();
    if ((cVar2 == '\0') && (cVar2 = FUN_00751ba0(), cVar2 != '\0')) {
      FUN_016ae5f0();
    }
    (**(code **)(*this_ptr + 0x9e8))();
  }
  else {
    (**(code **)(*this_ptr + 0x9e8))();
  }
  return;
}

