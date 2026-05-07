// Function: FUN_00d0a120
// Address: 00d0a120
// Size: 1545 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_00d0a120(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40;
  
  FUN_00d4efa0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  cVar4 = FUN_00d23d70();
  if (cVar4 == '\0') {
    FUN_00d21140();
  }
  FUN_00d0a070();
  if (local_48 != 0) {
    FUN_00d50b00();
  }
  FUN_00d0b040();
  lVar3 = g_0277c878;
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
    lVar3 = g_0277c878;
  }
  g_0277c878 = lVar3;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  FUN_00c7e7b0();
  if (local_68 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027f37d8;
  if (g_027f37d8 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  this_ptr[10] = *arg1;
  cVar4 = (**(code **)(*this_ptr + 0x3a0))();
  if (cVar4 != '\0') {
    if (this_ptr[0xf] != 0) {
      FUN_00d4efa0();
      FUN_00d4efa0();
      if (lVar3 == local_68) goto LAB_00d0a4d5;
    }
    FUN_00c811e0();
    lVar1 = this_ptr[0xf];
    if (lVar1 != lVar3) {
      if (lVar3 == 0) {
        this_ptr[0xf] = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = this_ptr[0xf];
        this_ptr[0xf] = lVar3;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)this_ptr[0xf] + 0x18))();
  }
LAB_00d0a4d5:
  plVar2 = (int64_t *)this_ptr[0xb];
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
    local_138 = *arg1;
    local_130 = '\0';
    local_128 = local_48;
    local_120 = '\0';
    cVar4 = (**(code **)(*plVar2 + 0x18))(&local_128,&local_138);
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') goto LAB_00d0a640;
  }
  cVar4 = (**(code **)(*(int64_t *)*arg1 + 0x1e8))();
  plVar2 = (int64_t *)*arg1;
  if (cVar4 == '\0') {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x120))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x250))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_00d0a640:
  plVar2 = (int64_t *)this_ptr[0xb];
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
    local_f8 = *arg1;
    local_f0 = '\0';
    local_e8 = local_48;
    local_e0 = '\0';
    (**(code **)(*plVar2 + 0x20))(&local_e8,&local_f8);
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (local_48 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

