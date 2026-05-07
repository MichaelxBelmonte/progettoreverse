// Function: FUN_004a5340
// Address: 004a5340
// Size: 1113 bytes
// Class: MUAudioFileSource

int64_t * FUN_004a5340(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  FUN_003b7950();
  if ((local_80 == '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  lVar7 = *(int64_t *)(arg1 + 0x38);
  if (lVar7 == 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01713990();
  }
  else {
    FUN_00d50b00();
    local_90 = '\x01';
    local_98 = lVar7;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if ((local_80 == '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (local_88 != (int64_t *)0x0) {
    if (0 < *(int *)((int64_t)local_88 + 0xc)) {
      lVar7 = 0;
      do {
        lVar1 = *(int64_t *)(local_88[2] + lVar7 * 8);
        FUN_004f9670();
        lVar2 = local_40;
        local_60 = local_38[0];
        pcVar6 = &local_60;
        pcVar5 = local_38;
        if (local_38[0] == '\0') {
          pcVar5 = pcVar6;
        }
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific((void*)pcVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004fae50();
        local_50 = local_40;
        local_48 = 0;
        if (local_38[0] == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38[0] = '\0';
        }
        local_48 = '\x01';
        cVar3 = (**(code **)(*local_88 + 0x50))();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          *(void*)(this_ptr + 1) = 0;
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          *this_ptr = lVar1;
          *(void*)(this_ptr + 1) = 1;
          if ((local_60 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
          FUN_000be170();
          FUN_00d50b20();
          goto LAB_004a578e;
        }
        if ((local_60 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)((int64_t)local_88 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  if (local_88 != (int64_t *)0x0) {
LAB_004a578e:
    FUN_00d50b20();
  }
  return this_ptr;
}

