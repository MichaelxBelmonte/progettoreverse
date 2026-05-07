// Function: FUN_01c78b10
// Address: 01c78b10
// Size: 864 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01c78b10(void* param_1,int64_t *param_2)

{
  char cVar1;
  void *pvVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  void* pVar5;
  int64_t *plVar6;
  char *pcVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_d8;
  char local_d0 [8];
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  if (*this_ptr != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b8 = *this_ptr;
    local_b0 = '\0';
    local_a8 = *arg1;
    local_a0 = '\0';
    local_98 = *param_2;
    local_90 = '\0';
    uVar3 = FUN_00e7bdb0();
    uVar4 = FUN_00e7bdb0();
    local_80 = '\0';
    local_88 = 0;
    plVar6 = &local_98;
    cVar1 = FUN_01516650(0,&local_a8,uVar3,uVar4);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      pvVar2 = _pthread_getspecific((void*)plVar6);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150d890();
      pvVar2 = _pthread_getspecific((void*)plVar6);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505930();
      FUN_00d23310();
      pVar5 = (void*)CONCAT71((int7)((uint64_t)plVar6 >> 8),local_d0[0]);
      pcVar7 = local_38;
      if (local_d0[0] != '\0') {
        pcVar7 = local_d0;
      }
      local_38[0] = local_d0[0];
      *pcVar7 = '\0';
      if ((local_d0[0] != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar2 = _pthread_getspecific(pVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7210();
      local_48 = local_58;
      local_40 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_40 = '\x01';
      FUN_012879b0();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

