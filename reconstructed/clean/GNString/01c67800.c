// Function: FUN_01c67800
// Address: 01c67800
// Size: 761 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01c67800(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t *arg1;
  int64_t this_ptr;
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
  
  if (*(int64_t *)(this_ptr + 0x198) == 0) {
    lVar1 = *(int64_t *)(this_ptr + 0x1a8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_60 = *arg1;
    local_58 = '\0';
    FUN_015056c0();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(int64_t *)(this_ptr + 0x198);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d960();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    lVar1 = g_027ebe30;
    if (g_027ebe30 != 0) {
      FUN_00d50b00();
    }
    local_80 = *arg1;
    local_78 = '\0';
    local_70 = 0;
    local_68 = '\0';
    FUN_00d40470(&local_70,&local_80,3,3);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0x160) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(int64_t *)(this_ptr + 0x160);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_50 = *arg1;
    local_48 = '\0';
    FUN_01c878e0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01c51000();
  return;
}

