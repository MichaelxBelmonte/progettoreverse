// Function: FUN_00127400
// Address: 00127400
// Size: 648 bytes
// Class: MUAudioFileSource

void FUN_00127400(uint32_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  void* pVar5;
  char *pcVar6;
  int64_t lVar7;
  int64_t local_80;
  char local_78 [8];
  int64_t local_70;
  uint64_t local_68;
  uint32_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  FUN_00d23310();
  pVar5 = CONCAT31((int3)((uint)param_1 >> 8),local_78[0]);
  pcVar6 = local_38;
  if (local_78[0] != '\0') {
    pcVar6 = local_78;
  }
  local_38[0] = local_78[0];
  *pcVar6 = '\0';
  if ((local_78[0] != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8b60();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  lVar2 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_78[0] = '\0';
    local_70 = lVar2;
    local_60 = 0;
    local_68 = 0;
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar7 = 0;
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar7 * 8);
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f4a50();
        local_40 = '\0';
        local_48 = lVar1;
        cVar3 = FUN_00d23d70();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          pvVar4 = _pthread_getspecific(pVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f4a00();
        }
        else {
          pvVar4 = _pthread_getspecific(pVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f4a00();
        }
        lVar7 = lVar7 + 1;
        local_68 = CONCAT44(local_68._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar2 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  return;
}

